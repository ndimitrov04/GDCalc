#include "GenshinDMGCalc.h"
#include "functions.h"

using namespace System;

using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args) {

    loadVectorFromFile(profiles);

    saveNames(profileNames, profiles);

    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    GCalc::GenshinDMGCalc form;

    Application::Run(% form);

}