#pragma once

namespace UVNControlSystem2v6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ управлениеПроцессомToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ настройкаНагреваToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выборРегулятораToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ настройкаПИДToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ настройкаШИМToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ настройкаДоступаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сетевойДоступToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ учетнаяЗаписьToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ f_stop_button;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label13;

	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel3;
























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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->управлениеПроцессомToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->настройкаНагреваToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выборРегулятораToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->настройкаПИДToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->настройкаШИМToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->настройкаДоступаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сетевойДоступToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->учетнаяЗаписьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->f_stop_button = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->управлениеПроцессомToolStripMenuItem,
					this->настройкаНагреваToolStripMenuItem, this->настройкаДоступаToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1265, 24);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// управлениеПроцессомToolStripMenuItem
			// 
			this->управлениеПроцессомToolStripMenuItem->Name = L"управлениеПроцессомToolStripMenuItem";
			this->управлениеПроцессомToolStripMenuItem->Size = System::Drawing::Size(150, 20);
			this->управлениеПроцессомToolStripMenuItem->Text = L"Управление процессом";
			// 
			// настройкаНагреваToolStripMenuItem
			// 
			this->настройкаНагреваToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->выборРегулятораToolStripMenuItem,
					this->настройкаПИДToolStripMenuItem, this->настройкаШИМToolStripMenuItem
			});
			this->настройкаНагреваToolStripMenuItem->Name = L"настройкаНагреваToolStripMenuItem";
			this->настройкаНагреваToolStripMenuItem->Size = System::Drawing::Size(124, 20);
			this->настройкаНагреваToolStripMenuItem->Text = L"Настройка нагрева";
			// 
			// выборРегулятораToolStripMenuItem
			// 
			this->выборРегулятораToolStripMenuItem->Name = L"выборРегулятораToolStripMenuItem";
			this->выборРегулятораToolStripMenuItem->Size = System::Drawing::Size(176, 22);
			this->выборРегулятораToolStripMenuItem->Text = L"Выбор регулятора";
			// 
			// настройкаПИДToolStripMenuItem
			// 
			this->настройкаПИДToolStripMenuItem->Name = L"настройкаПИДToolStripMenuItem";
			this->настройкаПИДToolStripMenuItem->Size = System::Drawing::Size(176, 22);
			this->настройкаПИДToolStripMenuItem->Text = L"Настройка ПИД";
			// 
			// настройкаШИМToolStripMenuItem
			// 
			this->настройкаШИМToolStripMenuItem->Name = L"настройкаШИМToolStripMenuItem";
			this->настройкаШИМToolStripMenuItem->Size = System::Drawing::Size(176, 22);
			this->настройкаШИМToolStripMenuItem->Text = L"Настройка ШИМ";
			// 
			// настройкаДоступаToolStripMenuItem
			// 
			this->настройкаДоступаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->сетевойДоступToolStripMenuItem,
					this->учетнаяЗаписьToolStripMenuItem
			});
			this->настройкаДоступаToolStripMenuItem->Name = L"настройкаДоступаToolStripMenuItem";
			this->настройкаДоступаToolStripMenuItem->Size = System::Drawing::Size(124, 20);
			this->настройкаДоступаToolStripMenuItem->Text = L"Настройка доступа";
			// 
			// сетевойДоступToolStripMenuItem
			// 
			this->сетевойДоступToolStripMenuItem->Name = L"сетевойДоступToolStripMenuItem";
			this->сетевойДоступToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->сетевойДоступToolStripMenuItem->Text = L"Сетевой доступ";
			// 
			// учетнаяЗаписьToolStripMenuItem
			// 
			this->учетнаяЗаписьToolStripMenuItem->Name = L"учетнаяЗаписьToolStripMenuItem";
			this->учетнаяЗаписьToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->учетнаяЗаписьToolStripMenuItem->Text = L"Учетная запись";
			// 
			// panel1
			// 
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 24);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(300, 733);
			this->panel1->TabIndex = 7;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->groupBox3);
			this->panel2->Controls->Add(this->groupBox2);
			this->panel2->Controls->Add(this->groupBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel2->Location = System::Drawing::Point(1014, 24);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(251, 733);
			this->panel2->TabIndex = 8;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel2_Paint);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->f_stop_button);
			this->panel3->Controls->Add(this->groupBox4);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel3->Location = System::Drawing::Point(0, 536);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(251, 197);
			this->panel3->TabIndex = 12;
			// 
			// f_stop_button
			// 
			this->f_stop_button->BackColor = System::Drawing::Color::Crimson;
			this->f_stop_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_stop_button->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->f_stop_button->Location = System::Drawing::Point(3, 138);
			this->f_stop_button->Name = L"f_stop_button";
			this->f_stop_button->Size = System::Drawing::Size(239, 56);
			this->f_stop_button->TabIndex = 0;
			this->f_stop_button->Text = L"STOP";
			this->f_stop_button->UseVisualStyleBackColor = false;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label17);
			this->groupBox4->Controls->Add(this->label16);
			this->groupBox4->Controls->Add(this->label15);
			this->groupBox4->Controls->Add(this->pictureBox1);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox4->ForeColor = System::Drawing::Color::RoyalBlue;
			this->groupBox4->Location = System::Drawing::Point(3, 3);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(237, 99);
			this->groupBox4->TabIndex = 11;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Запись  процесса";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label17->Location = System::Drawing::Point(61, 70);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(166, 21);
			this->label17->TabIndex = 3;
			this->label17->Text = L"20_04_2022_13_43.txt";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label16->Location = System::Drawing::Point(11, 70);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(44, 21);
			this->label16->TabIndex = 2;
			this->label16->Text = L"Имя:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->ForeColor = System::Drawing::Color::Crimson;
			this->label15->Location = System::Drawing::Point(69, 35);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(115, 25);
			this->label15->TabIndex = 1;
			this->label15->Text = L"RECORDING";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(41, 35);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(24, 27);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button5);
			this->groupBox3->Controls->Add(this->textBox1);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->button4);
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->ForeColor = System::Drawing::Color::RoyalBlue;
			this->groupBox3->Location = System::Drawing::Point(5, 293);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(237, 197);
			this->groupBox3->TabIndex = 11;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Температура подложки";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button5->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(84, 88);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(137, 29);
			this->button5->TabIndex = 18;
			this->button5->Text = L"Установить";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(15, 88);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(63, 29);
			this->textBox1->TabIndex = 17;
			this->textBox1->Text = L"100";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::SystemColors::Control;
			this->label14->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label14->Location = System::Drawing::Point(40, 64);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(160, 21);
			this->label14->TabIndex = 16;
			this->label14->Text = L"Задать температуру";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button4->Enabled = false;
			this->button4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(15, 160);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(206, 31);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Отключить нагрев";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::Crimson;
			this->button3->Location = System::Drawing::Point(15, 123);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(206, 31);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Включить нагрев";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label13->Location = System::Drawing::Point(94, 32);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(118, 21);
			this->label13->TabIndex = 13;
			this->label13->Text = L"(показания ДТ)";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::Color::DarkBlue;
			this->label12->Location = System::Drawing::Point(58, 29);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(39, 25);
			this->label12->TabIndex = 12;
			this->label12->Text = L"20°";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::Color::DarkBlue;
			this->label11->Location = System::Drawing::Point(30, 29);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(35, 25);
			this->label11->TabIndex = 11;
			this->label11->Text = L"T=";
			this->label11->Click += gcnew System::EventHandler(this, &MainForm::label11_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->progressBar1);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->ForeColor = System::Drawing::Color::RoyalBlue;
			this->groupBox2->Location = System::Drawing::Point(5, 127);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(237, 170);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Откачка";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MainForm::groupBox2_Enter);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(131, 126);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 31);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Стоп";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(19, 126);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 31);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Откачка";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::Green;
			this->label9->Location = System::Drawing::Point(165, 89);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(37, 21);
			this->label9->TabIndex = 8;
			this->label9->Text = L"100";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::Color::Green;
			this->label10->Location = System::Drawing::Point(198, 89);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(23, 21);
			this->label10->TabIndex = 7;
			this->label10->Text = L"%";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(19, 89);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(144, 23);
			this->progressBar1->TabIndex = 5;
			this->progressBar1->Value = 100;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::Green;
			this->label7->Location = System::Drawing::Point(164, 55);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 25);
			this->label7->TabIndex = 4;
			this->label7->Text = L"ON";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::Green;
			this->label5->Location = System::Drawing::Point(164, 30);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 25);
			this->label5->TabIndex = 3;
			this->label5->Text = L"ON";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::Green;
			this->label6->Location = System::Drawing::Point(43, 55);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(115, 25);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Turbo pump";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::Green;
			this->label8->Location = System::Drawing::Point(43, 30);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(107, 25);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Back pump";
			this->label8->Click += gcnew System::EventHandler(this, &MainForm::label8_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->ForeColor = System::Drawing::Color::RoyalBlue;
			this->groupBox1->Location = System::Drawing::Point(3, 22);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(237, 99);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Давление системы";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Crimson;
			this->label4->Location = System::Drawing::Point(94, 62);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(105, 21);
			this->label4->TabIndex = 3;
			this->label4->Text = L"5x10+3 mbar";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Crimson;
			this->label3->Location = System::Drawing::Point(25, 62);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 21);
			this->label3->TabIndex = 2;
			this->label3->Text = L"WRG";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Crimson;
			this->label2->Location = System::Drawing::Point(94, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"5x10+3 mbar";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Crimson;
			this->label1->Location = System::Drawing::Point(25, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"APG";
			// 
			// panel4
			// 
			this->panel4->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel4->Location = System::Drawing::Point(300, 657);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(714, 100);
			this->panel4->TabIndex = 9;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1265, 757);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"UVN Control System 2.0 - Автоматическая система управления";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void автоматическийПроцессToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
