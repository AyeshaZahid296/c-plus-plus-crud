#include "Book.h"
using namespace System;
using namespace System::Windows::Forms;
[System::STAThreadAttribute]

int main(array<System::String^>^ args) {
	
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ccrud::Book bk;
	Application::Run(% bk);
	return 0;
}


