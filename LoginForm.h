#pragma once
#include "accounts.h"
#include "MainForm.h"

namespace UVNControlSystem2v6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для LoginForm
	/// </summary>
	/// 
	/// 
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:

		MainForm^ form = gcnew MainForm();

		

		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ f_enter_login;

	private: System::Windows::Forms::Button^ button2;
	public: System::Windows::Forms::TextBox^ f_textbox_log;
	public: System::Windows::Forms::TextBox^ f_textbox_pas;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->f_enter_login = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->f_textbox_log = (gcnew System::Windows::Forms::TextBox());
			this->f_textbox_pas = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Логин";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Пароль";
			// 
			// f_enter_login
			// 
			this->f_enter_login->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->f_enter_login->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_enter_login->Location = System::Drawing::Point(16, 140);
			this->f_enter_login->Name = L"f_enter_login";
			this->f_enter_login->Size = System::Drawing::Size(99, 27);
			this->f_enter_login->TabIndex = 2;
			this->f_enter_login->Text = L"Войти";
			this->f_enter_login->UseVisualStyleBackColor = true;
			this->f_enter_login->Click += gcnew System::EventHandler(this, &LoginForm::f_enter_login_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(142, 140);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 27);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Закрыть";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &LoginForm::button2_Click);
			// 
			// f_textbox_log
			// 
			this->f_textbox_log->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_textbox_log->Location = System::Drawing::Point(77, 57);
			this->f_textbox_log->Name = L"f_textbox_log";
			this->f_textbox_log->Size = System::Drawing::Size(164, 27);
			this->f_textbox_log->TabIndex = 4;
			// 
			// f_textbox_pas
			// 
			this->f_textbox_pas->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_textbox_pas->Location = System::Drawing::Point(77, 97);
			this->f_textbox_pas->Name = L"f_textbox_pas";
			this->f_textbox_pas->Size = System::Drawing::Size(164, 27);
			this->f_textbox_pas->TabIndex = 5;
			this->f_textbox_pas->UseSystemPasswordChar = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::SteelBlue;
			this->label3->Location = System::Drawing::Point(30, 23);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(171, 19);
			this->label3->TabIndex = 6;
			this->label3->Text = L"UVN Control System 2.0";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(190, 18);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(58, 28);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(258, 181);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->f_textbox_pas);
			this->Controls->Add(this->f_textbox_log);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->f_enter_login);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UVN Control System 2.0";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		/* void authentification(String^ login, String^ password) {

			if (login == "" && password == "") {  // потом добавить данные

				MainForm^ form = gcnew MainForm();
				form->Show();
				LoginForm::Hide();

			}

			else if (login == "student" && password == "1234") {

				MainForm^ form = gcnew MainForm();
				form->Show();
				LoginForm::Hide();

			}

			else if (login == "demo" && password == "") {

				MainForm^ form = gcnew MainForm();
				form->Show();
				LoginForm::Hide();

			}

			else MessageBox:: Show("Введите корректные данные еще раз", "UVN Control System 2.0", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);




	}
	*/

	private: System::Void f_enter_login_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ login = f_textbox_log->Text;
		String^ password = f_textbox_pas->Text;

			if (form->user->login_pass(login, password)) {

				form->access_user();
				this->Hide();

			}

			else MessageBox:: Show("Введите корректные данные еще раз", "UVN Control System 2.0", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);


	


	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	System::Windows::Forms::Application::Exit();
}
};
}
