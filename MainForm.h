#pragma once
#include "dataPLC.h"

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

		dataPLC^ currentData = gcnew dataPLC();

		String^ ID;
		int work_time = 0;// рабочее время

	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ f_button_PSV2_m30mv;

	private: System::Windows::Forms::Button^ f_button_PSV1_m30mv;
	private: System::Windows::Forms::Button^ f_button_PSV2_p30mv;


	private: System::Windows::Forms::Label^ f_label_PSV1_status_mV;
	private: System::Windows::Forms::Button^ f_button_PSV1_p30mv;



	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ f_button_start_stop_PSV2;




	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ f_label_PSV2_status_mV;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ f_button_start_stop_PSV1;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::GroupBox^ groupbox_butterfly;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ f_label_batterfly_status;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ down_panel;



	private: System::Windows::Forms::Label^ f_textbox_current_ma;
	private: System::Windows::Forms::Label^ f_textbox_voltage_V;
	private: System::Windows::Forms::Button^ f_button_auto_start_flap;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;

	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::ToolStripMenuItem^ автоматизированныйРежимToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ автоматическийРежимToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ adminToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ studentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ демоверсияToolStripMenuItem;


	public:

		DateTime^ date1 = gcnew DateTime(0);

		void start_timer() {

			Timer->Enabled = true;
			Timer->Interval = 1000;

		}
		

		// ФУНКЦИИ РАБОТА С ФОРМОЙ 

		void MainForm_block() { //блокируем элементы на форме

			left_down_panel->Enabled = false;
			left_panel->Enabled = false;
			right_panel->Enabled = false;
			right_down_panel->Enabled = false;

		}

		void MainForm_unblock() { // активируем элементы на форме

			left_down_panel->Enabled = true;
			left_panel->Enabled = true;
			right_panel->Enabled = true;
			right_down_panel->Enabled = true;
		}

		void MainFormClear() {
		//GroupBoxTime 
		//Первая строка Старт Откачки
			f_label_timer_current_start_pump->Text = "-"; /// Зачищаем первую строку radogroup_time
			f_label_timer_time_start_pump->Text = "-";
			f_label_timer_start_start_pump->Text = "-";
		
		//Вторая строка  Откачка
			f_label_timer_start_pump->Text = "-";
			f_label_timer_current_pump->Text = "-";
			f_label_timer_time_pump->Text = "-";

		//Третья строка Газы
			f_label_timer_start_gases->Text = "-";
			f_label_timer_current_gases->Text = "-";
			f_label_timer_time_gases->Text = "-";

		//Четвертая строка 
			f_label_timer_start_TPlB->Text = "-";
			f_label_timer_time_TPlB->Text = "-";
			f_label_timer_current_TPlB->Text = "-";

		//Пятая строка Стоп Откачки
			f_label_timer_start_stop_pump->Text = "-";
			f_label_timer_time_stop_pump->Text = "-";
			f_label_timer_current_stop_pump->Text = "-";


		//Клапан бабочка -- положение
			f_label_batterfly_status->Text = "-";


		//Газы
			f_label_PSV1_status_mV->Text = "-";
			f_label_PSV2_status_mV->Text = "-";


		//APG WRD
			f_label_APG_status->Text = "-";
			f_label_WRG_status->Text = "-";
	
		//TPlB
			f_textbox_current_ma->Text = "-";
			f_textbox_voltage_V->Text = "-";

		//Temperature
			f_label_temp_status_deg->Text = "-";

		//Flap
			f_label_flap_status->Text = "-";

		//Recording
			//f_label_recording->Visible = false;
			//i_label_name_recording->Visible = false;
			//f_label_name_recording->Visible = false;
			//pictureBox_recording->Visible = false;

		//pumps
			f_label_turbopump_status->Text = "-";
			f_label_turbopump_status->ForeColor=System::Drawing::Color::Crimson;
			f_label_backpump_status->Text = "-";
			f_label_backpump_status->ForeColor = System::Drawing::Color::Crimson;
			i_label_backpump_status->ForeColor = System::Drawing::Color::Crimson;
			i_label_turbopump_status->ForeColor = System::Drawing::Color::Crimson;
			progressBar_Turbopump->Value = 0;
			f_label_trubo_percent->Text = "0";
		}

		void start_show_user() { // очистка данных для admin и student
			
			MainForm_block();
			MainFormClear();
			picture_connection->Visible = false;
			picture_not_connection->Visible = true;
			f_button_connect_to_PLC->Enabled = true;
			i_button_connect_to_PLC->Text = "Нет соединения с PLC";
			i_button_connect_to_PLC->ForeColor = System::Drawing::Color::Crimson;
		}


		void access_admin() {
			
			start_show_user();
		}

		void access_demo() {
			
			this->Show();
	
		}



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
	private: System::Windows::Forms::Panel^ left_panel;
	private: System::Windows::Forms::Panel^ right_panel;


	private: System::Windows::Forms::Button^ f_stop_button;
	private: System::Windows::Forms::GroupBox^ groupBox1;
private: System::Windows::Forms::Label^ f_label_WRG_status;

	private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ f_label_APG_status;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
private: System::Windows::Forms::Button^ f_button_stop_pump;

private: System::Windows::Forms::Button^ f_button_start_pump;

private: System::Windows::Forms::Label^ f_label_trubo_percent;

	private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::ProgressBar^ progressBar_Turbopump;

private: System::Windows::Forms::Label^ f_label_turbopump_status;

private: System::Windows::Forms::Label^ f_label_backpump_status;
private: System::Windows::Forms::Label^ i_label_turbopump_status;


private: System::Windows::Forms::Label^ i_label_backpump_status;

	private: System::Windows::Forms::GroupBox^ groupBox3;
private: System::Windows::Forms::Label^ f_label_temp_status_deg;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label14;

private: System::Windows::Forms::Button^ f_button_on_off_heat;

	private: System::Windows::Forms::Label^ label13;


private: System::Windows::Forms::Label^ f_label_name_recording;
private: System::Windows::Forms::Label^ i_label_name_recording;


private: System::Windows::Forms::Label^ f_label_recording;
private: System::Windows::Forms::PictureBox^ pictureBox_recording;





	private: System::Windows::Forms::Panel^ right_down_panel;

	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::GroupBox^ groupBox_time;
private: System::Windows::Forms::Label^ f_label_timer_time_stop_pump;


private: System::Windows::Forms::Label^ f_label_timer_current_stop_pump;

private: System::Windows::Forms::Label^ f_label_timer_start_stop_pump;

private: System::Windows::Forms::Label^ f_label_timer_time_TPlB;

private: System::Windows::Forms::Label^ f_label_timer_time_gases;

	private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ f_label_timer_current_TPlB;
private: System::Windows::Forms::Label^ f_label_timer_start_TPlB;




	private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ f_label_timer_current_gases;

private: System::Windows::Forms::Label^ f_label_timer_start_gases;

	private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ f_label_timer_current_pump;

private: System::Windows::Forms::Label^ f_label_timer_current_start_pump;
private: System::Windows::Forms::Label^ f_label_timer_time_pump;


private: System::Windows::Forms::Label^ f_label_timer_start_pump;

	private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ f_label_timer_start_start_pump;
private: System::Windows::Forms::Label^ f_label_timer_time_start_pump;



	private: System::Windows::Forms::Label^ label19;











private: System::Windows::Forms::GroupBox^ groupBox8;


private: System::Windows::Forms::TextBox^ textBox6;






private: System::Windows::Forms::Label^ label54;





private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Label^ label56;























private: System::Windows::Forms::Panel^ left_down_panel;

private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::PictureBox^ picture_connection;

private: System::Windows::Forms::Label^ i_button_connect_to_PLC;

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








private: System::Windows::Forms::ProgressBar^ progressBar_flap;

private: System::Windows::Forms::GroupBox^ groupBox5;
private: System::Windows::Forms::PictureBox^ picture_not_connection;
private: System::Windows::Forms::Timer^ Timer;

private: System::Windows::Forms::Label^ data_label;
private: System::ComponentModel::IContainer^ components;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->управлениеПроцессомToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->автоматизированныйРежимToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->автоматическийРежимToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->настройкаНагреваToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выборРегулятораToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->настройкаПИДToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->настройкаШИМToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->настройкаДоступаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сетевойДоступToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->учетнаяЗаписьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->adminToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->studentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->демоверсияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->left_panel = (gcnew System::Windows::Forms::Panel());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->f_button_PSV2_m30mv = (gcnew System::Windows::Forms::Button());
			this->f_button_PSV1_m30mv = (gcnew System::Windows::Forms::Button());
			this->f_button_PSV2_p30mv = (gcnew System::Windows::Forms::Button());
			this->f_label_PSV1_status_mV = (gcnew System::Windows::Forms::Label());
			this->f_button_PSV1_p30mv = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->f_button_start_stop_PSV2 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->f_label_PSV2_status_mV = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->f_button_start_stop_PSV1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->left_down_panel = (gcnew System::Windows::Forms::Panel());
			this->f_label_recording = (gcnew System::Windows::Forms::Label());
			this->i_label_name_recording = (gcnew System::Windows::Forms::Label());
			this->pictureBox_recording = (gcnew System::Windows::Forms::PictureBox());
			this->f_label_name_recording = (gcnew System::Windows::Forms::Label());
			this->groupbox_butterfly = (gcnew System::Windows::Forms::GroupBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->f_label_batterfly_status = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->groupBox_time = (gcnew System::Windows::Forms::GroupBox());
			this->f_label_timer_time_stop_pump = (gcnew System::Windows::Forms::Label());
			this->f_label_timer_current_stop_pump = (gcnew System::Windows::Forms::Label());
			this->f_label_timer_start_stop_pump = (gcnew System::Windows::Forms::Label());
			this->f_label_timer_time_TPlB = (gcnew System::Windows::Forms::Label());
			this->f_label_timer_time_gases = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->f_label_timer_current_TPlB = (gcnew System::Windows::Forms::Label());
			this->f_label_timer_start_TPlB = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->f_label_timer_current_gases = (gcnew System::Windows::Forms::Label());
			this->f_label_timer_start_gases = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->f_label_timer_current_pump = (gcnew System::Windows::Forms::Label());
			this->f_label_timer_current_start_pump = (gcnew System::Windows::Forms::Label());
			this->f_label_timer_time_pump = (gcnew System::Windows::Forms::Label());
			this->f_label_timer_start_pump = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->f_label_timer_start_start_pump = (gcnew System::Windows::Forms::Label());
			this->f_label_timer_time_start_pump = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->data_label = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->f_textbox_current_ma = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->f_textbox_voltage_V = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->right_panel = (gcnew System::Windows::Forms::Panel());
			this->groupBox_flap = (gcnew System::Windows::Forms::GroupBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->f_button_auto_start_flap = (gcnew System::Windows::Forms::Button());
			this->I_label_set_time_flap = (gcnew System::Windows::Forms::Label());
			this->f_textBox_set_time_flap = (gcnew System::Windows::Forms::TextBox());
			this->progressBar_flap = (gcnew System::Windows::Forms::ProgressBar());
			this->subgroupBox_mode = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton_flap_auto_mode = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_flap_manual_mode = (gcnew System::Windows::Forms::RadioButton());
			this->f_button_manual_close_flap = (gcnew System::Windows::Forms::Button());
			this->f_button_manual_open_flap = (gcnew System::Windows::Forms::Button());
			this->i_label_flap_status = (gcnew System::Windows::Forms::Label());
			this->f_label_flap_status = (gcnew System::Windows::Forms::Label());
			this->right_down_panel = (gcnew System::Windows::Forms::Panel());
			this->f_stop_button = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->f_button_on_off_heat = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->f_label_temp_status_deg = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->f_button_stop_pump = (gcnew System::Windows::Forms::Button());
			this->f_button_start_pump = (gcnew System::Windows::Forms::Button());
			this->f_label_trubo_percent = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->progressBar_Turbopump = (gcnew System::Windows::Forms::ProgressBar());
			this->f_label_turbopump_status = (gcnew System::Windows::Forms::Label());
			this->f_label_backpump_status = (gcnew System::Windows::Forms::Label());
			this->i_label_turbopump_status = (gcnew System::Windows::Forms::Label());
			this->i_label_backpump_status = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->f_label_WRG_status = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->f_label_APG_status = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->picture_not_connection = (gcnew System::Windows::Forms::PictureBox());
			this->f_button_connect_to_PLC = (gcnew System::Windows::Forms::Button());
			this->picture_connection = (gcnew System::Windows::Forms::PictureBox());
			this->i_button_connect_to_PLC = (gcnew System::Windows::Forms::Label());
			this->Timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->down_panel = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1->SuspendLayout();
			this->left_panel->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->left_down_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_recording))->BeginInit();
			this->groupbox_butterfly->SuspendLayout();
			this->groupBox_time->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->right_panel->SuspendLayout();
			this->groupBox_flap->SuspendLayout();
			this->subgroupBox_mode->SuspendLayout();
			this->right_down_panel->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel6->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_not_connection))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_connection))->BeginInit();
			this->panel4->SuspendLayout();
			this->down_panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::White;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->управлениеПроцессомToolStripMenuItem,
					this->настройкаНагреваToolStripMenuItem, this->настройкаДоступаToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1004, 24);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// управлениеПроцессомToolStripMenuItem
			// 
			this->управлениеПроцессомToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->автоматизированныйРежимToolStripMenuItem,
					this->автоматическийРежимToolStripMenuItem
			});
			this->управлениеПроцессомToolStripMenuItem->Name = L"управлениеПроцессомToolStripMenuItem";
			this->управлениеПроцессомToolStripMenuItem->Size = System::Drawing::Size(150, 20);
			this->управлениеПроцессомToolStripMenuItem->Text = L"Управление процессом";
			// 
			// автоматизированныйРежимToolStripMenuItem
			// 
			this->автоматизированныйРежимToolStripMenuItem->Enabled = false;
			this->автоматизированныйРежимToolStripMenuItem->Name = L"автоматизированныйРежимToolStripMenuItem";
			this->автоматизированныйРежимToolStripMenuItem->Size = System::Drawing::Size(236, 22);
			this->автоматизированныйРежимToolStripMenuItem->Text = L"Автоматизированный режим";
			// 
			// автоматическийРежимToolStripMenuItem
			// 
			this->автоматическийРежимToolStripMenuItem->Name = L"автоматическийРежимToolStripMenuItem";
			this->автоматическийРежимToolStripMenuItem->Size = System::Drawing::Size(236, 22);
			this->автоматическийРежимToolStripMenuItem->Text = L"Автоматический режим";
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
			this->учетнаяЗаписьToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->adminToolStripMenuItem,
					this->studentToolStripMenuItem, this->демоверсияToolStripMenuItem
			});
			this->учетнаяЗаписьToolStripMenuItem->Name = L"учетнаяЗаписьToolStripMenuItem";
			this->учетнаяЗаписьToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->учетнаяЗаписьToolStripMenuItem->Text = L"Учетная запись";
			// 
			// adminToolStripMenuItem
			// 
			this->adminToolStripMenuItem->Enabled = false;
			this->adminToolStripMenuItem->Name = L"adminToolStripMenuItem";
			this->adminToolStripMenuItem->Size = System::Drawing::Size(147, 22);
			this->adminToolStripMenuItem->Text = L"Admin";
			// 
			// studentToolStripMenuItem
			// 
			this->studentToolStripMenuItem->Name = L"studentToolStripMenuItem";
			this->studentToolStripMenuItem->Size = System::Drawing::Size(147, 22);
			this->studentToolStripMenuItem->Text = L"Student";
			// 
			// демоверсияToolStripMenuItem
			// 
			this->демоверсияToolStripMenuItem->Name = L"демоверсияToolStripMenuItem";
			this->демоверсияToolStripMenuItem->Size = System::Drawing::Size(147, 22);
			this->демоверсияToolStripMenuItem->Text = L"Демо-версия";
			// 
			// left_panel
			// 
			this->left_panel->BackColor = System::Drawing::Color::White;
			this->left_panel->Controls->Add(this->groupBox6);
			this->left_panel->Controls->Add(this->left_down_panel);
			this->left_panel->Controls->Add(this->groupbox_butterfly);
			this->left_panel->Controls->Add(this->groupBox_time);
			this->left_panel->Dock = System::Windows::Forms::DockStyle::Left;
			this->left_panel->Location = System::Drawing::Point(0, 24);
			this->left_panel->Name = L"left_panel";
			this->left_panel->Size = System::Drawing::Size(317, 705);
			this->left_panel->TabIndex = 7;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->tabControl1);
			this->groupBox6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox6->ForeColor = System::Drawing::Color::RoyalBlue;
			this->groupBox6->Location = System::Drawing::Point(9, 319);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(304, 347);
			this->groupBox6->TabIndex = 33;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Напуск газов";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabControl1->Location = System::Drawing::Point(6, 30);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(292, 309);
			this->tabControl1->TabIndex = 25;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->f_button_PSV2_m30mv);
			this->tabPage1->Controls->Add(this->f_button_PSV1_m30mv);
			this->tabPage1->Controls->Add(this->f_button_PSV2_p30mv);
			this->tabPage1->Controls->Add(this->f_label_PSV1_status_mV);
			this->tabPage1->Controls->Add(this->f_button_PSV1_p30mv);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->f_button_start_stop_PSV2);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->f_label_PSV2_status_mV);
			this->tabPage1->Controls->Add(this->label16);
			this->tabPage1->Controls->Add(this->f_button_start_stop_PSV1);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tabPage1->Location = System::Drawing::Point(4, 24);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(284, 281);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Ручной режим";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// f_button_PSV2_m30mv
			// 
			this->f_button_PSV2_m30mv->BackColor = System::Drawing::SystemColors::ControlLight;
			this->f_button_PSV2_m30mv->Enabled = false;
			this->f_button_PSV2_m30mv->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->f_button_PSV2_m30mv->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_button_PSV2_m30mv->ForeColor = System::Drawing::Color::Navy;
			this->f_button_PSV2_m30mv->Location = System::Drawing::Point(158, 245);
			this->f_button_PSV2_m30mv->Name = L"f_button_PSV2_m30mv";
			this->f_button_PSV2_m30mv->Size = System::Drawing::Size(120, 26);
			this->f_button_PSV2_m30mv->TabIndex = 41;
			this->f_button_PSV2_m30mv->Text = L"- 30 мВ";
			this->f_button_PSV2_m30mv->UseVisualStyleBackColor = false;
			this->f_button_PSV2_m30mv->Click += gcnew System::EventHandler(this, &MainForm::f_button_PSV2_m30mv_Click);
			// 
			// f_button_PSV1_m30mv
			// 
			this->f_button_PSV1_m30mv->BackColor = System::Drawing::SystemColors::ControlLight;
			this->f_button_PSV1_m30mv->Enabled = false;
			this->f_button_PSV1_m30mv->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->f_button_PSV1_m30mv->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_button_PSV1_m30mv->ForeColor = System::Drawing::Color::Navy;
			this->f_button_PSV1_m30mv->Location = System::Drawing::Point(158, 108);
			this->f_button_PSV1_m30mv->Name = L"f_button_PSV1_m30mv";
			this->f_button_PSV1_m30mv->Size = System::Drawing::Size(120, 26);
			this->f_button_PSV1_m30mv->TabIndex = 41;
			this->f_button_PSV1_m30mv->Text = L"- 30 мВ";
			this->f_button_PSV1_m30mv->UseVisualStyleBackColor = false;
			this->f_button_PSV1_m30mv->Click += gcnew System::EventHandler(this, &MainForm::f_button_PSV1_m30mv_Click);
			// 
			// f_button_PSV2_p30mv
			// 
			this->f_button_PSV2_p30mv->BackColor = System::Drawing::SystemColors::ControlLight;
			this->f_button_PSV2_p30mv->Enabled = false;
			this->f_button_PSV2_p30mv->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->f_button_PSV2_p30mv->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_button_PSV2_p30mv->ForeColor = System::Drawing::Color::Crimson;
			this->f_button_PSV2_p30mv->Location = System::Drawing::Point(158, 213);
			this->f_button_PSV2_p30mv->Name = L"f_button_PSV2_p30mv";
			this->f_button_PSV2_p30mv->Size = System::Drawing::Size(120, 26);
			this->f_button_PSV2_p30mv->TabIndex = 40;
			this->f_button_PSV2_p30mv->Text = L"+ 30 мВ";
			this->f_button_PSV2_p30mv->UseVisualStyleBackColor = false;
			this->f_button_PSV2_p30mv->Click += gcnew System::EventHandler(this, &MainForm::f_button_PSV2_p30mv_Click);
			// 
			// f_label_PSV1_status_mV
			// 
			this->f_label_PSV1_status_mV->AutoSize = true;
			this->f_label_PSV1_status_mV->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_label_PSV1_status_mV->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->f_label_PSV1_status_mV->Location = System::Drawing::Point(134, 4);
			this->f_label_PSV1_status_mV->Name = L"f_label_PSV1_status_mV";
			this->f_label_PSV1_status_mV->Size = System::Drawing::Size(56, 26);
			this->f_label_PSV1_status_mV->TabIndex = 34;
			this->f_label_PSV1_status_mV->Text = L"1200";
			// 
			// f_button_PSV1_p30mv
			// 
			this->f_button_PSV1_p30mv->BackColor = System::Drawing::SystemColors::ControlLight;
			this->f_button_PSV1_p30mv->Enabled = false;
			this->f_button_PSV1_p30mv->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->f_button_PSV1_p30mv->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_button_PSV1_p30mv->ForeColor = System::Drawing::Color::Crimson;
			this->f_button_PSV1_p30mv->Location = System::Drawing::Point(158, 76);
			this->f_button_PSV1_p30mv->Name = L"f_button_PSV1_p30mv";
			this->f_button_PSV1_p30mv->Size = System::Drawing::Size(120, 26);
			this->f_button_PSV1_p30mv->TabIndex = 40;
			this->f_button_PSV1_p30mv->Text = L"+ 30 мВ";
			this->f_button_PSV1_p30mv->UseVisualStyleBackColor = false;
			this->f_button_PSV1_p30mv->Click += gcnew System::EventHandler(this, &MainForm::f_button_PSV1_p30mv_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::White;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label8->Location = System::Drawing::Point(73, 180);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(148, 23);
			this->label8->TabIndex = 38;
			this->label8->Text = L"Напуск газа PSV2";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label7->Location = System::Drawing::Point(62, 4);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(66, 26);
			this->label7->TabIndex = 33;
			this->label7->Text = L"PSV 1 ";
			// 
			// f_button_start_stop_PSV2
			// 
			this->f_button_start_stop_PSV2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->f_button_start_stop_PSV2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->f_button_start_stop_PSV2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_button_start_stop_PSV2->ForeColor = System::Drawing::Color::RoyalBlue;
			this->f_button_start_stop_PSV2->Location = System::Drawing::Point(4, 213);
			this->f_button_start_stop_PSV2->Name = L"f_button_start_stop_PSV2";
			this->f_button_start_stop_PSV2->Size = System::Drawing::Size(147, 58);
			this->f_button_start_stop_PSV2->TabIndex = 37;
			this->f_button_start_stop_PSV2->Text = L"Включить PSV2";
			this->f_button_start_stop_PSV2->UseVisualStyleBackColor = false;
			this->f_button_start_stop_PSV2->Click += gcnew System::EventHandler(this, &MainForm::f_button_start_stop_PSV2_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label9->Location = System::Drawing::Point(192, 137);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(37, 26);
			this->label9->TabIndex = 36;
			this->label9->Text = L"мВ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(105, 30);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 18);
			this->label5->TabIndex = 35;
			this->label5->Text = L"(сигнал au)";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(105, 160);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(78, 18);
			this->label12->TabIndex = 35;
			this->label12->Text = L"(сигнал au)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label2->Location = System::Drawing::Point(192, 4);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 26);
			this->label2->TabIndex = 38;
			this->label2->Text = L"мВ";
			// 
			// f_label_PSV2_status_mV
			// 
			this->f_label_PSV2_status_mV->AutoSize = true;
			this->f_label_PSV2_status_mV->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_label_PSV2_status_mV->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->f_label_PSV2_status_mV->Location = System::Drawing::Point(134, 137);
			this->f_label_PSV2_status_mV->Name = L"f_label_PSV2_status_mV";
			this->f_label_PSV2_status_mV->Size = System::Drawing::Size(56, 26);
			this->f_label_PSV2_status_mV->TabIndex = 34;
			this->f_label_PSV2_status_mV->Text = L"1200";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label16->Location = System::Drawing::Point(62, 137);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(66, 26);
			this->label16->TabIndex = 33;
			this->label16->Text = L"PSV 2 ";
			// 
			// f_button_start_stop_PSV1
			// 
			this->f_button_start_stop_PSV1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->f_button_start_stop_PSV1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->f_button_start_stop_PSV1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_button_start_stop_PSV1->ForeColor = System::Drawing::Color::RoyalBlue;
			this->f_button_start_stop_PSV1->Location = System::Drawing::Point(8, 77);
			this->f_button_start_stop_PSV1->Name = L"f_button_start_stop_PSV1";
			this->f_button_start_stop_PSV1->Size = System::Drawing::Size(143, 57);
			this->f_button_start_stop_PSV1->TabIndex = 36;
			this->f_button_start_stop_PSV1->Text = L"Включить PSV1";
			this->f_button_start_stop_PSV1->UseVisualStyleBackColor = false;
			this->f_button_start_stop_PSV1->Click += gcnew System::EventHandler(this, &MainForm::f_button_start_stop_PSV1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label4->Location = System::Drawing::Point(73, 47);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(148, 23);
			this->label4->TabIndex = 37;
			this->label4->Text = L"Напуск газа PSV1";
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 24);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(284, 281);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Автоматический режим";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// left_down_panel
			// 
			this->left_down_panel->Controls->Add(this->f_label_recording);
			this->left_down_panel->Controls->Add(this->i_label_name_recording);
			this->left_down_panel->Controls->Add(this->pictureBox_recording);
			this->left_down_panel->Controls->Add(this->f_label_name_recording);
			this->left_down_panel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->left_down_panel->Location = System::Drawing::Point(0, 676);
			this->left_down_panel->Name = L"left_down_panel";
			this->left_down_panel->Size = System::Drawing::Size(317, 29);
			this->left_down_panel->TabIndex = 21;
			// 
			// f_label_recording
			// 
			this->f_label_recording->AutoSize = true;
			this->f_label_recording->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_label_recording->ForeColor = System::Drawing::Color::Crimson;
			this->f_label_recording->Location = System::Drawing::Point(32, 5);
			this->f_label_recording->Name = L"f_label_recording";
			this->f_label_recording->Size = System::Drawing::Size(81, 18);
			this->f_label_recording->TabIndex = 1;
			this->f_label_recording->Text = L"RECORDING";
			this->f_label_recording->Click += gcnew System::EventHandler(this, &MainForm::f_label_recording_Click);
			// 
			// i_label_name_recording
			// 
			this->i_label_name_recording->AutoSize = true;
			this->i_label_name_recording->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->i_label_name_recording->ForeColor = System::Drawing::Color::Black;
			this->i_label_name_recording->Location = System::Drawing::Point(129, 5);
			this->i_label_name_recording->Name = L"i_label_name_recording";
			this->i_label_name_recording->Size = System::Drawing::Size(42, 19);
			this->i_label_name_recording->TabIndex = 2;
			this->i_label_name_recording->Text = L"Имя:";
			// 
			// pictureBox_recording
			// 
			this->pictureBox_recording->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_recording.Image")));
			this->pictureBox_recording->Location = System::Drawing::Point(12, 3);
			this->pictureBox_recording->Name = L"pictureBox_recording";
			this->pictureBox_recording->Size = System::Drawing::Size(20, 25);
			this->pictureBox_recording->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox_recording->TabIndex = 0;
			this->pictureBox_recording->TabStop = false;
			this->pictureBox_recording->Click += gcnew System::EventHandler(this, &MainForm::pictureBox_recording_Click);
			// 
			// f_label_name_recording
			// 
			this->f_label_name_recording->AutoSize = true;
			this->f_label_name_recording->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_label_name_recording->ForeColor = System::Drawing::Color::Black;
			this->f_label_name_recording->Location = System::Drawing::Point(173, 5);
			this->f_label_name_recording->Name = L"f_label_name_recording";
			this->f_label_name_recording->Size = System::Drawing::Size(76, 19);
			this->f_label_name_recording->TabIndex = 3;
			this->f_label_name_recording->Text = L"Hst121.txt";
			// 
			// groupbox_butterfly
			// 
			this->groupbox_butterfly->Controls->Add(this->label39);
			this->groupbox_butterfly->Controls->Add(this->button6);
			this->groupbox_butterfly->Controls->Add(this->textBox2);
			this->groupbox_butterfly->Controls->Add(this->label40);
			this->groupbox_butterfly->Controls->Add(this->f_label_batterfly_status);
			this->groupbox_butterfly->Controls->Add(this->label42);
			this->groupbox_butterfly->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupbox_butterfly->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupbox_butterfly->ForeColor = System::Drawing::Color::RoyalBlue;
			this->groupbox_butterfly->Location = System::Drawing::Point(9, 176);
			this->groupbox_butterfly->Name = L"groupbox_butterfly";
			this->groupbox_butterfly->Size = System::Drawing::Size(304, 142);
			this->groupbox_butterfly->TabIndex = 19;
			this->groupbox_butterfly->TabStop = false;
			this->groupbox_butterfly->Text = L"Клапан бабочка";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->BackColor = System::Drawing::Color::White;
			this->label39->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label39->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label39->Location = System::Drawing::Point(56, 71);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(193, 23);
			this->label39->TabIndex = 19;
			this->label39->Text = L"Установить положение";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(124, 97);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(137, 29);
			this->button6->TabIndex = 18;
			this->button6->Text = L"Установить";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->HideSelection = false;
			this->textBox2->Location = System::Drawing::Point(26, 97);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(90, 29);
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
			this->label40->Location = System::Drawing::Point(86, 54);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(123, 17);
			this->label40->TabIndex = 13;
			this->label40->Text = L"(открытие клапана)";
			// 
			// f_label_batterfly_status
			// 
			this->f_label_batterfly_status->AutoSize = true;
			this->f_label_batterfly_status->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_label_batterfly_status->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->f_label_batterfly_status->Location = System::Drawing::Point(177, 28);
			this->f_label_batterfly_status->Name = L"f_label_batterfly_status";
			this->f_label_batterfly_status->Size = System::Drawing::Size(60, 26);
			this->f_label_batterfly_status->TabIndex = 12;
			this->f_label_batterfly_status->Text = L"100%";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label42->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label42->Location = System::Drawing::Point(65, 28);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(114, 26);
			this->label42->TabIndex = 11;
			this->label42->Text = L"Положение";
			// 
			// groupBox_time
			// 
			this->groupBox_time->Controls->Add(this->f_label_timer_time_stop_pump);
			this->groupBox_time->Controls->Add(this->f_label_timer_current_stop_pump);
			this->groupBox_time->Controls->Add(this->f_label_timer_start_stop_pump);
			this->groupBox_time->Controls->Add(this->f_label_timer_time_TPlB);
			this->groupBox_time->Controls->Add(this->f_label_timer_time_gases);
			this->groupBox_time->Controls->Add(this->label33);
			this->groupBox_time->Controls->Add(this->f_label_timer_current_TPlB);
			this->groupBox_time->Controls->Add(this->f_label_timer_start_TPlB);
			this->groupBox_time->Controls->Add(this->label30);
			this->groupBox_time->Controls->Add(this->f_label_timer_current_gases);
			this->groupBox_time->Controls->Add(this->f_label_timer_start_gases);
			this->groupBox_time->Controls->Add(this->label27);
			this->groupBox_time->Controls->Add(this->f_label_timer_current_pump);
			this->groupBox_time->Controls->Add(this->f_label_timer_current_start_pump);
			this->groupBox_time->Controls->Add(this->f_label_timer_time_pump);
			this->groupBox_time->Controls->Add(this->f_label_timer_start_pump);
			this->groupBox_time->Controls->Add(this->label22);
			this->groupBox_time->Controls->Add(this->f_label_timer_start_start_pump);
			this->groupBox_time->Controls->Add(this->f_label_timer_time_start_pump);
			this->groupBox_time->Controls->Add(this->label19);
			this->groupBox_time->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox_time->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox_time->ForeColor = System::Drawing::Color::RoyalBlue;
			this->groupBox_time->Location = System::Drawing::Point(9, 3);
			this->groupBox_time->Name = L"groupBox_time";
			this->groupBox_time->Size = System::Drawing::Size(304, 170);
			this->groupBox_time->TabIndex = 4;
			this->groupBox_time->TabStop = false;
			this->groupBox_time->Text = L"Время процесса";
			// 
			// f_label_timer_time_stop_pump
			// 
			this->f_label_timer_time_stop_pump->AutoSize = true;
			this->f_label_timer_time_stop_pump->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_label_timer_time_stop_pump->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->f_label_timer_time_stop_pump->Location = System::Drawing::Point(246, 137);
			this->f_label_timer_time_stop_pump->Name = L"f_label_timer_time_stop_pump";
			this->f_label_timer_time_stop_pump->Size = System::Drawing::Size(16, 23);
			this->f_label_timer_time_stop_pump->TabIndex = 22;
			this->f_label_timer_time_stop_pump->Text = L"-";
			// 
			// f_label_timer_current_stop_pump
			// 
			this->f_label_timer_current_stop_pump->AutoSize = true;
			this->f_label_timer_current_stop_pump->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_label_timer_current_stop_pump->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->f_label_timer_current_stop_pump->Location = System::Drawing::Point(197, 137);
			this->f_label_timer_current_stop_pump->Name = L"f_label_timer_current_stop_pump";
			this->f_label_timer_current_stop_pump->Size = System::Drawing::Size(16, 23);
			this->f_label_timer_current_stop_pump->TabIndex = 21;
			this->f_label_timer_current_stop_pump->Text = L"-";
			// 
			// f_label_timer_start_stop_pump
			// 
			this->f_label_timer_start_stop_pump->AutoSize = true;
			this->f_label_timer_start_stop_pump->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_label_timer_start_stop_pump->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->f_label_timer_start_stop_pump->Location = System::Drawing::Point(145, 137);
			this->f_label_timer_start_stop_pump->Name = L"f_label_timer_start_stop_pump";
			this->f_label_timer_start_stop_pump->Size = System::Drawing::Size(16, 23);
			this->f_label_timer_start_stop_pump->TabIndex = 20;
			this->f_label_timer_start_stop_pump->Text = L"-";
			this->f_label_timer_start_stop_pump->Click += gcnew System::EventHandler(this, &MainForm::label36_Click);
			// 
			// f_label_timer_time_TPlB
			// 
			this->f_label_timer_time_TPlB->AutoSize = true;
			this->f_label_timer_time_TPlB->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_label_timer_time_TPlB->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->f_label_timer_time_TPlB->Location = System::Drawing::Point(246, 110);
			this->f_label_timer_time_TPlB->Name = L"f_label_timer_time_TPlB";
			this->f_label_timer_time_TPlB->Size = System::Drawing::Size(55, 23);
			this->f_label_timer_time_TPlB->TabIndex = 19;
			this->f_label_timer_time_TPlB->Text = L"13:01";
			// 
			// f_label_timer_time_gases
			// 
			this->f_label_timer_time_gases->AutoSize = true;
			this->f_label_timer_time_gases->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_label_timer_time_gases->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->f_label_timer_time_gases->Location = System::Drawing::Point(246, 83);
			this->f_label_timer_time_gases->Name = L"f_label_timer_time_gases";
			this->f_label_timer_time_gases->Size = System::Drawing::Size(55, 23);
			this->f_label_timer_time_gases->TabIndex = 18;
			this->f_label_timer_time_gases->Text = L"13:00";
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
			this->label33->Text = L"Стоп откачки:";
			// 
			// f_label_timer_current_TPlB
			// 
			this->f_label_timer_current_TPlB->AutoSize = true;
			this->f_label_timer_current_TPlB->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_label_timer_current_TPlB->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->f_label_timer_current_TPlB->Location = System::Drawing::Point(197, 110);
			this->f_label_timer_current_TPlB->Name = L"f_label_timer_current_TPlB";
			this->f_label_timer_current_TPlB->Size = System::Drawing::Size(40, 23);
			this->f_label_timer_current_TPlB->TabIndex = 16;
			this->f_label_timer_current_TPlB->Text = L"274";
			// 
			// f_label_timer_start_TPlB
			// 
			this->f_label_timer_start_TPlB->AutoSize = true;
			this->f_label_timer_start_TPlB->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_label_timer_start_TPlB->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->f_label_timer_start_TPlB->Location = System::Drawing::Point(145, 110);
			this->f_label_timer_start_TPlB->Name = L"f_label_timer_start_TPlB";
			this->f_label_timer_start_TPlB->Size = System::Drawing::Size(40, 23);
			this->f_label_timer_start_TPlB->TabIndex = 15;
			this->f_label_timer_start_TPlB->Text = L"360";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label30->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label30->Location = System::Drawing::Point(2, 110);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(129, 23);
			this->label30->TabIndex = 14;
			this->label30->Text = L"Источник тока:";
			// 
			// f_label_timer_current_gases
			// 
			this->f_label_timer_current_gases->AutoSize = true;
			this->f_label_timer_current_gases->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_label_timer_current_gases->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->f_label_timer_current_gases->Location = System::Drawing::Point(197, 83);
			this->f_label_timer_current_gases->Name = L"f_label_timer_current_gases";
			this->f_label_timer_current_gases->Size = System::Drawing::Size(40, 23);
			this->f_label_timer_current_gases->TabIndex = 13;
			this->f_label_timer_current_gases->Text = L"214";
			// 
			// f_label_timer_start_gases
			// 
			this->f_label_timer_start_gases->AutoSize = true;
			this->f_label_timer_start_gases->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_label_timer_start_gases->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->f_label_timer_start_gases->Location = System::Drawing::Point(145, 83);
			this->f_label_timer_start_gases->Name = L"f_label_timer_start_gases";
			this->f_label_timer_start_gases->Size = System::Drawing::Size(40, 23);
			this->f_label_timer_start_gases->TabIndex = 12;
			this->f_label_timer_start_gases->Text = L"320";
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
			this->label27->Text = L"Напуск газов:";
			// 
			// f_label_timer_current_pump
			// 
			this->f_label_timer_current_pump->AutoSize = true;
			this->f_label_timer_current_pump->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_label_timer_current_pump->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->f_label_timer_current_pump->Location = System::Drawing::Point(197, 55);
			this->f_label_timer_current_pump->Name = L"f_label_timer_current_pump";
			this->f_label_timer_current_pump->Size = System::Drawing::Size(40, 23);
			this->f_label_timer_current_pump->TabIndex = 10;
			this->f_label_timer_current_pump->Text = L"234";
			// 
			// f_label_timer_current_start_pump
			// 
			this->f_label_timer_current_start_pump->AutoSize = true;
			this->f_label_timer_current_start_pump->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->f_label_timer_current_start_pump->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->f_label_timer_current_start_pump->Location = System::Drawing::Point(197, 27);
			this->f_label_timer_current_start_pump->Name = L"f_label_timer_current_start_pump";
			this->f_label_timer_current_start_pump->Size = System::Drawing::Size(20, 23);
			this->f_label_timer_current_start_pump->TabIndex = 9;
			this->f_label_timer_current_start_pump->Text = L"0";
			// 
			// f_label_timer_time_pump
			// 
			this->f_label_timer_time_pump->AutoSize = true;
			this->f_label_timer_time_pump->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_label_timer_time_pump->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->f_label_timer_time_pump->Location = System::Drawing::Point(246, 55);
			this->f_label_timer_time_pump->Name = L"f_label_timer_time_pump";
			this->f_label_timer_time_pump->Size = System::Drawing::Size(55, 23);
			this->f_label_timer_time_pump->TabIndex = 8;
			this->f_label_timer_time_pump->Text = L"12:59";
			// 
			// f_label_timer_start_pump
			// 
			this->f_label_timer_start_pump->AutoSize = true;
			this->f_label_timer_start_pump->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_label_timer_start_pump->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->f_label_timer_start_pump->Location = System::Drawing::Point(145, 55);
			this->f_label_timer_start_pump->Name = L"f_label_timer_start_pump";
			this->f_label_timer_start_pump->Size = System::Drawing::Size(40, 23);
			this->f_label_timer_start_pump->TabIndex = 7;
			this->f_label_timer_start_pump->Text = L"300";
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
			this->label22->Text = L"Откачка:";
			// 
			// f_label_timer_start_start_pump
			// 
			this->f_label_timer_start_start_pump->AutoSize = true;
			this->f_label_timer_start_start_pump->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_label_timer_start_start_pump->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->f_label_timer_start_start_pump->Location = System::Drawing::Point(145, 27);
			this->f_label_timer_start_start_pump->Name = L"f_label_timer_start_start_pump";
			this->f_label_timer_start_start_pump->Size = System::Drawing::Size(20, 23);
			this->f_label_timer_start_start_pump->TabIndex = 5;
			this->f_label_timer_start_start_pump->Text = L"0";
			// 
			// f_label_timer_time_start_pump
			// 
			this->f_label_timer_time_start_pump->AutoSize = true;
			this->f_label_timer_time_start_pump->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_label_timer_time_start_pump->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->f_label_timer_time_start_pump->Location = System::Drawing::Point(246, 27);
			this->f_label_timer_time_start_pump->Name = L"f_label_timer_time_start_pump";
			this->f_label_timer_time_start_pump->Size = System::Drawing::Size(55, 23);
			this->f_label_timer_time_start_pump->TabIndex = 4;
			this->f_label_timer_time_start_pump->Text = L"12:52";
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
			this->label19->Text = L"Старт откачки:";
			// 
			// data_label
			// 
			this->data_label->AutoSize = true;
			this->data_label->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->data_label->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->data_label->Location = System::Drawing::Point(982, 1);
			this->data_label->Name = L"data_label";
			this->data_label->Size = System::Drawing::Size(20, 23);
			this->data_label->TabIndex = 23;
			this->data_label->Text = L"0";
			// 
			// groupBox8
			// 
			this->groupBox8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->groupBox8->Controls->Add(this->tabControl2);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox8->ForeColor = System::Drawing::Color::RoyalBlue;
			this->groupBox8->Location = System::Drawing::Point(0, 0);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(436, 201);
			this->groupBox8->TabIndex = 20;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Источник тока";
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage3);
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabControl2->Location = System::Drawing::Point(18, 29);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(406, 166);
			this->tabControl2->TabIndex = 24;
			this->tabControl2->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::tabControl2_SelectedIndexChanged);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label29);
			this->tabPage3->Controls->Add(this->button8);
			this->tabPage3->Controls->Add(this->button7);
			this->tabPage3->Controls->Add(this->f_textbox_current_ma);
			this->tabPage3->Controls->Add(this->label56);
			this->tabPage3->Controls->Add(this->f_textbox_voltage_V);
			this->tabPage3->Controls->Add(this->textBox3);
			this->tabPage3->Controls->Add(this->label15);
			this->tabPage3->Controls->Add(this->label54);
			this->tabPage3->Controls->Add(this->label6);
			this->tabPage3->Controls->Add(this->textBox6);
			this->tabPage3->Location = System::Drawing::Point(4, 28);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(398, 134);
			this->tabPage3->TabIndex = 0;
			this->tabPage3->Text = L"Термическое испарение";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::White;
			this->label29->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label29->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label29->Location = System::Drawing::Point(276, 94);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(107, 36);
			this->label29->TabIndex = 35;
			this->label29->Text = L"  Режим TPlB: \r\nНизковольтный";
			this->label29->Click += gcnew System::EventHandler(this, &MainForm::label29_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button8->Enabled = false;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::Color::Crimson;
			this->button8->Location = System::Drawing::Point(15, 94);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(246, 29);
			this->button8->TabIndex = 56;
			this->button8->Text = L"Включить источник тока";
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button7->Enabled = false;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::Color::Crimson;
			this->button7->Location = System::Drawing::Point(267, 20);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(112, 65);
			this->button7->TabIndex = 42;
			this->button7->Text = L"Установить\r\n значение";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MainForm::button7_Click);
			// 
			// f_textbox_current_ma
			// 
			this->f_textbox_current_ma->AutoSize = true;
			this->f_textbox_current_ma->Font = (gcnew System::Drawing::Font(L"Calibri", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_textbox_current_ma->ForeColor = System::Drawing::Color::Crimson;
			this->f_textbox_current_ma->Location = System::Drawing::Point(142, 59);
			this->f_textbox_current_ma->Name = L"f_textbox_current_ma";
			this->f_textbox_current_ma->Size = System::Drawing::Size(46, 22);
			this->f_textbox_current_ma->TabIndex = 45;
			this->f_textbox_current_ma->Text = L"9000";
			this->f_textbox_current_ma->Click += gcnew System::EventHandler(this, &MainForm::f_textbox_current_ma_Click);
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Font = (gcnew System::Drawing::Font(L"Calibri", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label56->ForeColor = System::Drawing::Color::MediumBlue;
			this->label56->Location = System::Drawing::Point(11, 27);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(125, 22);
			this->label56->TabIndex = 11;
			this->label56->Text = L"Напряжение, В";
			this->label56->Click += gcnew System::EventHandler(this, &MainForm::label56_Click);
			// 
			// f_textbox_voltage_V
			// 
			this->f_textbox_voltage_V->AutoSize = true;
			this->f_textbox_voltage_V->Font = (gcnew System::Drawing::Font(L"Calibri", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_textbox_voltage_V->ForeColor = System::Drawing::Color::DarkBlue;
			this->f_textbox_voltage_V->Location = System::Drawing::Point(142, 27);
			this->f_textbox_voltage_V->Name = L"f_textbox_voltage_V";
			this->f_textbox_voltage_V->Size = System::Drawing::Size(46, 22);
			this->f_textbox_voltage_V->TabIndex = 42;
			this->f_textbox_voltage_V->Text = L"1200";
			this->f_textbox_voltage_V->Click += gcnew System::EventHandler(this, &MainForm::f_textbox_voltage_V_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(198, 55);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(63, 29);
			this->textBox3->TabIndex = 17;
			this->textBox3->Text = L"10000";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox3_TextChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(214, 4);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(30, 15);
			this->label15->TabIndex = 44;
			this->label15->Text = L"Зад.";
			this->label15->Click += gcnew System::EventHandler(this, &MainForm::label15_Click);
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Font = (gcnew System::Drawing::Font(L"Calibri", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label54->ForeColor = System::Drawing::Color::Crimson;
			this->label54->Location = System::Drawing::Point(11, 59);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(111, 21);
			this->label54->TabIndex = 22;
			this->label54->Text = L"Сила тока, мА";
			this->label54->Click += gcnew System::EventHandler(this, &MainForm::label54_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(147, 4);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(36, 15);
			this->label6->TabIndex = 43;
			this->label6->Text = L"Факт.";
			this->label6->Click += gcnew System::EventHandler(this, &MainForm::label6_Click);
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(198, 21);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(63, 29);
			this->textBox6->TabIndex = 28;
			this->textBox6->Text = L"10000";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox6_TextChanged);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->label31);
			this->tabPage4->Controls->Add(this->button3);
			this->tabPage4->Controls->Add(this->button4);
			this->tabPage4->Controls->Add(this->label21);
			this->tabPage4->Controls->Add(this->label23);
			this->tabPage4->Controls->Add(this->label24);
			this->tabPage4->Controls->Add(this->textBox4);
			this->tabPage4->Controls->Add(this->label25);
			this->tabPage4->Controls->Add(this->label26);
			this->tabPage4->Controls->Add(this->label28);
			this->tabPage4->Controls->Add(this->textBox5);
			this->tabPage4->Location = System::Drawing::Point(4, 28);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(398, 134);
			this->tabPage4->TabIndex = 1;
			this->tabPage4->Text = L"Магнетронное распыление";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::Color::White;
			this->label31->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label31->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label31->Location = System::Drawing::Point(276, 94);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(116, 36);
			this->label31->TabIndex = 57;
			this->label31->Text = L"  Режим TPlB: \r\nВысоковольтный";
			this->label31->Visible = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button3->Enabled = false;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::Crimson;
			this->button3->Location = System::Drawing::Point(267, 20);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 64);
			this->button3->TabIndex = 56;
			this->button3->Text = L"Установить\r\n значение";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button4->Enabled = false;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::Crimson;
			this->button4->Location = System::Drawing::Point(15, 94);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(246, 29);
			this->button4->TabIndex = 55;
			this->button4->Text = L"Включить источник тока";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Calibri", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->ForeColor = System::Drawing::Color::Crimson;
			this->label21->Location = System::Drawing::Point(142, 59);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(46, 22);
			this->label21->TabIndex = 54;
			this->label21->Text = L"9000";
			this->label21->Click += gcnew System::EventHandler(this, &MainForm::label21_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Calibri", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->ForeColor = System::Drawing::Color::MediumBlue;
			this->label23->Location = System::Drawing::Point(11, 27);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(125, 22);
			this->label23->TabIndex = 46;
			this->label23->Text = L"Напряжение, В";
			this->label23->Click += gcnew System::EventHandler(this, &MainForm::label23_Click);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Calibri", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->ForeColor = System::Drawing::Color::DarkBlue;
			this->label24->Location = System::Drawing::Point(142, 27);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(46, 22);
			this->label24->TabIndex = 51;
			this->label24->Text = L"1200";
			this->label24->Click += gcnew System::EventHandler(this, &MainForm::label24_Click);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(198, 55);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(63, 29);
			this->textBox4->TabIndex = 47;
			this->textBox4->Text = L"10000";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox4_TextChanged);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->ForeColor = System::Drawing::Color::Black;
			this->label25->Location = System::Drawing::Point(214, 4);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(30, 15);
			this->label25->TabIndex = 53;
			this->label25->Text = L"Зад.";
			this->label25->Click += gcnew System::EventHandler(this, &MainForm::label25_Click);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Calibri", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->ForeColor = System::Drawing::Color::Crimson;
			this->label26->Location = System::Drawing::Point(11, 59);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(111, 21);
			this->label26->TabIndex = 48;
			this->label26->Text = L"Сила тока, мА";
			this->label26->Click += gcnew System::EventHandler(this, &MainForm::label26_Click);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label28->ForeColor = System::Drawing::Color::Black;
			this->label28->Location = System::Drawing::Point(147, 4);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(36, 15);
			this->label28->TabIndex = 52;
			this->label28->Text = L"Факт.";
			this->label28->Click += gcnew System::EventHandler(this, &MainForm::label28_Click);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(198, 21);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(63, 29);
			this->textBox5->TabIndex = 49;
			this->textBox5->Text = L"10000";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox5_TextChanged);
			// 
			// right_panel
			// 
			this->right_panel->BackColor = System::Drawing::Color::White;
			this->right_panel->Controls->Add(this->groupBox_flap);
			this->right_panel->Controls->Add(this->right_down_panel);
			this->right_panel->Controls->Add(this->groupBox3);
			this->right_panel->Controls->Add(this->groupBox2);
			this->right_panel->Controls->Add(this->groupBox1);
			this->right_panel->Dock = System::Windows::Forms::DockStyle::Right;
			this->right_panel->Location = System::Drawing::Point(753, 24);
			this->right_panel->Name = L"right_panel";
			this->right_panel->Size = System::Drawing::Size(251, 705);
			this->right_panel->TabIndex = 8;
			this->right_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel2_Paint);
			// 
			// groupBox_flap
			// 
			this->groupBox_flap->Controls->Add(this->label17);
			this->groupBox_flap->Controls->Add(this->f_button_auto_start_flap);
			this->groupBox_flap->Controls->Add(this->I_label_set_time_flap);
			this->groupBox_flap->Controls->Add(this->f_textBox_set_time_flap);
			this->groupBox_flap->Controls->Add(this->progressBar_flap);
			this->groupBox_flap->Controls->Add(this->subgroupBox_mode);
			this->groupBox_flap->Controls->Add(this->f_button_manual_close_flap);
			this->groupBox_flap->Controls->Add(this->f_button_manual_open_flap);
			this->groupBox_flap->Controls->Add(this->i_label_flap_status);
			this->groupBox_flap->Controls->Add(this->f_label_flap_status);
			this->groupBox_flap->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox_flap->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox_flap->ForeColor = System::Drawing::Color::RoyalBlue;
			this->groupBox_flap->Location = System::Drawing::Point(11, 410);
			this->groupBox_flap->Name = L"groupBox_flap";
			this->groupBox_flap->Size = System::Drawing::Size(230, 170);
			this->groupBox_flap->TabIndex = 19;
			this->groupBox_flap->TabStop = false;
			this->groupBox_flap->Text = L"Управление заслонкой";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::White;
			this->label17->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label17->Location = System::Drawing::Point(97, 187);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(130, 19);
			this->label17->TabIndex = 24;
			this->label17->Text = L"Ожидание старта";
			// 
			// f_button_auto_start_flap
			// 
			this->f_button_auto_start_flap->BackColor = System::Drawing::SystemColors::ControlLight;
			this->f_button_auto_start_flap->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->f_button_auto_start_flap->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_button_auto_start_flap->ForeColor = System::Drawing::Color::Crimson;
			this->f_button_auto_start_flap->Location = System::Drawing::Point(11, 182);
			this->f_button_auto_start_flap->Name = L"f_button_auto_start_flap";
			this->f_button_auto_start_flap->Size = System::Drawing::Size(83, 29);
			this->f_button_auto_start_flap->TabIndex = 34;
			this->f_button_auto_start_flap->Text = L"Начать";
			this->f_button_auto_start_flap->UseVisualStyleBackColor = false;
			// 
			// I_label_set_time_flap
			// 
			this->I_label_set_time_flap->AutoSize = true;
			this->I_label_set_time_flap->BackColor = System::Drawing::Color::White;
			this->I_label_set_time_flap->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->I_label_set_time_flap->ForeColor = System::Drawing::Color::RoyalBlue;
			this->I_label_set_time_flap->Location = System::Drawing::Point(11, 130);
			this->I_label_set_time_flap->Name = L"I_label_set_time_flap";
			this->I_label_set_time_flap->Size = System::Drawing::Size(132, 19);
			this->I_label_set_time_flap->TabIndex = 33;
			this->I_label_set_time_flap->Text = L"Установить время";
			this->I_label_set_time_flap->Visible = false;
			// 
			// f_textBox_set_time_flap
			// 
			this->f_textBox_set_time_flap->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_textBox_set_time_flap->Location = System::Drawing::Point(156, 127);
			this->f_textBox_set_time_flap->Name = L"f_textBox_set_time_flap";
			this->f_textBox_set_time_flap->Size = System::Drawing::Size(71, 27);
			this->f_textBox_set_time_flap->TabIndex = 19;
			this->f_textBox_set_time_flap->Text = L"100";
			this->f_textBox_set_time_flap->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->f_textBox_set_time_flap->Visible = false;
			// 
			// progressBar_flap
			// 
			this->progressBar_flap->Location = System::Drawing::Point(11, 155);
			this->progressBar_flap->Name = L"progressBar_flap";
			this->progressBar_flap->Size = System::Drawing::Size(216, 24);
			this->progressBar_flap->TabIndex = 11;
			this->progressBar_flap->Visible = false;
			// 
			// subgroupBox_mode
			// 
			this->subgroupBox_mode->Controls->Add(this->radioButton_flap_auto_mode);
			this->subgroupBox_mode->Controls->Add(this->radioButton_flap_manual_mode);
			this->subgroupBox_mode->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->subgroupBox_mode->ForeColor = System::Drawing::Color::Black;
			this->subgroupBox_mode->Location = System::Drawing::Point(6, 63);
			this->subgroupBox_mode->Name = L"subgroupBox_mode";
			this->subgroupBox_mode->Size = System::Drawing::Size(212, 63);
			this->subgroupBox_mode->TabIndex = 16;
			this->subgroupBox_mode->TabStop = false;
			this->subgroupBox_mode->Text = L"Режим работы";
			// 
			// radioButton_flap_auto_mode
			// 
			this->radioButton_flap_auto_mode->AutoSize = true;
			this->radioButton_flap_auto_mode->ForeColor = System::Drawing::Color::Black;
			this->radioButton_flap_auto_mode->Location = System::Drawing::Point(10, 37);
			this->radioButton_flap_auto_mode->Name = L"radioButton_flap_auto_mode";
			this->radioButton_flap_auto_mode->Size = System::Drawing::Size(140, 23);
			this->radioButton_flap_auto_mode->TabIndex = 1;
			this->radioButton_flap_auto_mode->Text = L"Автоматический";
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
			this->radioButton_flap_manual_mode->Text = L"Ручной";
			this->radioButton_flap_manual_mode->UseVisualStyleBackColor = true;
			this->radioButton_flap_manual_mode->CheckedChanged += gcnew System::EventHandler(this, &MainForm::radioButton_flap_manual_mode_CheckedChanged);
			// 
			// f_button_manual_close_flap
			// 
			this->f_button_manual_close_flap->BackColor = System::Drawing::SystemColors::ControlLight;
			this->f_button_manual_close_flap->Enabled = false;
			this->f_button_manual_close_flap->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->f_button_manual_close_flap->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_button_manual_close_flap->Location = System::Drawing::Point(119, 136);
			this->f_button_manual_close_flap->Name = L"f_button_manual_close_flap";
			this->f_button_manual_close_flap->Size = System::Drawing::Size(108, 29);
			this->f_button_manual_close_flap->TabIndex = 15;
			this->f_button_manual_close_flap->Text = L"Закрыть";
			this->f_button_manual_close_flap->UseVisualStyleBackColor = false;
			// 
			// f_button_manual_open_flap
			// 
			this->f_button_manual_open_flap->BackColor = System::Drawing::SystemColors::ControlLight;
			this->f_button_manual_open_flap->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->f_button_manual_open_flap->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_button_manual_open_flap->ForeColor = System::Drawing::Color::Crimson;
			this->f_button_manual_open_flap->Location = System::Drawing::Point(11, 136);
			this->f_button_manual_open_flap->Name = L"f_button_manual_open_flap";
			this->f_button_manual_open_flap->Size = System::Drawing::Size(104, 29);
			this->f_button_manual_open_flap->TabIndex = 11;
			this->f_button_manual_open_flap->Text = L"Открыть";
			this->f_button_manual_open_flap->UseVisualStyleBackColor = false;
			// 
			// i_label_flap_status
			// 
			this->i_label_flap_status->AutoSize = true;
			this->i_label_flap_status->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->i_label_flap_status->ForeColor = System::Drawing::Color::Black;
			this->i_label_flap_status->Location = System::Drawing::Point(74, 46);
			this->i_label_flap_status->Name = L"i_label_flap_status";
			this->i_label_flap_status->Size = System::Drawing::Size(78, 15);
			this->i_label_flap_status->TabIndex = 13;
			this->i_label_flap_status->Text = L"(положение)";
			// 
			// f_label_flap_status
			// 
			this->f_label_flap_status->AutoSize = true;
			this->f_label_flap_status->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_label_flap_status->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->f_label_flap_status->Location = System::Drawing::Point(27, 20);
			this->f_label_flap_status->Name = L"f_label_flap_status";
			this->f_label_flap_status->Size = System::Drawing::Size(177, 26);
			this->f_label_flap_status->TabIndex = 12;
			this->f_label_flap_status->Text = L"Заслонка: открыта";
			// 
			// right_down_panel
			// 
			this->right_down_panel->Controls->Add(this->f_stop_button);
			this->right_down_panel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->right_down_panel->Location = System::Drawing::Point(0, 496);
			this->right_down_panel->Name = L"right_down_panel";
			this->right_down_panel->Size = System::Drawing::Size(251, 209);
			this->right_down_panel->TabIndex = 12;
			// 
			// f_stop_button
			// 
			this->f_stop_button->BackColor = System::Drawing::Color::Crimson;
			this->f_stop_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_stop_button->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->f_stop_button->Location = System::Drawing::Point(11, 149);
			this->f_stop_button->Name = L"f_stop_button";
			this->f_stop_button->Size = System::Drawing::Size(234, 42);
			this->f_stop_button->TabIndex = 0;
			this->f_stop_button->Text = L"STOP";
			this->f_stop_button->UseVisualStyleBackColor = false;
			this->f_stop_button->Click += gcnew System::EventHandler(this, &MainForm::f_stop_button_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button5);
			this->groupBox3->Controls->Add(this->textBox1);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->f_button_on_off_heat);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->f_label_temp_status_deg);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->ForeColor = System::Drawing::Color::RoyalBlue;
			this->groupBox3->Location = System::Drawing::Point(11, 250);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(230, 154);
			this->groupBox3->TabIndex = 11;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Температура подложки";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(81, 80);
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
			this->textBox1->Location = System::Drawing::Point(12, 80);
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
			this->label14->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label14->Location = System::Drawing::Point(35, 58);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(145, 19);
			this->label14->TabIndex = 16;
			this->label14->Text = L"Задать температуру";
			// 
			// f_button_on_off_heat
			// 
			this->f_button_on_off_heat->BackColor = System::Drawing::SystemColors::ControlLight;
			this->f_button_on_off_heat->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->f_button_on_off_heat->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_button_on_off_heat->ForeColor = System::Drawing::Color::Crimson;
			this->f_button_on_off_heat->Location = System::Drawing::Point(12, 115);
			this->f_button_on_off_heat->Name = L"f_button_on_off_heat";
			this->f_button_on_off_heat->Size = System::Drawing::Size(206, 29);
			this->f_button_on_off_heat->TabIndex = 11;
			this->f_button_on_off_heat->Text = L"Включить нагрев";
			this->f_button_on_off_heat->UseVisualStyleBackColor = false;
			this->f_button_on_off_heat->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(63, 42);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(92, 15);
			this->label13->TabIndex = 13;
			this->label13->Text = L"(показание ДТ)";
			// 
			// f_label_temp_status_deg
			// 
			this->f_label_temp_status_deg->AutoSize = true;
			this->f_label_temp_status_deg->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_label_temp_status_deg->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->f_label_temp_status_deg->Location = System::Drawing::Point(97, 20);
			this->f_label_temp_status_deg->Name = L"f_label_temp_status_deg";
			this->f_label_temp_status_deg->Size = System::Drawing::Size(52, 26);
			this->f_label_temp_status_deg->TabIndex = 12;
			this->f_label_temp_status_deg->Text = L"720°";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label11->Location = System::Drawing::Point(70, 20);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(32, 26);
			this->label11->TabIndex = 11;
			this->label11->Text = L"T=";
			this->label11->Click += gcnew System::EventHandler(this, &MainForm::label11_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label20);
			this->groupBox2->Controls->Add(this->label18);
			this->groupBox2->Controls->Add(this->f_button_stop_pump);
			this->groupBox2->Controls->Add(this->f_button_start_pump);
			this->groupBox2->Controls->Add(this->f_label_trubo_percent);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->progressBar_Turbopump);
			this->groupBox2->Controls->Add(this->f_label_turbopump_status);
			this->groupBox2->Controls->Add(this->f_label_backpump_status);
			this->groupBox2->Controls->Add(this->i_label_turbopump_status);
			this->groupBox2->Controls->Add(this->i_label_backpump_status);
			this->groupBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->ForeColor = System::Drawing::Color::RoyalBlue;
			this->groupBox2->Location = System::Drawing::Point(11, 88);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(230, 159);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Откачка";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MainForm::groupBox2_Enter);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label20->Location = System::Drawing::Point(7, 70);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(47, 23);
			this->label20->TabIndex = 20;
			this->label20->Text = L"ТМН";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::White;
			this->label18->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label18->Location = System::Drawing::Point(35, 97);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(159, 19);
			this->label18->TabIndex = 19;
			this->label18->Text = L"Управление системой";
			// 
			// f_button_stop_pump
			// 
			this->f_button_stop_pump->BackColor = System::Drawing::SystemColors::ControlLight;
			this->f_button_stop_pump->Enabled = false;
			this->f_button_stop_pump->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->f_button_stop_pump->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_button_stop_pump->Location = System::Drawing::Point(118, 120);
			this->f_button_stop_pump->Name = L"f_button_stop_pump";
			this->f_button_stop_pump->Size = System::Drawing::Size(105, 31);
			this->f_button_stop_pump->TabIndex = 10;
			this->f_button_stop_pump->Text = L"Стоп";
			this->f_button_stop_pump->UseVisualStyleBackColor = false;
			this->f_button_stop_pump->Click += gcnew System::EventHandler(this, &MainForm::f_button_stop_pump_Click);
			// 
			// f_button_start_pump
			// 
			this->f_button_start_pump->BackColor = System::Drawing::SystemColors::ControlLight;
			this->f_button_start_pump->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->f_button_start_pump->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_button_start_pump->Location = System::Drawing::Point(6, 120);
			this->f_button_start_pump->Name = L"f_button_start_pump";
			this->f_button_start_pump->Size = System::Drawing::Size(101, 31);
			this->f_button_start_pump->TabIndex = 9;
			this->f_button_start_pump->Text = L"Откачка";
			this->f_button_start_pump->UseVisualStyleBackColor = false;
			this->f_button_start_pump->Click += gcnew System::EventHandler(this, &MainForm::f_button_start_pump_Click);
			// 
			// f_label_trubo_percent
			// 
			this->f_label_trubo_percent->AutoSize = true;
			this->f_label_trubo_percent->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_label_trubo_percent->ForeColor = System::Drawing::Color::RoyalBlue;
			this->f_label_trubo_percent->Location = System::Drawing::Point(175, 73);
			this->f_label_trubo_percent->Name = L"f_label_trubo_percent";
			this->f_label_trubo_percent->Size = System::Drawing::Size(33, 19);
			this->f_label_trubo_percent->TabIndex = 8;
			this->f_label_trubo_percent->Text = L"100";
			this->f_label_trubo_percent->Click += gcnew System::EventHandler(this, &MainForm::f_label_trubo_percent_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label10->Location = System::Drawing::Point(205, 73);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(20, 19);
			this->label10->TabIndex = 7;
			this->label10->Text = L"%";
			this->label10->Click += gcnew System::EventHandler(this, &MainForm::label10_Click);
			// 
			// progressBar_Turbopump
			// 
			this->progressBar_Turbopump->Location = System::Drawing::Point(58, 70);
			this->progressBar_Turbopump->Name = L"progressBar_Turbopump";
			this->progressBar_Turbopump->Size = System::Drawing::Size(113, 23);
			this->progressBar_Turbopump->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar_Turbopump->TabIndex = 5;
			this->progressBar_Turbopump->Value = 100;
			// 
			// f_label_turbopump_status
			// 
			this->f_label_turbopump_status->AutoSize = true;
			this->f_label_turbopump_status->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_label_turbopump_status->ForeColor = System::Drawing::Color::SeaGreen;
			this->f_label_turbopump_status->Location = System::Drawing::Point(156, 42);
			this->f_label_turbopump_status->Name = L"f_label_turbopump_status";
			this->f_label_turbopump_status->Size = System::Drawing::Size(36, 23);
			this->f_label_turbopump_status->TabIndex = 4;
			this->f_label_turbopump_status->Text = L"ON";
			// 
			// f_label_backpump_status
			// 
			this->f_label_backpump_status->AutoSize = true;
			this->f_label_backpump_status->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_label_backpump_status->ForeColor = System::Drawing::Color::SeaGreen;
			this->f_label_backpump_status->Location = System::Drawing::Point(156, 22);
			this->f_label_backpump_status->Name = L"f_label_backpump_status";
			this->f_label_backpump_status->Size = System::Drawing::Size(36, 23);
			this->f_label_backpump_status->TabIndex = 3;
			this->f_label_backpump_status->Text = L"ON";
			// 
			// i_label_turbopump_status
			// 
			this->i_label_turbopump_status->AutoSize = true;
			this->i_label_turbopump_status->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->i_label_turbopump_status->ForeColor = System::Drawing::Color::SeaGreen;
			this->i_label_turbopump_status->Location = System::Drawing::Point(14, 42);
			this->i_label_turbopump_status->Name = L"i_label_turbopump_status";
			this->i_label_turbopump_status->Size = System::Drawing::Size(104, 23);
			this->i_label_turbopump_status->TabIndex = 2;
			this->i_label_turbopump_status->Text = L"Turbo pump";
			// 
			// i_label_backpump_status
			// 
			this->i_label_backpump_status->AutoSize = true;
			this->i_label_backpump_status->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->i_label_backpump_status->ForeColor = System::Drawing::Color::SeaGreen;
			this->i_label_backpump_status->Location = System::Drawing::Point(14, 22);
			this->i_label_backpump_status->Name = L"i_label_backpump_status";
			this->i_label_backpump_status->Size = System::Drawing::Size(99, 23);
			this->i_label_backpump_status->TabIndex = 0;
			this->i_label_backpump_status->Text = L"Back  pump";
			this->i_label_backpump_status->Click += gcnew System::EventHandler(this, &MainForm::label8_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->f_label_WRG_status);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->f_label_APG_status);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->ForeColor = System::Drawing::Color::RoyalBlue;
			this->groupBox1->Location = System::Drawing::Point(11, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(231, 78);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Давление системы";
			// 
			// f_label_WRG_status
			// 
			this->f_label_WRG_status->AutoSize = true;
			this->f_label_WRG_status->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_label_WRG_status->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->f_label_WRG_status->Location = System::Drawing::Point(87, 45);
			this->f_label_WRG_status->Name = L"f_label_WRG_status";
			this->f_label_WRG_status->Size = System::Drawing::Size(112, 23);
			this->f_label_WRG_status->TabIndex = 3;
			this->f_label_WRG_status->Text = L"5x10+3 mbar";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label3->Location = System::Drawing::Point(18, 45);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 23);
			this->label3->TabIndex = 2;
			this->label3->Text = L"WRG";
			// 
			// f_label_APG_status
			// 
			this->f_label_APG_status->AutoSize = true;
			this->f_label_APG_status->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_label_APG_status->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->f_label_APG_status->Location = System::Drawing::Point(87, 22);
			this->f_label_APG_status->Name = L"f_label_APG_status";
			this->f_label_APG_status->Size = System::Drawing::Size(112, 23);
			this->f_label_APG_status->TabIndex = 1;
			this->f_label_APG_status->Text = L"5x10+3 mbar";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label1->Location = System::Drawing::Point(18, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"APG";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::White;
			this->panel6->Controls->Add(this->groupBox5);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel6->Location = System::Drawing::Point(317, 24);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(436, 109);
			this->panel6->TabIndex = 10;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->picture_not_connection);
			this->groupBox5->Controls->Add(this->f_button_connect_to_PLC);
			this->groupBox5->Controls->Add(this->picture_connection);
			this->groupBox5->Controls->Add(this->i_button_connect_to_PLC);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox5->ForeColor = System::Drawing::Color::RoyalBlue;
			this->groupBox5->Location = System::Drawing::Point(6, 3);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(424, 99);
			this->groupBox5->TabIndex = 13;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Статус соединения";
			// 
			// picture_not_connection
			// 
			this->picture_not_connection->Cursor = System::Windows::Forms::Cursors::Default;
			this->picture_not_connection->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_not_connection.Image")));
			this->picture_not_connection->Location = System::Drawing::Point(12, 25);
			this->picture_not_connection->Name = L"picture_not_connection";
			this->picture_not_connection->Size = System::Drawing::Size(35, 23);
			this->picture_not_connection->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picture_not_connection->TabIndex = 3;
			this->picture_not_connection->TabStop = false;
			this->picture_not_connection->Visible = false;
			// 
			// f_button_connect_to_PLC
			// 
			this->f_button_connect_to_PLC->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->f_button_connect_to_PLC->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_button_connect_to_PLC->ForeColor = System::Drawing::Color::SeaGreen;
			this->f_button_connect_to_PLC->Location = System::Drawing::Point(6, 58);
			this->f_button_connect_to_PLC->Name = L"f_button_connect_to_PLC";
			this->f_button_connect_to_PLC->Size = System::Drawing::Size(265, 31);
			this->f_button_connect_to_PLC->TabIndex = 0;
			this->f_button_connect_to_PLC->Text = L"Соединение с PLC";
			this->f_button_connect_to_PLC->UseVisualStyleBackColor = true;
			this->f_button_connect_to_PLC->Click += gcnew System::EventHandler(this, &MainForm::f_button_connect_to_PLC_Click);
			// 
			// picture_connection
			// 
			this->picture_connection->Cursor = System::Windows::Forms::Cursors::Default;
			this->picture_connection->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_connection.Image")));
			this->picture_connection->Location = System::Drawing::Point(12, 25);
			this->picture_connection->Name = L"picture_connection";
			this->picture_connection->Size = System::Drawing::Size(35, 23);
			this->picture_connection->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picture_connection->TabIndex = 2;
			this->picture_connection->TabStop = false;
			// 
			// i_button_connect_to_PLC
			// 
			this->i_button_connect_to_PLC->AutoSize = true;
			this->i_button_connect_to_PLC->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->i_button_connect_to_PLC->ForeColor = System::Drawing::Color::SeaGreen;
			this->i_button_connect_to_PLC->Location = System::Drawing::Point(47, 27);
			this->i_button_connect_to_PLC->Name = L"i_button_connect_to_PLC";
			this->i_button_connect_to_PLC->Size = System::Drawing::Size(224, 19);
			this->i_button_connect_to_PLC->TabIndex = 1;
			this->i_button_connect_to_PLC->Text = L"Cоединение с PLC установлено";
			// 
			// Timer
			// 
			this->Timer->Tick += gcnew System::EventHandler(this, &MainForm::Timer_Tick);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Controls->Add(this->down_panel);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel4->Location = System::Drawing::Point(317, 489);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(436, 240);
			this->panel4->TabIndex = 9;
			// 
			// down_panel
			// 
			this->down_panel->Controls->Add(this->groupBox8);
			this->down_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->down_panel->Location = System::Drawing::Point(0, 0);
			this->down_panel->Name = L"down_panel";
			this->down_panel->Size = System::Drawing::Size(436, 240);
			this->down_panel->TabIndex = 0;
			this->down_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::down_panel_Paint);
			// 
			// MainForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1004, 729);
			this->Controls->Add(this->data_label);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->right_panel);
			this->Controls->Add(this->left_panel);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->ImeMode = System::Windows::Forms::ImeMode::Katakana;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UVN Control System 2.0 - Автоматическая система управления";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MainForm::MainForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->left_panel->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->left_down_panel->ResumeLayout(false);
			this->left_down_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_recording))->EndInit();
			this->groupbox_butterfly->ResumeLayout(false);
			this->groupbox_butterfly->PerformLayout();
			this->groupBox_time->ResumeLayout(false);
			this->groupBox_time->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->right_panel->ResumeLayout(false);
			this->groupBox_flap->ResumeLayout(false);
			this->groupBox_flap->PerformLayout();
			this->subgroupBox_mode->ResumeLayout(false);
			this->subgroupBox_mode->PerformLayout();
			this->right_down_panel->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_not_connection))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_connection))->EndInit();
			this->panel4->ResumeLayout(false);
			this->down_panel->ResumeLayout(false);
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
private: System::Void f_stop_button_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton_flap_auto_mode_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	
		groupBox_flap->Height = 217;
		f_button_manual_close_flap->Visible = false;
		f_button_manual_open_flap->Visible = false;
		//f_button_auto_mode_flap_start->Visible = true;
		//f_button_auto_mode_flap_stop->Visible = true;
		I_label_set_time_flap->Visible = true;
		progressBar_flap->Visible = true;
		f_textBox_set_time_flap->Visible = true;
	

}
private: System::Void radioButton_flap_manual_mode_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	groupBox_flap->Height = 180;
	f_button_manual_close_flap->Visible = true;
	f_button_manual_open_flap->Visible = true;
	//f_button_auto_mode_flap_start->Visible = false;
	//f_button_auto_mode_flap_stop->Visible = false;
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

	if (f_button_on_off_heat->Text == "Отключить нагрев") {

		f_button_on_off_heat->Text = "Включить нагрев";
		f_button_on_off_heat->ForeColor = System::Drawing::Color::Crimson;
	}
	
	else if (f_button_on_off_heat->Text == "Включить нагрев") {

		f_button_on_off_heat->Text = "Отключить нагрев";
		f_button_on_off_heat->ForeColor = System::Drawing::Color::Navy;
	}

	
	

}
private: System::Void f_button_connect_to_PLC_Click(System::Object^ sender, System::EventArgs^ e) {

	f_button_connect_to_PLC->Enabled = false;
	picture_connection->Visible = true;
	picture_not_connection->Visible = false;
	f_button_connect_to_PLC->Enabled = false;
	i_button_connect_to_PLC->Text = "Соединение с PLC установлено";
	i_button_connect_to_PLC->ForeColor = System::Drawing::Color::SeaGreen;
	MainForm_unblock();
	start_timer();
}
private: System::Void Timer_Tick(System::Object^ sender, System::EventArgs^ e) {

	data_label->Text = work_time.ToString();
	work_time++;

}
private: System::Void label36_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void splitContainer1_Panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void splitContainer1_Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void f_label_recording_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox_recording_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void f_label_trubo_percent_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabControl2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label56_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void f_textbox_voltage_V_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void f_textbox_current_ma_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label54_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label24_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label28_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label25_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label21_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label26_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label29_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void down_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void f_button_start_stop_PSV1_Click(System::Object^ sender, System::EventArgs^ e) {


	if (f_button_start_stop_PSV1->Text=="Включить PSV1") {
	
		

		f_button_start_stop_PSV1->Text = "Выключить PSV1";
		f_button_start_stop_PSV1->ForeColor = System::Drawing::Color::Crimson;
		f_label_PSV1_status_mV->ForeColor = System::Drawing::Color::Crimson;

		f_button_PSV1_p30mv->Enabled = true;
		f_button_PSV1_m30mv->Enabled = true;

		//добавить функцию включения дискретного управ на ПЛК
		currentData->set_PSV1 = 1800;
		f_label_PSV1_status_mV->Text = currentData->set_PSV1.ToString();

	
	}

	else if (f_button_start_stop_PSV1->Text == "Выключить PSV1") {

		f_button_start_stop_PSV1->Text = "Включить PSV1";
		f_button_start_stop_PSV1->ForeColor = System::Drawing::Color::RoyalBlue;

		f_button_PSV1_p30mv->Enabled = false;
		f_button_PSV1_m30mv->Enabled = false;

		//добавить функцию включения дискретного управ на ПЛК
		currentData->set_PSV1 = 0;
		f_label_PSV1_status_mV->Text = currentData->set_PSV1.ToString();

	}


	
	

}
private: System::Void f_button_PSV1_p30mv_Click(System::Object^ sender, System::EventArgs^ e) {

	currentData->set_PSV1 += 30;
	f_label_PSV1_status_mV->Text = currentData->set_PSV1.ToString();
}	
private: System::Void f_button_PSV1_m30mv_Click(System::Object^ sender, System::EventArgs^ e) {

	currentData->set_PSV1 -= 30;
	f_label_PSV1_status_mV->Text = currentData->set_PSV1.ToString();
}
private: System::Void f_button_start_stop_PSV2_Click(System::Object^ sender, System::EventArgs^ e) {


	if (f_button_start_stop_PSV2->Text == "Включить PSV2") {



		f_button_start_stop_PSV2->Text = "Выключить PSV2";
		f_button_start_stop_PSV2->ForeColor = System::Drawing::Color::Crimson;
		f_label_PSV2_status_mV->ForeColor = System::Drawing::Color::Crimson;

		f_button_PSV2_p30mv->Enabled = true;
		f_button_PSV2_m30mv->Enabled = true;

		//добавить функцию включения дискретного управ на ПЛК
		currentData->set_PSV2 = 1800;
		f_label_PSV2_status_mV->Text = currentData->set_PSV2.ToString();


	}

	else if (f_button_start_stop_PSV2->Text == "Выключить PSV2") {

		f_button_start_stop_PSV2->Text = "Включить PSV2";
		f_button_start_stop_PSV2->ForeColor = System::Drawing::Color::RoyalBlue;

		f_button_PSV2_p30mv->Enabled = false;
		f_button_PSV2_m30mv->Enabled = false;

		//добавить функцию включения дискретного управ на ПЛК
		currentData->set_PSV2 = 0;
		f_label_PSV2_status_mV->Text = currentData->set_PSV2.ToString();

	}

}
private: System::Void f_button_PSV2_p30mv_Click(System::Object^ sender, System::EventArgs^ e) {

	currentData->set_PSV2 += 30;
	f_label_PSV2_status_mV->Text = currentData->set_PSV2.ToString();
}
private: System::Void f_button_PSV2_m30mv_Click(System::Object^ sender, System::EventArgs^ e) {

	currentData->set_PSV2 -= 30;
	f_label_PSV2_status_mV->Text = currentData->set_PSV2.ToString();
}
private: System::Void f_button_start_pump_Click(System::Object^ sender, System::EventArgs^ e) {

	f_button_stop_pump->Enabled = true;
	f_button_start_pump->Enabled = false;
}
private: System::Void f_button_stop_pump_Click(System::Object^ sender, System::EventArgs^ e) {

	f_button_start_pump->Enabled = true;
	f_button_stop_pump->Enabled = false;

}
};
}
