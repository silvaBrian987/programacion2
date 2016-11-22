#include "frmMDIContainer.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	clase10_11::frmMDIContainer form;
	Application::Run(%form);
}