#pragma once

#include "functions.h"
#include "help.h"
#include <windows.h>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <utility>

namespace GCalc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GenshinDMGCalc
	/// </summary>
	public ref class GenshinDMGCalc : public System::Windows::Forms::Form
	{
	public:
		GenshinDMGCalc(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GenshinDMGCalc()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::CheckBox^ CriticalHit;
	private: System::Windows::Forms::TextBox^ AttackDMG;
	private: System::Windows::Forms::TextBox^ TalentDMG;
	private: System::Windows::Forms::TextBox^ BonusDMG;
	private: System::Windows::Forms::TextBox^ CritDMG;
	private: System::Windows::Forms::TextBox^ EnemyLevel;
	private: System::Windows::Forms::TextBox^ EnemyResistance;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ PlayerLevel;

	private: System::Windows::Forms::TextBox^ DamageDealt;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::MenuStrip^ menu;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dMGResistancesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ madeByNikProBG2021ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ version10ToolStripMenuItem;
	private: System::Windows::Forms::Button^ saveButton;
	private: System::Windows::Forms::ListBox^ profilePicker;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ profileName;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GenshinDMGCalc::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->CriticalHit = (gcnew System::Windows::Forms::CheckBox());
			this->AttackDMG = (gcnew System::Windows::Forms::TextBox());
			this->TalentDMG = (gcnew System::Windows::Forms::TextBox());
			this->BonusDMG = (gcnew System::Windows::Forms::TextBox());
			this->CritDMG = (gcnew System::Windows::Forms::TextBox());
			this->EnemyLevel = (gcnew System::Windows::Forms::TextBox());
			this->EnemyResistance = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->PlayerLevel = (gcnew System::Windows::Forms::TextBox());
			this->DamageDealt = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->menu = (gcnew System::Windows::Forms::MenuStrip());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dMGResistancesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->madeByNikProBG2021ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->version10ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->profilePicker = (gcnew System::Windows::Forms::ListBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->profileName = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menu->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::PeachPuff;
			this->label2->Location = System::Drawing::Point(12, 251);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 12);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Attack: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::PeachPuff;
			this->label3->Location = System::Drawing::Point(12, 277);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(123, 12);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Talent DMG Bonus: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::PeachPuff;
			this->label4->Location = System::Drawing::Point(12, 303);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 12);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Bonus DMG: ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::PeachPuff;
			this->label5->Location = System::Drawing::Point(12, 329);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 12);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Crit DMG: ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::PeachPuff;
			this->label8->Location = System::Drawing::Point(284, 224);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 12);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Level: ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label9->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::PeachPuff;
			this->label9->Location = System::Drawing::Point(284, 251);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(78, 12);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Resistance: ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(22, 437);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(52, 13);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Critical hit";
			// 
			// CriticalHit
			// 
			this->CriticalHit->AutoSize = true;
			this->CriticalHit->BackColor = System::Drawing::Color::Transparent;
			this->CriticalHit->Cursor = System::Windows::Forms::Cursors::Default;
			this->CriticalHit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CriticalHit->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CriticalHit->ForeColor = System::Drawing::Color::DarkRed;
			this->CriticalHit->Location = System::Drawing::Point(14, 362);
			this->CriticalHit->Name = L"CriticalHit";
			this->CriticalHit->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->CriticalHit->Size = System::Drawing::Size(87, 16);
			this->CriticalHit->TabIndex = 10;
			this->CriticalHit->Text = L"Critical hit";
			this->CriticalHit->UseVisualStyleBackColor = false;
			// 
			// AttackDMG
			// 
			this->AttackDMG->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->AttackDMG->Font = (gcnew System::Drawing::Font(L"Lucida Console", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AttackDMG->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->AttackDMG->Location = System::Drawing::Point(138, 246);
			this->AttackDMG->Name = L"AttackDMG";
			this->AttackDMG->Size = System::Drawing::Size(100, 20);
			this->AttackDMG->TabIndex = 11;
			// 
			// TalentDMG
			// 
			this->TalentDMG->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->TalentDMG->Font = (gcnew System::Drawing::Font(L"Lucida Console", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TalentDMG->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->TalentDMG->Location = System::Drawing::Point(138, 273);
			this->TalentDMG->Name = L"TalentDMG";
			this->TalentDMG->Size = System::Drawing::Size(100, 20);
			this->TalentDMG->TabIndex = 12;
			// 
			// BonusDMG
			// 
			this->BonusDMG->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->BonusDMG->Font = (gcnew System::Drawing::Font(L"Lucida Console", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BonusDMG->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->BonusDMG->Location = System::Drawing::Point(138, 299);
			this->BonusDMG->Name = L"BonusDMG";
			this->BonusDMG->Size = System::Drawing::Size(100, 20);
			this->BonusDMG->TabIndex = 13;
			// 
			// CritDMG
			// 
			this->CritDMG->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->CritDMG->Font = (gcnew System::Drawing::Font(L"Lucida Console", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CritDMG->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->CritDMG->Location = System::Drawing::Point(138, 325);
			this->CritDMG->Name = L"CritDMG";
			this->CritDMG->Size = System::Drawing::Size(100, 20);
			this->CritDMG->TabIndex = 14;
			// 
			// EnemyLevel
			// 
			this->EnemyLevel->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->EnemyLevel->Font = (gcnew System::Drawing::Font(L"Lucida Console", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EnemyLevel->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->EnemyLevel->Location = System::Drawing::Point(382, 220);
			this->EnemyLevel->Name = L"EnemyLevel";
			this->EnemyLevel->Size = System::Drawing::Size(100, 20);
			this->EnemyLevel->TabIndex = 15;
			// 
			// EnemyResistance
			// 
			this->EnemyResistance->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->EnemyResistance->Font = (gcnew System::Drawing::Font(L"Lucida Console", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EnemyResistance->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->EnemyResistance->Location = System::Drawing::Point(382, 246);
			this->EnemyResistance->Name = L"EnemyResistance";
			this->EnemyResistance->Size = System::Drawing::Size(100, 20);
			this->EnemyResistance->TabIndex = 16;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::PeachPuff;
			this->label6->Location = System::Drawing::Point(12, 224);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 12);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Level:";
			// 
			// PlayerLevel
			// 
			this->PlayerLevel->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->PlayerLevel->Font = (gcnew System::Drawing::Font(L"Lucida Console", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PlayerLevel->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->PlayerLevel->Location = System::Drawing::Point(138, 220);
			this->PlayerLevel->Name = L"PlayerLevel";
			this->PlayerLevel->Size = System::Drawing::Size(100, 20);
			this->PlayerLevel->TabIndex = 18;
			// 
			// DamageDealt
			// 
			this->DamageDealt->BackColor = System::Drawing::Color::DarkRed;
			this->DamageDealt->Font = (gcnew System::Drawing::Font(L"Lucida Console", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DamageDealt->ForeColor = System::Drawing::SystemColors::Window;
			this->DamageDealt->Location = System::Drawing::Point(138, 404);
			this->DamageDealt->Name = L"DamageDealt";
			this->DamageDealt->ReadOnly = true;
			this->DamageDealt->Size = System::Drawing::Size(190, 28);
			this->DamageDealt->TabIndex = 19;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::DarkRed;
			this->button1->Location = System::Drawing::Point(14, 404);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 28);
			this->button1->TabIndex = 20;
			this->button1->Text = L"CalculateDMG";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &GenshinDMGCalc::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->ImageLocation = L"albedo.png";
			this->pictureBox1->Location = System::Drawing::Point(-12, -7);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(514, 185);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 21;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::PeachPuff;
			this->label1->Location = System::Drawing::Point(61, 190);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 18);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Player Stats:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label7->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::PeachPuff;
			this->label7->Location = System::Drawing::Point(316, 190);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(114, 18);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Enemy Stats:";
			// 
			// menu
			// 
			this->menu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(6)));
			this->menu->Dock = System::Windows::Forms::DockStyle::None;
			this->menu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->helpToolStripMenuItem,
					this->dMGResistancesToolStripMenuItem, this->aboutToolStripMenuItem
			});
			this->menu->Location = System::Drawing::Point(0, 1);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(249, 24);
			this->menu->TabIndex = 24;
			this->menu->Text = L"menuStrip1";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->helpToolStripMenuItem->ForeColor = System::Drawing::Color::PeachPuff;
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			this->helpToolStripMenuItem->ToolTipText = L"How to use the calculator";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &GenshinDMGCalc::helpToolStripMenuItem_Click);
			// 
			// dMGResistancesToolStripMenuItem
			// 
			this->dMGResistancesToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dMGResistancesToolStripMenuItem->ForeColor = System::Drawing::Color::PeachPuff;
			this->dMGResistancesToolStripMenuItem->Name = L"dMGResistancesToolStripMenuItem";
			this->dMGResistancesToolStripMenuItem->Size = System::Drawing::Size(133, 20);
			this->dMGResistancesToolStripMenuItem->Text = L"DMG Resistances";
			this->dMGResistancesToolStripMenuItem->ToolTipText = L"Website with Damage Resistances";
			this->dMGResistancesToolStripMenuItem->Click += gcnew System::EventHandler(this, &GenshinDMGCalc::dMGResistancesToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->madeByNikProBG2021ToolStripMenuItem,
					this->version10ToolStripMenuItem
			});
			this->aboutToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->aboutToolStripMenuItem->ForeColor = System::Drawing::Color::PeachPuff;
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->ToolTipText = L"About this program";
			// 
			// madeByNikProBG2021ToolStripMenuItem
			// 
			this->madeByNikProBG2021ToolStripMenuItem->Name = L"madeByNikProBG2021ToolStripMenuItem";
			this->madeByNikProBG2021ToolStripMenuItem->Size = System::Drawing::Size(235, 22);
			this->madeByNikProBG2021ToolStripMenuItem->Text = L"Made by NikProBG - 2022";
			// 
			// version10ToolStripMenuItem
			// 
			this->version10ToolStripMenuItem->Name = L"version10ToolStripMenuItem";
			this->version10ToolStripMenuItem->Size = System::Drawing::Size(235, 22);
			this->version10ToolStripMenuItem->Text = L"Version 1.1";
			// 
			// saveButton
			// 
			this->saveButton->BackColor = System::Drawing::Color::Transparent;
			this->saveButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->saveButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->saveButton->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 8.25F, System::Drawing::FontStyle::Bold));
			this->saveButton->ForeColor = System::Drawing::Color::PeachPuff;
			this->saveButton->Location = System::Drawing::Point(14, 451);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(104, 24);
			this->saveButton->TabIndex = 25;
			this->saveButton->Text = L"Save Profile";
			this->saveButton->UseVisualStyleBackColor = false;
			this->saveButton->Click += gcnew System::EventHandler(this, &GenshinDMGCalc::saveButton_Click);
			// 
			// profilePicker
			// 
			this->profilePicker->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->profilePicker->Cursor = System::Windows::Forms::Cursors::Hand;
			this->profilePicker->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profilePicker->ForeColor = System::Drawing::Color::PeachPuff;
			this->profilePicker->FormattingEnabled = true;
			this->profilePicker->ItemHeight = 12;
			this->profilePicker->Location = System::Drawing::Point(382, 329);
			this->profilePicker->Name = L"profilePicker";
			this->profilePicker->Size = System::Drawing::Size(100, 136);
			this->profilePicker->TabIndex = 26;
			this->profilePicker->SelectedIndexChanged += gcnew System::EventHandler(this, &GenshinDMGCalc::profilePicker_selectProfile);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label11->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::PeachPuff;
			this->label11->Location = System::Drawing::Point(391, 304);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(91, 15);
			this->label11->TabIndex = 27;
			this->label11->Text = L"Load Profile:";
			// 
			// profileName
			// 
			this->profileName->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->profileName->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->profileName->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->profileName->Location = System::Drawing::Point(138, 449);
			this->profileName->Name = L"profileName";
			this->profileName->Size = System::Drawing::Size(190, 26);
			this->profileName->TabIndex = 28;
			// 
			// GenshinDMGCalc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(6)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(494, 491);
			this->Controls->Add(this->profileName);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->profilePicker);
			this->Controls->Add(this->saveButton);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->DamageDealt);
			this->Controls->Add(this->PlayerLevel);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->EnemyResistance);
			this->Controls->Add(this->EnemyLevel);
			this->Controls->Add(this->CritDMG);
			this->Controls->Add(this->BonusDMG);
			this->Controls->Add(this->TalentDMG);
			this->Controls->Add(this->AttackDMG);
			this->Controls->Add(this->CriticalHit);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->menu);
			this->Controls->Add(this->pictureBox1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menu;
			this->MaximizeBox = false;
			this->Name = L"GenshinDMGCalc";
			this->Text = L"GenshinDMGCalc";
			this->Load += gcnew System::EventHandler(this, &GenshinDMGCalc::GenshinDMGCalc_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menu->ResumeLayout(false);
			this->menu->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//button1 is the calculate button
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		//take player stats from textboxes
		player1.changeAtk(System::Convert::ToDouble(AttackDMG->Text));
		player1.changeBonus(System::Convert::ToDouble(BonusDMG->Text));
		player1.changeCritDmg(System::Convert::ToDouble(CritDMG->Text));
		player1.changeTalent(System::Convert::ToDouble(TalentDMG->Text));
		player1.changeLvl(System::Convert::ToInt16(PlayerLevel->Text));
		//take enemy stats from textboxes
		enemy1.changeLevel(System::Convert::ToInt16(EnemyLevel->Text));
		enemy1.changeResistance(System::Convert::ToInt16(EnemyResistance->Text));

		//check if the hit will be a crit
		if (CriticalHit->Checked) {
			player1.changeCrit(true);
		}
		else {
			player1.changeCrit(false);
		}

		//calculate damage dealt(formulas - https://genshin-impact.fandom.com/wiki/Damage)
		double output = IncomingDmg(player1.OutgoingDamage(), enemy1.DefMultiplier(enemy1.Defense(), player1.level()), enemy1.ResMultiplier());

		//put the calculated damage (converted to int) in the DamageDealt box
		DamageDealt->Text = System::Convert::ToString(static_cast<int>(output));
	}
	catch (...) {
		DamageDealt->Text = "Invalid input";
	}
}
private: System::Void helpToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	help ^ helpform = gcnew help;
	helpform->ShowDialog();
}
private: System::Void dMGResistancesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	openDMGRESWebsite();
}
private: System::Void saveButton_Click(System::Object^ sender, System::EventArgs^ e) {
	//check if all inputs are valid, if not, print an error message in the DamageDealt box
	try {
		//take player stats from textboxes
		player1.changeAtk(System::Convert::ToDouble(AttackDMG->Text));
		player1.changeBonus(System::Convert::ToDouble(BonusDMG->Text));
		player1.changeCritDmg(System::Convert::ToDouble(CritDMG->Text));
		player1.changeTalent(System::Convert::ToDouble(TalentDMG->Text));
		player1.changeLvl(System::Convert::ToInt16(PlayerLevel->Text));
		//convert the textbox into a system string and then convert the system string to a standard std::string
		player1.changeName(msclr::interop::marshal_as<std::string>(System::Convert::ToString(profileName->Text)));

		//check if the hit will be a crit
		if (CriticalHit->Checked) {
			player1.changeCrit(true);
		}
		else {
			player1.changeCrit(false);
		}

		saveProfile(player1, profiles);
		saveNames(profileNames, profiles);
		saveVectorToFile(profiles);

		DamageDealt->Text = "Profile saved";

		//Update listBox with new items
		this->profilePicker->Items->Clear();
		for (std::string profileName : profileNames) {
			auto managed = gcnew String(profileName.c_str());
			this->profilePicker->Items->Add(managed);
		}

	}
	catch (...) {
		DamageDealt->Text = "Save failed";
	}
}
private: System::Void GenshinDMGCalc_Load(System::Object^ sender, System::EventArgs^ e) {
	//On load, clear the list and put items from nameVector in
	this->profilePicker->Items->Clear();
	for (std::string profileName : profileNames) {
		auto managed = gcnew String(profileName.c_str());
		this->profilePicker->Items->Add(managed);
	}
}
private: System::Void profilePicker_selectProfile(System::Object^ sender, System::EventArgs^ e) {
	std::string profileNameString = msclr::interop::marshal_as<std::string>(System::Convert::ToString(profilePicker->SelectedItem));
	for (Player profile : profiles) {
		if (profile.Name() == profileNameString) {
			player1 = loadProfile(profiles, profileNameString);
			PlayerLevel->Text = System::Convert::ToString(player1.level());
			AttackDMG->Text = System::Convert::ToString(player1.atkDmg());
			BonusDMG->Text = System::Convert::ToString(player1.bonusDmg());
			CritDMG->Text = System::Convert::ToString(player1.critDmg());
			TalentDMG->Text = System::Convert::ToString(player1.talentDmg());
			profileName->Text = System::Convert::ToString(profilePicker->SelectedItem);
			DamageDealt->Text = "";
		}
	}
}
};
}