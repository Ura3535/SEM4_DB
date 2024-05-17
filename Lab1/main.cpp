#include "Lab1Form.h"

using namespace Lab1;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	repository::Repository* rep = new repository::Repository();
	Lab1Form form(rep);
	Application::Run(% form);
	delete rep;
}