#pragma once
#include <Windows.h>
#include "MainForm.h"


namespace UVNControlSystem2v6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	                     
	using namespace std;

	private ref class accounts 
	{ 

	public: String^ ID;

		  MainForm^ form = gcnew MainForm();

	
	
	// Функция проверки логина/пароля

	private: bool login_pass (String^ login, String^ password) {


		if (login == "admin" && password == "1234") {

			//ID = login;
			return true;

		}

		else if (login == "student" && password == "1234") {

			//ID = login;
			return true;

		}

		else if (login == "" && password == "") {  // заменить потом
 
			//ID = login;
			return true;

		}

	}
	 // Функция открытия MainForm и доступа прав

	public: void access_account (String^ login, String^ password) {

		ID = login;
		
		
			if (login_pass(login, password) && login == "admin") {

				form->access_admin();
				form->Show();

			}

			if (login_pass(login, password) && login == "demo") {

				form->access_demo();
				form->Show();

			}
		
		

		

	}


	};

}