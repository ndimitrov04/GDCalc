#pragma once
#include <string>
#include <Windows.h>
#include <iostream>
#include <filesystem>
#include <vector>
#include <direct.h>
#include <fstream>
#include <sstream>

#pragma warning(disable : 4996)

class Player {
private:
	std::string m_name;
	int m_lvl;
	double m_atkDmg;
	double m_talentDmg; //Talent damage in percents
	double m_bonusDmg; //Bonus damage can be elemental, physical, burst dmg bonus (noblesse), etc.
	double m_critDmg;
	bool m_crit; //Will the hit deal crit dmg or normal dmg?
public:
	Player(std::string name, int lvl, float atkDmg, float talentDmg, float bonusDmg, float critDmg, bool crit)
		: m_name{ name }, m_lvl{ lvl }, m_atkDmg{ atkDmg }, m_talentDmg{ talentDmg }, m_bonusDmg{ bonusDmg }, m_critDmg{ critDmg }, m_crit{ crit }
	{
	}

	std::string Name() {
		return m_name;
	}
	int level() {
		return m_lvl;
	}
	double atkDmg() {
		return m_atkDmg;
	}
	double talentDmg() {
		return m_talentDmg;
	}
	double bonusDmg() {
		return m_bonusDmg;
	}
	double critDmg() {
		return m_critDmg;
	}
	bool crit() {
		return m_crit;
	}
	void changeName(std::string name) {
		m_name = name;
	}
	void changeLvl(int lvl) {
		m_lvl = lvl;
	}
	void changeAtk(double atk) {
		m_atkDmg = atk;
	}
	void changeTalent(double talent) {
		m_talentDmg = talent;
	}
	void changeBonus(double bonus) {
		m_bonusDmg = bonus;
	}
	void changeCritDmg(double critDmg) {
		m_critDmg = critDmg;
	}
	void changeCrit(bool crit) {
		m_crit = crit;
	}

	double OutgoingDamage() {
		double OutgoingDamage{ m_atkDmg * (m_talentDmg / 100) * (1 + m_bonusDmg / 100) };
		if (m_crit) {
			OutgoingDamage = OutgoingDamage * (1 + m_critDmg / 100);
		}
		return OutgoingDamage;
	}
};

class Enemy {
private:
	std::string m_name;
	int m_lvl;
	double m_res; //Enemy resistance
public:
	Enemy(std::string name, int lvl, double res)
		: m_name{ name }, m_lvl{ lvl }, m_res{ res }
	{
	}

	void changeLevel(int lvl) {
		m_lvl = lvl;
	}
	void changeResistance(int res) {
		m_res = res;
	}

	double Defense() {
		return 5 * m_lvl + 500;
	}
	double DefMultiplier(double enemyDefense, int playerLevel) {
		return 1 - (enemyDefense / (enemyDefense + 5 * playerLevel + 500));
	}
	double ResMultiplier() {
		if (m_res / 100 < 0) {
			return 1 - ((m_res / 100) / 2);
		}
		else if (m_res / 100 >= 0.75) {
			return 1 / (4 * (m_res / 100) + 1);
		}
		else {
			return 1 - m_res / 100;
		}
	}
};

//Damage dealt
double IncomingDmg(double OutgoingDmg, double DefMultiplier, double ResMultiplier) {
	return OutgoingDmg * DefMultiplier * ResMultiplier;
}

//Open the damage resistance website
void openDMGRESWebsite() {
	system("start https://genshin-impact.fandom.com/wiki/Resistance#Base_Enemy_Resistances");
}

//Save profile to a vector (& here is very important, otherwise this doesnt work)
void saveProfile(Player profileToSave, std::vector<Player>& vector) {
	vector.push_back(profileToSave);
}

//Load profile from a vector 
Player loadProfile(std::vector<Player>& vector, std::string name) {
	for (Player profile : vector) {
		if (name == profile.Name()) {
			return profile;
		}
	}
}

void saveVectorToFile(std::vector<Player>& vector) {
	std::ofstream file{ "save.gcps" };
	for (Player profile : vector) {
		file << profile.Name() << "\n";
		file << profile.level() << "\n";
		file << profile.atkDmg() << "\n";
		file << profile.talentDmg() << "\n";
		file << profile.bonusDmg() << "\n";
		file << profile.critDmg() << "\n";
		file << profile.crit() << "\n";
	}
	file << "end";
}

void loadVectorFromFile(std::vector<Player>& vector) {
	std::ifstream file{ "save.gcps" };
	int iterator{ 0 };
	int iteration{ 0 };

	std::string name{};
	int lvl{};
	float atkDmg{};
	float talentDmg{}; //Talent damage in percents
	float bonusDmg{}; //Bonus damage can be elemental, physical, burst dmg bonus (noblesse), etc.
	float critDmg{};
	bool crit{};

	for (std::string line; getline(file, line);) {
		switch (iteration) {
		case 0:
			name = static_cast<std::string>(line);
			iterator++;
			break;
		case 1:
			sscanf(line.c_str(), "%i", &lvl);
			iterator++;
			break;
		case 2:
			sscanf(line.c_str(), "%a", &atkDmg);
			iterator++;
			break;
		case 3:
			sscanf(line.c_str(), "%a", &talentDmg);
			iterator++;
			break;
		case 4:
			sscanf(line.c_str(), "%a", &bonusDmg);
			iterator++;
			break;
		case 5:
			sscanf(line.c_str(), "%a", &critDmg);
			iterator++;
			break;
		case 6:
			crit = false;
			vector.push_back(Player(name, lvl, static_cast<double>(atkDmg), static_cast<double>(talentDmg), 
				static_cast<double>(bonusDmg), static_cast<double>(critDmg), crit));
			iterator = 0;
			break;
		}
		iteration = iterator;
	}
}

//save names in namevector while making sure there are no duplicates
void saveNames(std::vector<std::string>& nameVector, std::vector<Player>& profilesVector) {
	bool alreadyExists{};
	for (Player profile : profilesVector) {
		for (std::string name : nameVector) {
			if (name == profile.Name()) {
				alreadyExists = true;
			}
		}
		if (alreadyExists == false) {
			nameVector.push_back(profile.Name());
		}
		alreadyExists = false;
	}
}

//default player and enemy profiles
Player player1("default", 0, 0, 0, 0, 0, 0);
Enemy enemy1("none", 0, 0);


//default profiles vector (used to store profiles)
std::vector<Player> profiles;
//default vector to store profile names in (used as a datasource for the profilePicker listbox)
std::vector<std::string> profileNames;
