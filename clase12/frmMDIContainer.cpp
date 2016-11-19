#include "frmMDIContainer.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	clase12::frmMDIContainer form;
	Application::Run(%form);
}