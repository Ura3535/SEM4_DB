#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace Lab1;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	MyForm form;
	Application::Run(% form);

}