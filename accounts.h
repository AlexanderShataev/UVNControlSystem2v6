#pragma once
#include "LoginForm.h"
#include "MainForm.h"
#include <Windows.h>

namespace UVNControlSystem2v6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace std;

	ref class accounts
	{

	public: String^ ID;

	public: bool login (String^ login, String^ password) {


		if (login == "admin" && password == "1234") {

			ID = login;
			return true;

		}

		else if (login == "student" && password == "1234") {

			ID = login;
			return true;

		}

		else if (login == "" && password == "") {  // заменить потом
 
			ID = login;
			return true;

		}

	}
	
	public: void show_MainForm() {

		MainForm^ form = gcnew MainForm();
		form->Show();
		form->Enabled = false;

	}

	public: void access() { // открываем форму как надо

		if (ID == "admin") {
			


		}


		  }
	

	};

}