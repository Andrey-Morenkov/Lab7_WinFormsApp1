#include "Form1.h"
#include "TPolynom.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace WinFormsLab1;

[STAThread]
void Main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	WinFormsLab1::Form Form1;
	Application::Run(%Form1);
}