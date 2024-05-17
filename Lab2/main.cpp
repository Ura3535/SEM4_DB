#include "Lab2Form.h"
#include "SQLRepository.h"

using namespace Lab2;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	
	Lab2Form form(gcnew Repository::SQLRepository());
	Application::Run(% form);
}