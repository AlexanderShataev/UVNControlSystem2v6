#include "LoginForm.h"
#include "MainForm.h"
#include <Windows.h>

using namespace UVNControlSystem2v6; // Название проекта
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew LoginForm);
	return 0;
}
