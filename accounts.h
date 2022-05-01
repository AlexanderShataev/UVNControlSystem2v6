#pragma once
#include <Windows.h>
//#include "MainForm.h"

namespace UVNControlSystem2v6 {

	using namespace System;
	
	
	public ref class accounts 
	{ 

	public: String^ ID;
		    String^ Password;
			bool currentID; 

	//MainForm^ form = gcnew MainForm();

	// Функция проверки логина/пароля

	public: bool login_pass (String^ login, String^ password) {


		if (login == "admin" && password == "1234") {

			ID = login;
			Password = password;
			currentID = true;
			return currentID;

		}

		else if (login == "student" && password == "1234") {

			ID = login;
			Password = password;
			currentID = true;
			return currentID;
		}

		else if (login == "demo" && password == "") {  // заменить потом
 
			ID = login;
			Password = password;
			currentID = true;
			return currentID;

		}

	}

		  String ^get_login(String^ login, String^ password) {

			  login_pass(login, password);

			  return login;
		  }



	};

}