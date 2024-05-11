#include "MyForm.h"

using namespace Lab1;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	MyForm form;
	Application::Run(% form);
}