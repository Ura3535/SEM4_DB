#include "Lab2Form.h"

using namespace Lab2;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	
	Lab2Form form;
	Application::Run(% form);
}