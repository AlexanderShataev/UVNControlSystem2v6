#include "LoginForm.h"
#include <Windows.h>

using namespace UVNControlSystem2v6; // Название проекта
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	System::Windows::Forms::Application::EnableVisualStyles();
	System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false);
	System::Windows::Forms::Application::Run(gcnew LoginForm);
	return 0;
}
