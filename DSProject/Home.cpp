#include "Home.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	DSProject::Home frm;
	Application::Run(% frm);
}