#include <iostream>
#include "JeenWindows/MainWindow.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();

	Jeen::MainWindow win;
	Application::Run(% win);
}