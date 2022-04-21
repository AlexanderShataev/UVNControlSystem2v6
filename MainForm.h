#pragma once

namespace UVNControlSystem2v6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòðóêòîðà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
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
	private: System::Windows::Forms::ToolStripMenuItem^ óïðàâëåíèåÏðîöåññîìToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ íàñòðîéêàÍàãðåâàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûáîðÐåãóëÿòîðàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ íàñòðîéêàÏÈÄToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ íàñòðîéêàØÈÌToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ íàñòðîéêàÄîñòóïàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñåòåâîéÄîñòóïToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ó÷åòíàÿÇàïèñüToolStripMenuItem;
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
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox2;



	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::GroupBox^ groupBox8;
private: System::Windows::Forms::Label^ label59;
private: System::Windows::Forms::Label^ label58;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::RadioButton^ radioButton2;
private: System::Windows::Forms::RadioButton^ radioButton1;
private: System::Windows::Forms::Label^ label55;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::Label^ label57;
private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Label^ label56;
private: System::Windows::Forms::GroupBox^ groupBox7;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::Label^ label50;
private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::Label^ label60;
private: System::Windows::Forms::Button^ f_button_connect_to_PLC;

private: System::Windows::Forms::GroupBox^ groupBox_flap;
private: System::Windows::Forms::GroupBox^ subgroupBox_mode;
private: System::Windows::Forms::RadioButton^ radioButton_flap_auto_mode;
private: System::Windows::Forms::RadioButton^ radioButton_flap_manual_mode;
private: System::Windows::Forms::Button^ f_button_manual_close_flap;


private: System::Windows::Forms::Button^ f_button_manual_open_flap;
private: System::Windows::Forms::Label^ i_label_flap_status;
private: System::Windows::Forms::Label^ f_label_flap_status;
private: System::Windows::Forms::Label^ I_label_set_time_flap;
private: System::Windows::Forms::TextBox^ f_textBox_set_time_flap;

private: System::Windows::Forms::Button^ f_button_auto_mode_flap_stop;

private: System::Windows::Forms::Button^ f_button_auto_mode_flap_start;




private: System::Windows::Forms::ProgressBar^ progressBar_flap;
private: System::Windows::Forms::Button^ f_button_exit;




























	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåðåìåííàÿ êîíñòðóêòîðà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà — íå èçìåíÿéòå 
		/// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->óïðàâëåíèåÏðîöåññîìToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íàñòðîéêàÍàãðåâàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûáîðÐåãóëÿòîðàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íàñòðîéêàÏÈÄToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íàñòðîéêàØÈÌToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íàñòðîéêàÄîñòóïàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñåòåâîéÄîñòóïToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ó÷åòíàÿÇàïèñüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->groupBox_flap = (gcnew System::Windows::Forms::GroupBox());
			this->I_label_set_time_flap = (gcnew System::Windows::Forms::Label());
			this->f_textBox_set_time_flap = (gcnew System::Windows::Forms::TextBox());
			this->progressBar_flap = (gcnew System::Windows::Forms::ProgressBar());
			this->f_button_auto_mode_flap_stop = (gcnew System::Windows::Forms::Button());
			this->subgroupBox_mode = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton_flap_auto_mode = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_flap_manual_mode = (gcnew System::Windows::Forms::RadioButton());
			this->f_button_auto_mode_flap_start = (gcnew System::Windows::Forms::Button());
			this->f_button_manual_close_flap = (gcnew System::Windows::Forms::Button());
			this->f_button_manual_open_flap = (gcnew System::Windows::Forms::Button());
			this->i_label_flap_status = (gcnew System::Windows::Forms::Label());
			this->f_label_flap_status = (gcnew System::Windows::Forms::Label());
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
			this->label18 = (gcnew System::Windows::Forms::Label());
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
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->f_button_connect_to_PLC = (gcnew System::Windows::Forms::Button());
			this->f_button_exit = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel5->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->panel2->SuspendLayout();
			this->groupBox_flap->SuspendLayout();
			this->subgroupBox_mode->SuspendLayout();
			this->panel3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::White;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->óïðàâëåíèåÏðîöåññîìToolStripMenuItem,
					this->íàñòðîéêàÍàãðåâàToolStripMenuItem, this->íàñòðîéêàÄîñòóïàToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1161, 24);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// óïðàâëåíèåÏðîöåññîìToolStripMenuItem
			// 
			this->óïðàâëåíèåÏðîöåññîìToolStripMenuItem->Name = L"óïðàâëåíèåÏðîöåññîìToolStripMenuItem";
			this->óïðàâëåíèåÏðîöåññîìToolStripMenuItem->Size = System::Drawing::Size(150, 20);
			this->óïðàâëåíèåÏðîöåññîìToolStripMenuItem->Text = L"Óïðàâëåíèå ïðîöåññîì";
			// 
			// íàñòðîéêàÍàãðåâàToolStripMenuItem
			// 
			this->íàñòðîéêàÍàãðåâàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->âûáîðÐåãóëÿòîðàToolStripMenuItem,
					this->íàñòðîéêàÏÈÄToolStripMenuItem, this->íàñòðîéêàØÈÌToolStripMenuItem
			});
			this->íàñòðîéêàÍàãðåâàToolStripMenuItem->Name = L"íàñòðîéêàÍàãðåâàToolStripMenuItem";
			this->íàñòðîéêàÍàãðåâàToolStripMenuItem->Size = System::Drawing::Size(124, 20);
			this->íàñòðîéêàÍàãðåâàToolStripMenuItem->Text = L"Íàñòðîéêà íàãðåâà";
			// 
			// âûáîðÐåãóëÿòîðàToolStripMenuItem
			// 
			this->âûáîðÐåãóëÿòîðàToolStripMenuItem->Name = L"âûáîðÐåãóëÿòîðàToolStripMenuItem";
			this->âûáîðÐåãóëÿòîðàToolStripMenuItem->Size = System::Drawing::Size(176, 22);
			this->âûáîðÐåãóëÿòîðàToolStripMenuItem->Text = L"Âûáîð ðåãóëÿòîðà";
			// 
			// íàñòðîéêàÏÈÄToolStripMenuItem
			// 
			this->íàñòðîéêàÏÈÄToolStripMenuItem->Name = L"íàñòðîéêàÏÈÄToolStripMenuItem";
			this->íàñòðîéêàÏÈÄToolStripMenuItem->Size = System::Drawing::Size(176, 22);
			this->íàñòðîéêàÏÈÄToolStripMenuItem->Text = L"Íàñòðîéêà ÏÈÄ";
			// 
			// íàñòðîéêàØÈÌToolStripMenuItem
			// 
			this->íàñòðîéêàØÈÌToolStripMenuItem->Name = L"íàñòðîéêàØÈÌToolStripMenuItem";
			this->íàñòðîéêàØÈÌToolStripMenuItem->Size = System::Drawing::Size(176, 22);
			this->íàñòðîéêàØÈÌToolStripMenuItem->Text = L"Íàñòðîéêà ØÈÌ";
			// 
			// íàñòðîéêàÄîñòóïàToolStripMenuItem
			// 
			this->íàñòðîéêàÄîñòóïàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ñåòåâîéÄîñòóïToolStripMenuItem,
					this->ó÷åòíàÿÇàïèñüToolStripMenuItem
			});
			this->íàñòðîéêàÄîñòóïàToolStripMenuItem->Name = L"íàñòðîéêàÄîñòóïàToolStripMenuItem";
			this->íàñòðîéêàÄîñòóïàToolStripMenuItem->Size = System::Drawing::Size(124, 20);
			this->íàñòðîéêàÄîñòóïàToolStripMenuItem->Text = L"Íàñòðîéêà äîñòóïà";
			// 
			// ñåòåâîéÄîñòóïToolStripMenuItem
			// 
			this->ñåòåâîéÄîñòóïToolStripMenuItem->Name = L"ñåòåâîéÄîñòóïToolStripMenuItem";
			this->ñåòåâîéÄîñòóïToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->ñåòåâîéÄîñòóïToolStripMenuItem->Text = L"Ñåòåâîé äîñòóï";
			// 
			// ó÷åòíàÿÇàïèñüToolStripMenuItem
			// 
			this->ó÷åòíàÿÇàïèñüToolStripMenuItem->Name = L"ó÷åòíàÿÇàïèñüToolStripMenuItem";
			this->ó÷åòíàÿÇàïèñüToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->ó÷åòíàÿÇàïèñüToolStripMenuItem->Text = L"Ó÷åòíàÿ çàïèñü";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->groupBox7);
			this->panel1->Controls->Add(this->groupBox6);
			this->panel1->Controls->Add(this->groupBox5);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 24);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(334, 867);
			this->panel1->TabIndex = 7;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->groupBox8);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel5->Location = System::Drawing::Point(0, 624);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(334, 243);
			this->panel5->TabIndex = 21;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->label59);
			this->groupBox8->Controls->Add(this->label58);
			this->groupBox8->Controls->Add(this->textBox6);
			this->groupBox8->Controls->Add(this->button16);
			this->groupBox8->Controls->Add(this->radioButton2);
			this->groupBox8->Controls->Add(this->radioButton1);
			this->groupBox8->Controls->Add(this->label55);
			this->groupBox8->Controls->Add(this->textBox5);
			this->groupBox8->Controls->Add(this->label54);
			this->groupBox8->Controls->Add(this->textBox4);
			this->groupBox8->Controls->Add(this->label57);
			this->groupBox8->Controls->Add(this->label53);
			this->groupBox8->Controls->Add(this->button15);
			this->groupBox8->Controls->Add(this->textBox3);
			this->groupBox8->Controls->Add(this->label56);
			this->groupBox8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox8->ForeColor = System::Drawing::Color::RoyalBlue;
			this->groupBox8->Location = System::Drawing::Point(12, 7);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(258, 233);
			this->groupBox8->TabIndex = 20;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Èñòî÷íèê òîêà";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label59->ForeColor = System::Drawing::Color::DarkBlue;
			this->label59->Location = System::Drawing::Point(6, 162);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(35, 26);
			this->label59->TabIndex = 30;
			this->label59->Text = L"U=";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label58->ForeColor = System::Drawing::Color::Crimson;
			this->label58->Location = System::Drawing::Point(6, 197);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(27, 26);
			this->label58->TabIndex = 29;
			this->label58->Text = L"I=";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(41, 162);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(63, 29);
			this->textBox6->TabIndex = 28;
			this->textBox6->Text = L"10000";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(120, 159);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(125, 29);
			this->button16->TabIndex = 27;
			this->button16->Text = L"Óñòàíîâèòü Â";
			this->button16->UseVisualStyleBackColor = false;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioButton2->Location = System::Drawing::Point(6, 111);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(194, 23);
			this->radioButton2->TabIndex = 26;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Âûñîêîâîëüòíûé ðåæèì";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->radioButton1->Location = System::Drawing::Point(6, 133);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(185, 23);
			this->radioButton1->TabIndex = 25;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Íèçêîâîëüòíûé ðåæèì";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label55->ForeColor = System::Drawing::Color::Crimson;
			this->label55->Location = System::Drawing::Point(211, 57);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(34, 23);
			this->label55->TabIndex = 24;
			this->label55->Text = L"ìÀ";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->ForeColor = System::Drawing::Color::Crimson;
			this->textBox5->Location = System::Drawing::Point(125, 57);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(77, 31);
			this->textBox5->TabIndex = 23;
			this->textBox5->Text = L"300";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label54->ForeColor = System::Drawing::Color::Crimson;
			this->label54->Location = System::Drawing::Point(12, 57);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(88, 23);
			this->label54->TabIndex = 22;
			this->label54->Text = L"Ñèëà òîêà";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->ForeColor = System::Drawing::Color::MidnightBlue;
			this->textBox4->Location = System::Drawing::Point(125, 21);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(77, 31);
			this->textBox4->TabIndex = 21;
			this->textBox4->Text = L"300";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label57->ForeColor = System::Drawing::Color::MediumBlue;
			this->label57->Location = System::Drawing::Point(211, 24);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(20, 23);
			this->label57->TabIndex = 20;
			this->label57->Text = L"Â";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->BackColor = System::Drawing::Color::White;
			this->label53->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label53->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label53->Location = System::Drawing::Point(30, 91);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(180, 23);
			this->label53->TabIndex = 19;
			this->label53->Text = L"Íàñòðîéêà èñòî÷íèêà";
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::Color::Crimson;
			this->button15->Location = System::Drawing::Point(119, 198);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(126, 29);
			this->button15->TabIndex = 18;
			this->button15->Text = L"Óñòàíîâèòü ìÀ";
			this->button15->UseVisualStyleBackColor = false;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(41, 197);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(63, 29);
			this->textBox3->TabIndex = 17;
			this->textBox3->Text = L"10000";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label56->ForeColor = System::Drawing::Color::MediumBlue;
			this->label56->Location = System::Drawing::Point(8, 24);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(111, 23);
			this->label56->TabIndex = 11;
			this->label56->Text = L"Íàïðÿæåíèå";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->button11);
			this->groupBox7->Controls->Add(this->button12);
			this->groupBox7->Controls->Add(this->button13);
			this->groupBox7->Controls->Add(this->label52);
			this->groupBox7->Controls->Add(this->button14);
			this->groupBox7->Controls->Add(this->label48);
			this->groupBox7->Controls->Add(this->label49);
			this->groupBox7->Controls->Add(this->label50);
			this->groupBox7->Controls->Add(this->label51);
			this->groupBox7->Controls->Add(this->button10);
			this->groupBox7->Controls->Add(this->button9);
			this->groupBox7->Controls->Add(this->button8);
			this->groupBox7->Controls->Add(this->label47);
			this->groupBox7->Controls->Add(this->label43);
			this->groupBox7->Controls->Add(this->button7);
			this->groupBox7->Controls->Add(this->label44);
			this->groupBox7->Controls->Add(this->label45);
			this->groupBox7->Controls->Add(this->label46);
			this->groupBox7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox7->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox7->ForeColor = System::Drawing::Color::RoyalBlue;
			this->groupBox7->Location = System::Drawing::Point(12, 329);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(237, 289);
			this->groupBox7->TabIndex = 20;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Íàïóñê ãàçîâ";
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button11->Enabled = false;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(120, 254);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(108, 26);
			this->button11->TabIndex = 32;
			this->button11->Text = L"- 30 ìÂ";
			this->button11->UseVisualStyleBackColor = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button12->Enabled = false;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(120, 222);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(108, 26);
			this->button12->TabIndex = 31;
			this->button12->Text = L"+ 30 ìÂ";
			this->button12->UseVisualStyleBackColor = false;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button13->Enabled = false;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(6, 254);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(108, 26);
			this->button13->TabIndex = 30;
			this->button13->Text = L"Îòêëþ÷èòü";
			this->button13->UseVisualStyleBackColor = false;
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->BackColor = System::Drawing::Color::White;
			this->label52->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label52->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label52->Location = System::Drawing::Point(49, 193);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(148, 23);
			this->label52->TabIndex = 29;
			this->label52->Text = L"Íàïóñê ãàçà PSV1";
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(6, 222);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(108, 26);
			this->button14->TabIndex = 28;
			this->button14->Text = L"Âêëþ÷èòü PSV1";
			this->button14->UseVisualStyleBackColor = false;
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label48->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label48->Location = System::Drawing::Point(168, 150);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(37, 26);
			this->label48->TabIndex = 27;
			this->label48->Text = L"ìÂ";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label49->ForeColor = System::Drawing::Color::Black;
			this->label49->Location = System::Drawing::Point(81, 176);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(78, 18);
			this->label49->TabIndex = 26;
			this->label49->Text = L"(ñèãíàë au)";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label50->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label50->Location = System::Drawing::Point(110, 150);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(56, 26);
			this->label50->TabIndex = 25;
			this->label50->Text = L"1200";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label51->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label51->Location = System::Drawing::Point(38, 150);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(66, 26);
			this->label51->TabIndex = 24;
			this->label51->Text = L"PSV 2 ";
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button10->Enabled = false;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(120, 121);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(108, 26);
			this->button10->TabIndex = 23;
			this->button10->Text = L"- 30 ìÂ";
			this->button10->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button9->Enabled = false;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(120, 89);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(108, 26);
			this->button9->TabIndex = 22;
			this->button9->Text = L"+ 30 ìÂ";
			this->button9->UseVisualStyleBackColor = false;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button8->Enabled = false;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(6, 121);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(108, 26);
			this->button8->TabIndex = 21;
			this->button8->Text = L"Îòêëþ÷èòü";
			this->button8->UseVisualStyleBackColor = false;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label47->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label47->Location = System::Drawing::Point(168, 20);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(37, 26);
			this->label47->TabIndex = 20;
			this->label47->Text = L"ìÂ";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->BackColor = System::Drawing::Color::White;
			this->label43->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label43->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label43->Location = System::Drawing::Point(49, 63);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(148, 23);
			this->label43->TabIndex = 19;
			this->label43->Text = L"Íàïóñê ãàçà PSV1";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(6, 89);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(108, 26);
			this->button7->TabIndex = 18;
			this->button7->Text = L"Âêëþ÷èòü PSV1";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Calibri", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label44->ForeColor = System::Drawing::Color::Black;
			this->label44->Location = System::Drawing::Point(81, 46);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(78, 18);
			this->label44->TabIndex = 13;
			this->label44->Text = L"(ñèãíàë au)";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label45->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label45->Location = System::Drawing::Point(110, 20);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(56, 26);
			this->label45->TabIndex = 12;
			this->label45->Text = L"1200";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label46->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label46->Location = System::Drawing::Point(38, 20);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(66, 26);
			this->label46->TabIndex = 11;
			this->label46->Text = L"PSV 1 ";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label39);
			this->groupBox6->Controls->Add(this->button6);
			this->groupBox6->Controls->Add(this->textBox2);
			this->groupBox6->Controls->Add(this->label40);
			this->groupBox6->Controls->Add(this->label41);
			this->groupBox6->Controls->Add(this->label42);
			this->groupBox6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox6->ForeColor = System::Drawing::Color::RoyalBlue;
			this->groupBox6->Location = System::Drawing::Point(12, 186);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(237, 142);
			this->groupBox6->TabIndex = 19;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Êëàïàí áàáî÷êà";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->BackColor = System::Drawing::Color::White;
			this->label39->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label39->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label39->Location = System::Drawing::Point(22, 73);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(193, 23);
			this->label39->TabIndex = 19;
			this->label39->Text = L"Óñòàíîâèòü ïîëîæåíèå";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(84, 99);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(137, 29);
			this->button6->TabIndex = 18;
			this->button6->Text = L"Óñòàíîâèòü";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->HideSelection = false;
			this->textBox2->Location = System::Drawing::Point(15, 99);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(63, 29);
			this->textBox2->TabIndex = 17;
			this->textBox2->Text = L"10000";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label40->ForeColor = System::Drawing::Color::Black;
			this->label40->Location = System::Drawing::Point(50, 53);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(123, 17);
			this->label40->TabIndex = 13;
			this->label40->Text = L"(îòêðûòèå êëàïàíà)";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label41->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label41->Location = System::Drawing::Point(141, 27);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(60, 26);
			this->label41->TabIndex = 12;
			this->label41->Text = L"100%";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label42->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label42->Location = System::Drawing::Point(29, 27);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(114, 26);
			this->label42->TabIndex = 11;
			this->label42->Text = L"Ïîëîæåíèå";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label38);
			this->groupBox5->Controls->Add(this->label37);
			this->groupBox5->Controls->Add(this->label36);
			this->groupBox5->Controls->Add(this->label35);
			this->groupBox5->Controls->Add(this->label34);
			this->groupBox5->Controls->Add(this->label33);
			this->groupBox5->Controls->Add(this->label32);
			this->groupBox5->Controls->Add(this->label31);
			this->groupBox5->Controls->Add(this->label30);
			this->groupBox5->Controls->Add(this->label29);
			this->groupBox5->Controls->Add(this->label28);
			this->groupBox5->Controls->Add(this->label27);
			this->groupBox5->Controls->Add(this->label26);
			this->groupBox5->Controls->Add(this->label25);
			this->groupBox5->Controls->Add(this->label24);
			this->groupBox5->Controls->Add(this->label23);
			this->groupBox5->Controls->Add(this->label22);
			this->groupBox5->Controls->Add(this->label20);
			this->groupBox5->Controls->Add(this->label21);
			this->groupBox5->Controls->Add(this->label19);
			this->groupBox5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox5->ForeColor = System::Drawing::Color::RoyalBlue;
			this->groupBox5->Location = System::Drawing::Point(12, 10);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(319, 170);
			this->groupBox5->TabIndex = 4;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Âðåìÿ ïðîöåññà";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label38->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label38->Location = System::Drawing::Point(256, 142);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(16, 23);
			this->label38->TabIndex = 22;
			this->label38->Text = L"-";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label37->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label37->Location = System::Drawing::Point(199, 142);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(16, 23);
			this->label37->TabIndex = 21;
			this->label37->Text = L"-";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label36->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label36->Location = System::Drawing::Point(150, 142);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(16, 23);
			this->label36->TabIndex = 20;
			this->label36->Text = L"-";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label35->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label35->Location = System::Drawing::Point(246, 112);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(55, 23);
			this->label35->TabIndex = 19;
			this->label35->Text = L"13:01";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label34->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label34->Location = System::Drawing::Point(246, 83);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(55, 23);
			this->label34->TabIndex = 18;
			this->label34->Text = L"13:00";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label33->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label33->Location = System::Drawing::Point(12, 137);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(119, 23);
			this->label33->TabIndex = 17;
			this->label33->Text = L"Ñòîï îòêà÷êè:";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label32->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label32->Location = System::Drawing::Point(197, 112);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(40, 23);
			this->label32->TabIndex = 16;
			this->label32->Text = L"274";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label31->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label31->Location = System::Drawing::Point(145, 112);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(40, 23);
			this->label31->TabIndex = 15;
			this->label31->Text = L"360";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label30->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label30->Location = System::Drawing::Point(2, 112);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(129, 23);
			this->label30->TabIndex = 14;
			this->label30->Text = L"Èñòî÷íèê òîêà:";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label29->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label29->Location = System::Drawing::Point(197, 83);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(40, 23);
			this->label29->TabIndex = 13;
			this->label29->Text = L"214";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label28->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label28->Location = System::Drawing::Point(145, 83);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(40, 23);
			this->label28->TabIndex = 12;
			this->label28->Text = L"320";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label27->Location = System::Drawing::Point(12, 83);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(119, 23);
			this->label27->TabIndex = 11;
			this->label27->Text = L"Íàïóñê ãàçîâ:";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label26->Location = System::Drawing::Point(197, 55);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(40, 23);
			this->label26->TabIndex = 10;
			this->label26->Text = L"234";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label25->Location = System::Drawing::Point(197, 25);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(40, 23);
			this->label25->TabIndex = 9;
			this->label25->Text = L"324";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label24->Location = System::Drawing::Point(246, 55);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(55, 23);
			this->label24->TabIndex = 8;
			this->label24->Text = L"12:59";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label23->Location = System::Drawing::Point(145, 55);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(40, 23);
			this->label23->TabIndex = 7;
			this->label23->Text = L"300";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label22->Location = System::Drawing::Point(49, 55);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(80, 23);
			this->label22->TabIndex = 6;
			this->label22->Text = L"Îòêà÷êà:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label20->Location = System::Drawing::Point(145, 25);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(40, 23);
			this->label20->TabIndex = 5;
			this->label20->Text = L"321";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label21->Location = System::Drawing::Point(246, 25);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(55, 23);
			this->label21->TabIndex = 4;
			this->label21->Text = L"12:52";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label19->Location = System::Drawing::Point(2, 27);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(125, 23);
			this->label19->TabIndex = 3;
			this->label19->Text = L"Ñòàðò îòêà÷êè:";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->groupBox_flap);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->groupBox3);
			this->panel2->Controls->Add(this->groupBox2);
			this->panel2->Controls->Add(this->groupBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel2->Location = System::Drawing::Point(910, 24);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(251, 867);
			this->panel2->TabIndex = 8;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel2_Paint);
			// 
			// groupBox_flap
			// 
			this->groupBox_flap->Controls->Add(this->I_label_set_time_flap);
			this->groupBox_flap->Controls->Add(this->f_textBox_set_time_flap);
			this->groupBox_flap->Controls->Add(this->progressBar_flap);
			this->groupBox_flap->Controls->Add(this->f_button_auto_mode_flap_stop);
			this->groupBox_flap->Controls->Add(this->subgroupBox_mode);
			this->groupBox_flap->Controls->Add(this->f_button_auto_mode_flap_start);
			this->groupBox_flap->Controls->Add(this->f_button_manual_close_flap);
			this->groupBox_flap->Controls->Add(this->f_button_manual_open_flap);
			this->groupBox_flap->Controls->Add(this->i_label_flap_status);
			this->groupBox_flap->Controls->Add(this->f_label_flap_status);
			this->groupBox_flap->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox_flap->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox_flap->ForeColor = System::Drawing::Color::RoyalBlue;
			this->groupBox_flap->Location = System::Drawing::Point(3, 472);
			this->groupBox_flap->Name = L"groupBox_flap";
			this->groupBox_flap->Size = System::Drawing::Size(237, 180);
			this->groupBox_flap->TabIndex = 19;
			this->groupBox_flap->TabStop = false;
			this->groupBox_flap->Text = L"Óïðàâëåíèå çàñëîíêîé";
			// 
			// I_label_set_time_flap
			// 
			this->I_label_set_time_flap->AutoSize = true;
			this->I_label_set_time_flap->BackColor = System::Drawing::Color::White;
			this->I_label_set_time_flap->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->I_label_set_time_flap->ForeColor = System::Drawing::Color::RoyalBlue;
			this->I_label_set_time_flap->Location = System::Drawing::Point(11, 138);
			this->I_label_set_time_flap->Name = L"I_label_set_time_flap";
			this->I_label_set_time_flap->Size = System::Drawing::Size(132, 19);
			this->I_label_set_time_flap->TabIndex = 33;
			this->I_label_set_time_flap->Text = L"Óñòàíîâèòü âðåìÿ";
			this->I_label_set_time_flap->Visible = false;
			// 
			// f_textBox_set_time_flap
			// 
			this->f_textBox_set_time_flap->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_textBox_set_time_flap->Location = System::Drawing::Point(156, 133);
			this->f_textBox_set_time_flap->Name = L"f_textBox_set_time_flap";
			this->f_textBox_set_time_flap->Size = System::Drawing::Size(48, 27);
			this->f_textBox_set_time_flap->TabIndex = 19;
			this->f_textBox_set_time_flap->Text = L"100";
			this->f_textBox_set_time_flap->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->f_textBox_set_time_flap->Visible = false;
			// 
			// progressBar_flap
			// 
			this->progressBar_flap->Location = System::Drawing::Point(11, 163);
			this->progressBar_flap->Name = L"progressBar_flap";
			this->progressBar_flap->Size = System::Drawing::Size(216, 23);
			this->progressBar_flap->TabIndex = 11;
			this->progressBar_flap->Visible = false;
			// 
			// f_button_auto_mode_flap_stop
			// 
			this->f_button_auto_mode_flap_stop->BackColor = System::Drawing::SystemColors::ControlLight;
			this->f_button_auto_mode_flap_stop->Enabled = false;
			this->f_button_auto_mode_flap_stop->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->f_button_auto_mode_flap_stop->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_button_auto_mode_flap_stop->Location = System::Drawing::Point(120, 192);
			this->f_button_auto_mode_flap_stop->Name = L"f_button_auto_mode_flap_stop";
			this->f_button_auto_mode_flap_stop->Size = System::Drawing::Size(107, 27);
			this->f_button_auto_mode_flap_stop->TabIndex = 17;
			this->f_button_auto_mode_flap_stop->Text = L"Ñòîï";
			this->f_button_auto_mode_flap_stop->UseVisualStyleBackColor = false;
			this->f_button_auto_mode_flap_stop->Visible = false;
			// 
			// subgroupBox_mode
			// 
			this->subgroupBox_mode->Controls->Add(this->radioButton_flap_auto_mode);
			this->subgroupBox_mode->Controls->Add(this->radioButton_flap_manual_mode);
			this->subgroupBox_mode->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->subgroupBox_mode->Location = System::Drawing::Point(15, 65);
			this->subgroupBox_mode->Name = L"subgroupBox_mode";
			this->subgroupBox_mode->Size = System::Drawing::Size(203, 65);
			this->subgroupBox_mode->TabIndex = 16;
			this->subgroupBox_mode->TabStop = false;
			this->subgroupBox_mode->Text = L"Ðåæèì ðàáîòû";
			// 
			// radioButton_flap_auto_mode
			// 
			this->radioButton_flap_auto_mode->AutoSize = true;
			this->radioButton_flap_auto_mode->ForeColor = System::Drawing::Color::Black;
			this->radioButton_flap_auto_mode->Location = System::Drawing::Point(10, 37);
			this->radioButton_flap_auto_mode->Name = L"radioButton_flap_auto_mode";
			this->radioButton_flap_auto_mode->Size = System::Drawing::Size(140, 23);
			this->radioButton_flap_auto_mode->TabIndex = 1;
			this->radioButton_flap_auto_mode->Text = L"Àâòîìàòè÷åñêèé";
			this->radioButton_flap_auto_mode->UseVisualStyleBackColor = true;
			this->radioButton_flap_auto_mode->CheckedChanged += gcnew System::EventHandler(this, &MainForm::radioButton_flap_auto_mode_CheckedChanged);
			// 
			// radioButton_flap_manual_mode
			// 
			this->radioButton_flap_manual_mode->AutoSize = true;
			this->radioButton_flap_manual_mode->Checked = true;
			this->radioButton_flap_manual_mode->ForeColor = System::Drawing::Color::Black;
			this->radioButton_flap_manual_mode->Location = System::Drawing::Point(10, 18);
			this->radioButton_flap_manual_mode->Name = L"radioButton_flap_manual_mode";
			this->radioButton_flap_manual_mode->Size = System::Drawing::Size(76, 23);
			this->radioButton_flap_manual_mode->TabIndex = 0;
			this->radioButton_flap_manual_mode->TabStop = true;
			this->radioButton_flap_manual_mode->Text = L"Ðó÷íîé";
			this->radioButton_flap_manual_mode->UseVisualStyleBackColor = true;
			this->radioButton_flap_manual_mode->CheckedChanged += gcnew System::EventHandler(this, &MainForm::radioButton_flap_manual_mode_CheckedChanged);
			// 
			// f_button_auto_mode_flap_start
			// 
			this->f_button_auto_mode_flap_start->BackColor = System::Drawing::SystemColors::ControlLight;
			this->f_button_auto_mode_flap_start->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->f_button_auto_mode_flap_start->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_button_auto_mode_flap_start->ForeColor = System::Drawing::Color::Crimson;
			this->f_button_auto_mode_flap_start->Location = System::Drawing::Point(11, 192);
			this->f_button_auto_mode_flap_start->Name = L"f_button_auto_mode_flap_start";
			this->f_button_auto_mode_flap_start->Size = System::Drawing::Size(104, 27);
			this->f_button_auto_mode_flap_start->TabIndex = 17;
			this->f_button_auto_mode_flap_start->Text = L"Ñòàðò";
			this->f_button_auto_mode_flap_start->UseVisualStyleBackColor = false;
			this->f_button_auto_mode_flap_start->Visible = false;
			// 
			// f_button_manual_close_flap
			// 
			this->f_button_manual_close_flap->BackColor = System::Drawing::SystemColors::ControlLight;
			this->f_button_manual_close_flap->Enabled = false;
			this->f_button_manual_close_flap->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->f_button_manual_close_flap->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_button_manual_close_flap->Location = System::Drawing::Point(119, 136);
			this->f_button_manual_close_flap->Name = L"f_button_manual_close_flap";
			this->f_button_manual_close_flap->Size = System::Drawing::Size(108, 31);
			this->f_button_manual_close_flap->TabIndex = 15;
			this->f_button_manual_close_flap->Text = L"Çàêðûòü";
			this->f_button_manual_close_flap->UseVisualStyleBackColor = false;
			// 
			// f_button_manual_open_flap
			// 
			this->f_button_manual_open_flap->BackColor = System::Drawing::SystemColors::ControlLight;
			this->f_button_manual_open_flap->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->f_button_manual_open_flap->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_button_manual_open_flap->ForeColor = System::Drawing::Color::Crimson;
			this->f_button_manual_open_flap->Location = System::Drawing::Point(11, 136);
			this->f_button_manual_open_flap->Name = L"f_button_manual_open_flap";
			this->f_button_manual_open_flap->Size = System::Drawing::Size(104, 31);
			this->f_button_manual_open_flap->TabIndex = 11;
			this->f_button_manual_open_flap->Text = L"Îòêðûòü";
			this->f_button_manual_open_flap->UseVisualStyleBackColor = false;
			// 
			// i_label_flap_status
			// 
			this->i_label_flap_status->AutoSize = true;
			this->i_label_flap_status->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->i_label_flap_status->ForeColor = System::Drawing::Color::Black;
			this->i_label_flap_status->Location = System::Drawing::Point(74, 49);
			this->i_label_flap_status->Name = L"i_label_flap_status";
			this->i_label_flap_status->Size = System::Drawing::Size(87, 17);
			this->i_label_flap_status->TabIndex = 13;
			this->i_label_flap_status->Text = L"(ïîëîæåíèå)";
			// 
			// f_label_flap_status
			// 
			this->f_label_flap_status->AutoSize = true;
			this->f_label_flap_status->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_label_flap_status->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->f_label_flap_status->Location = System::Drawing::Point(27, 23);
			this->f_label_flap_status->Name = L"f_label_flap_status";
			this->f_label_flap_status->Size = System::Drawing::Size(177, 26);
			this->f_label_flap_status->TabIndex = 12;
			this->f_label_flap_status->Text = L"Çàñëîíêà: îòêðûòà";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->f_stop_button);
			this->panel3->Controls->Add(this->groupBox4);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel3->Location = System::Drawing::Point(0, 658);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(251, 209);
			this->panel3->TabIndex = 12;
			// 
			// f_stop_button
			// 
			this->f_stop_button->BackColor = System::Drawing::Color::Crimson;
			this->f_stop_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_stop_button->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->f_stop_button->Location = System::Drawing::Point(3, 150);
			this->f_stop_button->Name = L"f_stop_button";
			this->f_stop_button->Size = System::Drawing::Size(239, 56);
			this->f_stop_button->TabIndex = 0;
			this->f_stop_button->Text = L"STOP";
			this->f_stop_button->UseVisualStyleBackColor = false;
			this->f_stop_button->Click += gcnew System::EventHandler(this, &MainForm::f_stop_button_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label17);
			this->groupBox4->Controls->Add(this->label16);
			this->groupBox4->Controls->Add(this->label15);
			this->groupBox4->Controls->Add(this->pictureBox1);
			this->groupBox4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox4->ForeColor = System::Drawing::Color::RoyalBlue;
			this->groupBox4->Location = System::Drawing::Point(3, 45);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(237, 99);
			this->groupBox4->TabIndex = 11;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Çàïèñü  ïðîöåññà";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(59, 70);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(158, 19);
			this->label17->TabIndex = 3;
			this->label17->Text = L"20_04_2022_13_43.txt";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(11, 70);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(42, 19);
			this->label16->TabIndex = 2;
			this->label16->Text = L"Èìÿ:";
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
			this->groupBox3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->ForeColor = System::Drawing::Color::RoyalBlue;
			this->groupBox3->Location = System::Drawing::Point(2, 277);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(237, 194);
			this->groupBox3->TabIndex = 11;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Òåìïåðàòóðà ïîäëîæêè";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(81, 86);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(137, 29);
			this->button5->TabIndex = 18;
			this->button5->Text = L"Óñòàíîâèòü";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 86);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(63, 29);
			this->textBox1->TabIndex = 17;
			this->textBox1->Text = L"100";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::White;
			this->label14->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label14->Location = System::Drawing::Point(30, 62);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(170, 23);
			this->label14->TabIndex = 16;
			this->label14->Text = L"Çàäàòü òåìïåðàòóðó";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button4->Enabled = false;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(12, 158);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(206, 31);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Îòêëþ÷èòü íàãðåâ";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::Crimson;
			this->button3->Location = System::Drawing::Point(12, 121);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(206, 31);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Âêëþ÷èòü íàãðåâ";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(67, 45);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(101, 17);
			this->label13->TabIndex = 13;
			this->label13->Text = L"(ïîêàçàíèå ÄÒ)";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label12->Location = System::Drawing::Point(106, 24);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(52, 26);
			this->label12->TabIndex = 12;
			this->label12->Text = L"720°";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label11->Location = System::Drawing::Point(79, 24);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(32, 26);
			this->label11->TabIndex = 11;
			this->label11->Text = L"T=";
			this->label11->Click += gcnew System::EventHandler(this, &MainForm::label11_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label18);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->progressBar1);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->ForeColor = System::Drawing::Color::RoyalBlue;
			this->groupBox2->Location = System::Drawing::Point(2, 103);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(237, 168);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Îòêà÷êà";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MainForm::groupBox2_Enter);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::White;
			this->label18->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label18->Location = System::Drawing::Point(22, 103);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(184, 23);
			this->label18->TabIndex = 19;
			this->label18->Text = L"Óïðàâëåíèå ñèñòåìîé";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button2->Enabled = false;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(118, 129);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 31);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Ñòîï";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(6, 129);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 31);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Îòêà÷êà";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::Green;
			this->label9->Location = System::Drawing::Point(162, 77);
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
			this->label10->Location = System::Drawing::Point(200, 77);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(23, 21);
			this->label10->TabIndex = 7;
			this->label10->Text = L"%";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(12, 77);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(144, 23);
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar1->TabIndex = 5;
			this->progressBar1->Value = 100;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::SeaGreen;
			this->label7->Location = System::Drawing::Point(156, 49);
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
			this->label5->ForeColor = System::Drawing::Color::SeaGreen;
			this->label5->Location = System::Drawing::Point(156, 27);
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
			this->label6->ForeColor = System::Drawing::Color::SeaGreen;
			this->label6->Location = System::Drawing::Point(14, 49);
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
			this->label8->ForeColor = System::Drawing::Color::SeaGreen;
			this->label8->Location = System::Drawing::Point(14, 27);
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
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->ForeColor = System::Drawing::Color::RoyalBlue;
			this->groupBox1->Location = System::Drawing::Point(3, 10);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(237, 89);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Äàâëåíèå ñèñòåìû";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label4->Location = System::Drawing::Point(94, 53);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(123, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"5x10+3 mbar";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label3->Location = System::Drawing::Point(19, 53);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"WRG";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label2->Location = System::Drawing::Point(94, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"5x10+3 mbar";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label1->Location = System::Drawing::Point(25, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"APG";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel4->Location = System::Drawing::Point(334, 832);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(576, 59);
			this->panel4->TabIndex = 9;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::White;
			this->panel6->Controls->Add(this->pictureBox2);
			this->panel6->Controls->Add(this->label60);
			this->panel6->Controls->Add(this->f_button_connect_to_PLC);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel6->Location = System::Drawing::Point(334, 24);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(576, 67);
			this->panel6->TabIndex = 10;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(239, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(44, 31);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label60->ForeColor = System::Drawing::Color::SeaGreen;
			this->label60->Location = System::Drawing::Point(6, 10);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(224, 19);
			this->label60->TabIndex = 1;
			this->label60->Text = L"Cîåäèíåíèå ñ PLC óñòàíîâëåíî";
			// 
			// f_button_connect_to_PLC
			// 
			this->f_button_connect_to_PLC->Enabled = false;
			this->f_button_connect_to_PLC->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_button_connect_to_PLC->Location = System::Drawing::Point(6, 32);
			this->f_button_connect_to_PLC->Name = L"f_button_connect_to_PLC";
			this->f_button_connect_to_PLC->Size = System::Drawing::Size(189, 31);
			this->f_button_connect_to_PLC->TabIndex = 0;
			this->f_button_connect_to_PLC->Text = L"Ñîåäèíåíèå ñ PLC";
			this->f_button_connect_to_PLC->UseVisualStyleBackColor = true;
			// 
			// f_button_exit
			// 
			this->f_button_exit->BackColor = System::Drawing::Color::Crimson;
			this->f_button_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->f_button_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_button_exit->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->f_button_exit->Location = System::Drawing::Point(1120, 2);
			this->f_button_exit->Name = L"f_button_exit";
			this->f_button_exit->Size = System::Drawing::Size(30, 16);
			this->f_button_exit->TabIndex = 12;
			this->f_button_exit->UseVisualStyleBackColor = false;
			this->f_button_exit->Click += gcnew System::EventHandler(this, &MainForm::f_button_exit_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1161, 891);
			this->Controls->Add(this->f_button_exit);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"UVN Control System 2.0 - Àâòîìàòè÷åñêàÿ ñèñòåìà óïðàâëåíèÿ";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MainForm::MainForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->groupBox_flap->ResumeLayout(false);
			this->groupBox_flap->PerformLayout();
			this->subgroupBox_mode->ResumeLayout(false);
			this->subgroupBox_mode->PerformLayout();
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
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void àâòîìàòè÷åñêèéÏðîöåññToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void f_stop_button_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton_flap_auto_mode_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	
		groupBox_flap->Height = 230;
		f_button_manual_close_flap->Visible = false;
		f_button_manual_open_flap->Visible = false;
		f_button_auto_mode_flap_start->Visible = true;
		f_button_auto_mode_flap_stop->Visible = true;
		I_label_set_time_flap->Visible = true;
		progressBar_flap->Visible = true;
		f_textBox_set_time_flap->Visible = true;
	

}
private: System::Void radioButton_flap_manual_mode_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	groupBox_flap->Height = 180;
	f_button_manual_close_flap->Visible = true;
	f_button_manual_open_flap->Visible = true;
	f_button_auto_mode_flap_start->Visible = false;
	f_button_auto_mode_flap_stop->Visible = false;
	I_label_set_time_flap->Visible = false;
	progressBar_flap->Visible = false;
	f_textBox_set_time_flap->Visible = false;
}
private: System::Void f_button_exit_Click(System::Object^ sender, System::EventArgs^ e) {

	Application::Exit();
}
private: System::Void MainForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {

	Application::Exit();

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {


}
};
}
