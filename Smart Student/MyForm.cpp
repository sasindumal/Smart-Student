#include "MyForm.h"
#include "Register.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SmartStudent::MyForm form;
	Application::Run(% form);
}