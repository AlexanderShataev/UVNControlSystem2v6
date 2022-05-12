#pragma once

namespace UVNControlSystem2v6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для PIDForm
	/// </summary>
	public ref class PIDForm : public System::Windows::Forms::Form
	{
	public:
		PIDForm(void)
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
		~PIDForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ f_button_set_Kt;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TextBox^ f_textbox_Td_T;
	private: System::Windows::Forms::TextBox^ f_textbox_Ti_T;
	private: System::Windows::Forms::TextBox^ f_textbox_Kp_T;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ f_textbox_Kd_D;
	private: System::Windows::Forms::TextBox^ f_textbox_Ki_D;
	private: System::Windows::Forms::TextBox^ f_textbox_Kp_D;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PIDForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->f_button_set_Kt = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->f_textbox_Td_T = (gcnew System::Windows::Forms::TextBox());
			this->f_textbox_Ti_T = (gcnew System::Windows::Forms::TextBox());
			this->f_textbox_Kp_T = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->f_textbox_Kd_D = (gcnew System::Windows::Forms::TextBox());
			this->f_textbox_Ki_D = (gcnew System::Windows::Forms::TextBox());
			this->f_textbox_Kp_D = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(22, 98);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(27, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Kp";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(22, 139);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ti";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(22, 179);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(25, 19);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Td";
			// 
			// f_button_set_Kt
			// 
			this->f_button_set_Kt->Location = System::Drawing::Point(6, 216);
			this->f_button_set_Kt->Name = L"f_button_set_Kt";
			this->f_button_set_Kt->Size = System::Drawing::Size(104, 30);
			this->f_button_set_Kt->TabIndex = 3;
			this->f_button_set_Kt->Text = L"Установить";
			this->f_button_set_Kt->UseVisualStyleBackColor = true;
			this->f_button_set_Kt->Click += gcnew System::EventHandler(this, &PIDForm::f_button_set_Kt_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(269, 278);
			this->tabControl1->TabIndex = 4;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &PIDForm::tabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::White;
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->f_textbox_Td_T);
			this->tabPage1->Controls->Add(this->f_textbox_Ti_T);
			this->tabPage1->Controls->Add(this->f_button_set_Kt);
			this->tabPage1->Controls->Add(this->f_textbox_Kp_T);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(261, 252);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Традиционная форма";
			this->tabPage1->Click += gcnew System::EventHandler(this, &PIDForm::tabPage1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(151, 216);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 30);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Закрыть";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// f_textbox_Td_T
			// 
			this->f_textbox_Td_T->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_textbox_Td_T->Location = System::Drawing::Point(64, 176);
			this->f_textbox_Td_T->Name = L"f_textbox_Td_T";
			this->f_textbox_Td_T->Size = System::Drawing::Size(145, 27);
			this->f_textbox_Td_T->TabIndex = 5;
			// 
			// f_textbox_Ti_T
			// 
			this->f_textbox_Ti_T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_textbox_Ti_T->Location = System::Drawing::Point(64, 135);
			this->f_textbox_Ti_T->Name = L"f_textbox_Ti_T";
			this->f_textbox_Ti_T->Size = System::Drawing::Size(145, 26);
			this->f_textbox_Ti_T->TabIndex = 4;
			// 
			// f_textbox_Kp_T
			// 
			this->f_textbox_Kp_T->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_textbox_Kp_T->Location = System::Drawing::Point(64, 95);
			this->f_textbox_Kp_T->Name = L"f_textbox_Kp_T";
			this->f_textbox_Kp_T->Size = System::Drawing::Size(145, 27);
			this->f_textbox_Kp_T->TabIndex = 3;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(6, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(249, 69);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->f_textbox_Kd_D);
			this->tabPage2->Controls->Add(this->f_textbox_Ki_D);
			this->tabPage2->Controls->Add(this->f_textbox_Kp_D);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->pictureBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(261, 252);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Приведенная форма";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(151, 216);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 30);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Закрыть";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(6, 216);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(104, 30);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Установить";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// f_textbox_Kd_D
			// 
			this->f_textbox_Kd_D->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_textbox_Kd_D->Location = System::Drawing::Point(64, 176);
			this->f_textbox_Kd_D->Name = L"f_textbox_Kd_D";
			this->f_textbox_Kd_D->Size = System::Drawing::Size(145, 27);
			this->f_textbox_Kd_D->TabIndex = 11;
			this->f_textbox_Kd_D->TextChanged += gcnew System::EventHandler(this, &PIDForm::textBox1_TextChanged);
			// 
			// f_textbox_Ki_D
			// 
			this->f_textbox_Ki_D->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_textbox_Ki_D->Location = System::Drawing::Point(64, 135);
			this->f_textbox_Ki_D->Name = L"f_textbox_Ki_D";
			this->f_textbox_Ki_D->Size = System::Drawing::Size(145, 26);
			this->f_textbox_Ki_D->TabIndex = 10;
			this->f_textbox_Ki_D->TextChanged += gcnew System::EventHandler(this, &PIDForm::textBox2_TextChanged);
			// 
			// f_textbox_Kp_D
			// 
			this->f_textbox_Kp_D->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_textbox_Kp_D->Location = System::Drawing::Point(64, 95);
			this->f_textbox_Kp_D->Name = L"f_textbox_Kp_D";
			this->f_textbox_Kp_D->Size = System::Drawing::Size(145, 27);
			this->f_textbox_Kp_D->TabIndex = 9;
			this->f_textbox_Kp_D->TextChanged += gcnew System::EventHandler(this, &PIDForm::textBox3_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(22, 98);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(27, 19);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Kp";
			this->label4->Click += gcnew System::EventHandler(this, &PIDForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				 static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(22, 179);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 19);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Kd";
			this->label5->Click += gcnew System::EventHandler(this, &PIDForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(22, 139);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(22, 19);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Ki";
			this->label6->Click += gcnew System::EventHandler(this, &PIDForm::label6_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(6, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(249, 69);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// PIDForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(287, 302);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"PIDForm";
			this->Text = L"ПИД-закон";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &PIDForm::PIDForm_FormClosing);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void PIDForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {

	this->Hide();
	e->Cancel = true;

}
private: System::Void f_button_set_Kt_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
