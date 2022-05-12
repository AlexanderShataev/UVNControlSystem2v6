#pragma once
#include "dataPLC.h"
#include "windows.h"
#include "accounts.h"
#include "ModbusForm.h"
#include "PIDForm.h"

namespace UVNControlSystem2v6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Drawing;
	using namespace EasyModbus;
	using namespace System::Globalization;
	using namespace Microsoft::Office::Interop::Excel;





	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	

	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:

		//users
		accounts^ user = gcnew accounts();

		ModbusClient^ ModbusPLC = gcnew ModbusClient();

		bool status_block_form=false; //лог.переменная  1 -- окно заблокировано, 0 -- незаблокировано//


		// Обмен с ПЛК 
		dataPLC^ currentData = gcnew dataPLC();

		ModbusForm^ modbusform = gcnew ModbusForm();

		bool modbusform_open_status = false; // лог. переменная false -- modbusform закрыта, true -- modbus form открыта//

		bool modbus_connecting_status = false; // лог. переменная false -- соединение нет, true --соединение есть//

		String^ ModbusIPAdress;
		int	ModbusPort;

		//ПИД-закон

		PIDForm^ pidform = gcnew PIDForm();

		//Обработка данных в файле Excel

		Microsoft::Office::Interop::Excel::Application^ XL = gcnew Microsoft::Office::Interop::Excel::ApplicationClass();

		/*
		
		PrA->Range["A1", umolch]->Value2 = "test1"; // Записывает в ячейку A1 слово "test1" 
	PrA->Range["В1", umolch]->Value2 = 1; // Записывает в ячейку A1 цифру 1
		
		*/


		//TPlB
		bool magnentron_mode=false;
		bool termo_mode = false;


		// auto mode flap
		bool flap_auto_mode;	// лог. 1 - включен автоматический мод, 0 -- ручной мод
		int flap_auto_time = 0; // так таймера автоматического режима открытия/закрытия заслонки
		int set_flap_auto_time;
		double flap_progress = 0;
		bool flap_open = false;


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
	private: System::Windows::Forms::Label^ i_label_set_butterfly;
	private: System::Windows::Forms::Button^ f_button_set_butterfly;
	private: System::Windows::Forms::TextBox^ f_textbox_butterfly_pos;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ f_label_batterfly_status;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ f_button_set_TPlB_t;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ down_panel;
	private: System::Windows::Forms::Label^ f_textbox_termo_current_ma;
	private: System::Windows::Forms::Label^ f_textbox_termo_voltage_V;
	private: System::Windows::Forms::Button^ f_button_auto_start_flap;
	private: System::Windows::Forms::Label^ f_label_flap_auto_info;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TabControl^ tabpage_TPlB;
	private: System::Windows::Forms::TabPage^ tabpage_TPlB_Termo;
	private: System::Windows::Forms::TabPage^ tabpage_TPlB_Magnetron;
	private: System::Windows::Forms::Label^ f_textbox_magnetron_current_ma;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ f_textbox_magnetron_voltage_V;
	private: System::Windows::Forms::TextBox^ f_textbox_set_I_M;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::TextBox^ f_textbox_set_U_M;
	private: System::Windows::Forms::Label^ i_label_low_voltage;
	private: System::Windows::Forms::Button^ f_button_set_TPlB_m;
	private: System::Windows::Forms::Label^ i_label_high_voltage;
	private: System::Windows::Forms::ToolStripMenuItem^ автоматизированныйРежимToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ автоматическийРежимToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ strip_admin_user;
	private: System::Windows::Forms::ToolStripMenuItem^ strip_student_user;


	private: System::Windows::Forms::ToolStripMenuItem^ демоверсияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ настройкиОтображенияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ клапанБабочкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ menu_strip_butterfly_percent;
	private: System::Windows::Forms::Timer^ Flap_auto_timer;
	private: System::Windows::Forms::Label^ test_b;
	private: System::Windows::Forms::Label^ data_label;
	private: System::Windows::Forms::Label^ f_label_system_status;
	private: System::Windows::Forms::Button^ f_button_block_form;
	private: System::Windows::Forms::Panel^ panel_unblock;
	private: System::Windows::Forms::Button^ f_button_unblock;
	public: System::Windows::Forms::TextBox^ f_textbox_pas;
	private:
	public: System::Windows::Forms::TextBox^ f_textbox_log;
	private: System::Windows::Forms::Label^ label21;
	public:
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Button^ f_button_TPLB_on_T;
	private: System::Windows::Forms::Button^ f_button_TPLB_on_M;
	private: System::Windows::Forms::Panel^ panel1;


	private: System::Windows::Forms::PictureBox^ UVN_picturebox_close;
	private: System::Windows::Forms::ProgressBar^ progressBar_Turbopump;
	private: System::Windows::Forms::RadioButton^ radioButton_flap_auto_mode;
	private: System::Windows::Forms::PictureBox^ UVN_picturebox_open;
	private: System::Windows::Forms::PictureBox^ picture_heating_on;
private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;



	private: System::Windows::Forms::ToolStripMenuItem^ menu_strip_butterfly_mV;
	public:



		//______________________________________
		//1._Обрабатываем вход в учетную запись_

		void access_user() {

		
			if (user->ID == "admin") {

				acces_admin();
			}

			else if (user->ID == "student") {

				access_student();
			}

			else if (user->ID == "demo") {


				access_demo();
			}

		}

		 void acces_admin() {

			f_label_system_status->Text = "user: admin"; 

			if (!status_block_form) { // если форма не заблокирована

				start_show_user();

			}

			else { // если форма заблокирована

				strip_admin_user->Enabled = false;
				strip_student_user->Enabled = true;
				f_label_system_status->Text = "user: admin";
				MainForm_unblock();
				hide_log_form();
				heat_toolset->Enabled = true;
				network_toolset->Enabled = true;
				status_block_form = false;

			}

		}

		 void access_student() {

			heat_toolset->Enabled = false;
			network_toolset->Enabled = false;
			

			if (!status_block_form) {

				start_show_user();
				


			}
			else {

				strip_admin_user->Enabled = true;
				strip_student_user->Enabled = false;
				f_label_system_status->Text = "user: student";
				MainForm_unblock();
				hide_log_form();
				status_block_form = false;


			}

		}

		 void access_demo() {

				f_label_system_status->Text = "user: demo";
				start_show_user();
		}


		 void hide_log_form() {

			 panel_unblock->Visible = false;
			 panel_unblock->Enabled = false;
			 f_textbox_pas->Text = "";
			 f_textbox_log->Text = " ";
			 status_block_form = true;
			 f_textbox_pas->Enabled = true;
		}

		 //КОНЕЦ ОБРАБОТКИ УЧ ЗАПИСИ






		 //_____________________________________
		 //2. Обрабатываем соединение с ПЛК

		 //2.1 ЗАПИСЬ ДАННЫХ В PLC
		 //------------------------------------------------------------------------------------------
		 void Write_PLC_data() {


			 try {

				 for (int i = 0; i <= 11; i++) {

					 ModbusPLC->WriteSingleRegister(i+20, currentData->data[i]);
					
				 }
			 }
			 
			 catch (System::Exception^) {

				 MessageBox::Show("Не удалось записать данные на PLC", "UVN Control System 2.0 - Error connecting", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 PLC_disconnect();
			 }


		 }
		 //------------------------------------------------------------------------------------------


		 //2.2 Передача cmd в PLC
		 //------------------------------------------------------------------------------------------	
		 void Write_command(int command) {

			 currentData->data[1] = command;

		 }
		 //------------------------------------------------------------------------------------------	

		 //2.3 Обновление статуса подключение с PLC
		 //------------------------------------------------------------------------------------------	
		 void PLC_connecting_status() {

			 if (ModbusPLC->Connected) {						//Если соединение с PLC есть

				 f_button_connect_to_PLC->Enabled = false;
				 picture_connection->Visible = true;
				 picture_not_connection->Visible = false;
				 f_button_connect_to_PLC->Enabled = false;

				 i_button_connect_to_PLC->Text = "Соединение с PLC установлено";
				 i_button_connect_to_PLC->ForeColor = System::Drawing::Color::SeaGreen;
				 currentData->main_connecting_status = true;

			 }

			 else if (!ModbusPLC->Connected) {					//Если соединения с PLC нет

				 i_button_connect_to_PLC->Text = "Нет соединения с PLC";
				 i_button_connect_to_PLC->ForeColor = System::Drawing::Color::Crimson;
				 f_button_connect_to_PLC->Enabled = true;
				 picture_connection->Visible = false;
				 picture_not_connection->Visible = true;
				 currentData->main_connecting_status = false;


			 }
		 }
		 //------------------------------------------------------------------------------------------	


		 //2.4 Соединение с PLC
		 //------------------------------------------------------------------------------------------
		 void PLC_connect() {

			 try {
				
				 ModbusPLC->IPAddress = modbusform->f_IP_modbus;
				 //IP-адрес заданный
				 ModbusPLC->Port = modbusform->f_Port_modbus;			//Port

				 ModbusPLC->Connect();
				 currentData->process_quants();

				 if (ModbusPLC->Connected) {
					 MainForm_unblock();
					 start_timer();
				 }
			 }
			 
			 catch (System::Exception^) {

				 PLC_disconnect();
				 MessageBox::Show("Не удалось установить соединение с PLC", "UVN Control System 2.0 - Error connecting", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 
			 }
		 }
		 //------------------------------------------------------------------------------------------


		 //2.5 Отсоединение от PLC
		 //------------------------------------------------------------------------------------------
		 void PLC_disconnect() {

			 ModbusPLC->Disconnect();
		
			 
			 if (!ModbusPLC->Connected) {

				 stop_timer();

				 currentData->main_connecting_status = false;
			 }
			 
		 }
		 //------------------------------------------------------------------------------------------

		 //2.6 Чтение массива ShareMem[] от PLC
		 //------------------------------------------------------------------------------------------
		 void Read_PLC_data () {


			 int startAddress = 0;
			 int quantity = 30;

			 try {


				 currentData->share_mem = ModbusPLC->ReadHoldingRegisters(startAddress, quantity);
				 //currentData->recieve_data(currentData->share_mem);

			 }

			 catch (System::Exception^) {
				
				 PLC_disconnect();
				 MessageBox::Show("Ошибка чтения", "Закрытие");

			 }

		 }
		 //------------------------------------------------------------------------------------------


		 //2.7 Обновление данных на экране: температуры, давления, значения источников тока, напряжения и т.д.
		 //------------------------------------------------------------------------------------------
		 void update_values() {							

			 try {

				 currentData->ShareMemToLocal();									//Массив передаем в переменные

				 //Обновляем значения оборотов ТМН
				 f_label_trubo_percent->Text = currentData->B_ac_TIC.ToString();
				 progressBar_Turbopump->Value = currentData->B_ac_TIC;

				 //Если обороты больше 0% -- принимаем, что он включен
				 if (currentData->share_mem[1] > 0) {

					 i_label_turbopump_status->ForeColor = System::Drawing::Color::SeaGreen;
					 f_label_turbopump_status->Text = "ON";
					 f_label_turbopump_status->ForeColor = System::Drawing::Color::SeaGreen;
				 }
				 else {

					 i_label_turbopump_status->ForeColor = System::Drawing::Color::Crimson;
					 f_label_turbopump_status->Text = "OFF";
					 f_label_turbopump_status->ForeColor = System::Drawing::Color::Crimson;
				 }

				 //Обновляем значение температуры
				 f_label_temp_status_deg->Text = currentData->DiscreteToDegrees(currentData->ac_Tact).ToString() + "° C";

				 //Обновляем значения фактических напряжения и силы тока TPlB
				 f_textbox_termo_voltage_V->Text = currentData->ac_TPlB_Uact.ToString();
				 f_textbox_termo_current_ma->Text = currentData->ac_TPlB_Iact.ToString();

				 f_textbox_magnetron_voltage_V->Text = currentData->ac_TPlB_Uact.ToString();
				 f_textbox_magnetron_current_ma->Text = currentData->ac_TPlB_Iact.ToString();

				 //Обновляем значения положения клапана-бабочки
				 if (i_label_set_butterfly->Text == "Задать положение 0-10000 мВ") {

					 f_label_batterfly_status->Text = currentData->act_BV_position.ToString() + " мВ";

				 }

				 else if (i_label_set_butterfly->Text == "Задать положение 0-100%") {

					 f_label_batterfly_status->Text = (currentData->act_BV_position / 100).ToString() + "%";

				 }

				 //Отображения значения APG и WRG
				 f_label_APG_status->Text = currentData->showAPG();

				 f_label_WRG_status->Text = currentData->showWRG();

				 //Отображения значения уст. PSV1 и PSV2
				 f_label_PSV1_status_mV->Text = currentData->au_PSV1.ToString();

				 f_label_PSV2_status_mV->Text = currentData->au_PSV2.ToString();

				 //Отображения положения заслонки подложки
				 if (!flap_auto_mode) {

				 if (currentData->rg_dc & currentData->masckon[0] != 0) {

						 if (!status_block_form) {

							 UVN_picturebox_open->Visible = true;
						 }

						 f_button_manual_open_flap->Enabled = false;
						 f_button_manual_close_flap->Enabled = true;
						 //UVN_picturebox_close->Visible = false;
						 f_label_flap_status->Text = "Открыта";
						 flap_open = true;

					 }

					 else if ((currentData->rg_dc & currentData->masckon[0]) == 0) {

						 if (!status_block_form) {

							 UVN_picturebox_open->Visible = false;
						 }

						 f_button_manual_open_flap->Enabled = true;
						 f_button_manual_close_flap->Enabled = false;
						 UVN_picturebox_open->Visible = false;
						 //UVN_picturebox_close->Visible = true;
						 flap_open = false;

						 f_label_flap_status->Text = "Закрыта";

					 }

				 }	

			 }

			 catch (System::Exception^) {

				 MessageBox::Show("Не удалось обработать данные массива PLC", "UVN Control System 2.0 - Error connecting", MessageBoxButtons::OK, MessageBoxIcon::Warning);

			 }

		 }

		 //2.8-------------------------------Обработка R_quants -- Слово состояние----------------------------------------
		 // 
		 //					
		 //-------------------------------------------------------------------------------------------------------------
		 //  1. vacuum_start - 1 bit
		 void vacuum_start() {

			 if ((currentData->r_quants & currentData->masckon[1]) != 0) {

				 f_button_stop_pump->Enabled = true;
				 f_button_start_pump->Enabled = false;
				 // Отображение включения насоса в radiogroup pumps
				 f_label_backpump_status->ForeColor = System::Drawing::Color::SeaGreen;
				 i_label_backpump_status->ForeColor = System::Drawing::Color::SeaGreen;
				 f_label_backpump_status->Text = "ON";
				 //Отображение индикации времени в radiogroup time
				 f_label_timer_current_start_pump->ForeColor=System::Drawing::Color::SeaGreen;
				 f_label_timer_start_start_pump->ForeColor = System::Drawing::Color::SeaGreen;
				 f_label_timer_time_start_pump->ForeColor = System::Drawing::Color::SeaGreen;
				 i_label_time_start_pump->ForeColor = System::Drawing::Color::SeaGreen;
					
				 // Если процесс был начал, фиксируем время и тик
				 if  (currentData->STime_start_vacuum==0) 
				 {
					 currentData->STime_start_vacuum = currentData->work_time;
					 currentData->DataTime_start_vacuum = DateTime::Now.ToString("HH:mm");

				 }
				currentData->LTime_start_vacuum = currentData->work_time - currentData->STime_start_vacuum;

				f_label_timer_start_start_pump->Text = currentData->STime_start_vacuum.ToString();
				f_label_timer_current_start_pump->Text = currentData->LTime_start_vacuum.ToString();
				f_label_timer_time_start_pump->Text = currentData->DataTime_start_vacuum;

			 }
				//Если процесс бит-процесс отсуствует
			 if ((currentData->r_quants & currentData->masckon[1]) == 0) {

				 if ((currentData->r_quants & currentData->masckon[2]) == 0) {
					 //Отображение статуса работы = 0 насоса в radiogroup pumps
					 f_label_backpump_status->Text = "OFF";
					 i_label_backpump_status->ForeColor = System::Drawing::Color::Crimson;
					 f_label_backpump_status->ForeColor = System::Drawing::Color::Crimson;
				 }
				 // Если процесс был закончен, фиксируем время и тик
				 if (currentData->STime_start_vacuum != 0) {
					 f_label_timer_current_start_pump->ForeColor = System::Drawing::Color::Crimson;
					 f_label_timer_start_start_pump->ForeColor = System::Drawing::Color::Crimson;
					 f_label_timer_time_start_pump->ForeColor = System::Drawing::Color::Crimson;
					 i_label_time_start_pump->ForeColor = System::Drawing::Color::Crimson;
				 }

			 }
		 }
		 //-------------------------------------------------------------------------------------------------------------
		 //
		 // 
		 // 
		 // 
		 // 
		 // 
		 //-------------------------------------------------------------------------------------------------------------
	   	 // 2. vacuum - 2 bit
		 void vacuum() {

			 if ((currentData->r_quants & currentData->masckon[2]) != 0) {


				 f_label_timer_current_pump->ForeColor = System::Drawing::Color::SeaGreen;
				 f_label_timer_start_pump->ForeColor = System::Drawing::Color::SeaGreen;
				 f_label_timer_time_pump->ForeColor = System::Drawing::Color::SeaGreen;
				 i_label_time_pump->ForeColor = System::Drawing::Color::SeaGreen;

				 // Если процесс был начал, фиксируем время и тик

				 if (currentData->STime_vacuum == 0)
				 {
					 currentData->STime_vacuum = currentData->work_time;
					 currentData->DataTime_vacuum = DateTime::Now.ToString("HH:mm");

				 }

				 currentData->LTime_vacuum = currentData->work_time - currentData->STime_vacuum;

				 f_label_timer_start_pump->Text = currentData->STime_vacuum.ToString();
				 f_label_timer_current_pump->Text = currentData->LTime_vacuum.ToString();
				 f_label_timer_time_pump->Text = currentData->DataTime_vacuum;
			 }

			 // Если процесс был закончен, фиксируем время и тик
			 if ((currentData->r_quants & currentData->masckon[2]) == 0) {
				 if (currentData->STime_vacuum != 0) {
					 f_label_timer_current_pump->ForeColor = System::Drawing::Color::Crimson;
					 f_label_timer_start_pump->ForeColor = System::Drawing::Color::Crimson;
					 f_label_timer_time_pump->ForeColor = System::Drawing::Color::Crimson;
					 i_label_time_pump->ForeColor = System::Drawing::Color::Crimson;
				 }
			 }
		 }
		 //--------------------------------------------------------------------------------------------------------------
		 //
		 // 
		 // 
		 //-------------------------------------------------------------------------------------------------------------
		 // 3.vacuum_stop - 3 bit
		 //=============================================================================================================
		 // 
		 // По данной кнопке происходит остановка вакуумной системы. Откл ФВН, потом плавная остановка ТМН.
		 //
		 //=============================================================================================================
		 void vacuum_stop () {

			 if ((currentData->r_quants & currentData->masckon[3]) != 0) {

				 f_button_stop_pump->Enabled = false;
				 f_button_start_pump->Enabled = true;
				 // Отображение отключения насоса в radiogroup pumps -- дублируется в 1 бите vacuum_start
				 f_label_backpump_status->ForeColor = System::Drawing::Color::Crimson;
				 i_label_backpump_status->ForeColor = System::Drawing::Color::Crimson;
				 f_label_backpump_status->Text = "OFF";

				 f_label_timer_current_stop_pump->ForeColor = System::Drawing::Color::SeaGreen;
				 f_label_timer_start_stop_pump->ForeColor = System::Drawing::Color::SeaGreen;
				 f_label_timer_time_stop_pump->ForeColor = System::Drawing::Color::SeaGreen;
				 i_label_time_stop_pump->ForeColor = System::Drawing::Color::SeaGreen;


				 // Если процесс был начал, фиксируем время и тик
				 if (currentData->STime_stop_vacuum == 0)
				 {
					 currentData->STime_stop_vacuum = currentData->work_time;
					 currentData->DataTime_stop_vacuum = DateTime::Now.ToString("HH:mm");
				 }

				 currentData->LTime_stop_vacuum = currentData->work_time - currentData->STime_start_vacuum;

				 f_label_timer_start_stop_pump->Text = currentData->STime_stop_vacuum.ToString();
				 f_label_timer_current_stop_pump->Text = currentData->LTime_stop_vacuum.ToString();
				 f_label_timer_time_stop_pump->Text = currentData->DataTime_stop_vacuum;
			 }

				// Если процесс был закончен, фиксируем время и тик
			 if ((currentData->r_quants & currentData->masckon[3]) == 0) {
				 if (currentData->STime_stop_vacuum != 0) {
					 f_label_timer_current_stop_pump->ForeColor = System::Drawing::Color::Crimson;
					 f_label_timer_start_stop_pump->ForeColor = System::Drawing::Color::Crimson;
					 f_label_timer_time_stop_pump->ForeColor = System::Drawing::Color::Crimson;
					 i_label_time_stop_pump->ForeColor = System::Drawing::Color::Crimson;
				 }
			 }

		 }
		 //-------------------------------------------------------------------------------------------------------------
		 //
		 // 
		 // 
		 // 
		 // 
		 // 
		 //-------------------------------------------------------------------------------------------------------------
		 // 4. gases - 4,5 bits
		 //=============================================================================================================
		 // При чтении 4 или 5 бита -- индицируем процесс напуска газов. 
		 // 
		 // * Необходимо добавить еще автоматический режим: пока реализован только ручной режим.
		 // ============================================================================================================
		 void gases() {

			 if (((currentData->r_quants & currentData->masckon[4]) != 0) | ((currentData->r_quants & currentData->masckon[5]) != 0)) {

				 f_label_timer_current_gases->ForeColor = System::Drawing::Color::SeaGreen;
				 f_label_timer_time_gases->ForeColor = System::Drawing::Color::SeaGreen;
				 f_label_timer_start_gases->ForeColor = System::Drawing::Color::SeaGreen;
				 i_label_timer_gases->ForeColor = System::Drawing::Color::SeaGreen;

				 // Если процесс был начал, фиксируем время и тик

				 if (currentData->STime_gases == 0)
				 {
					 currentData->STime_gases = currentData->work_time;
					 currentData->DataTime_gases = DateTime::Now.ToString("HH:mm");
				 }

				 currentData->LTime_gases = currentData->work_time - currentData->STime_gases;

				 f_label_timer_start_gases->Text = currentData->STime_gases.ToString();
				 f_label_timer_current_gases->Text = currentData->LTime_gases.ToString();
				 f_label_timer_time_gases->Text = currentData->DataTime_gases;

				 //Значит работает PSV1
				 if ((currentData->r_quants & currentData->masckon[4]) != 0) {
					 //надо обработать

					 f_button_start_stop_PSV1->Text = "Выключить PSV1";
					 f_button_start_stop_PSV1->ForeColor = System::Drawing::Color::Crimson;
					 f_label_PSV1_status_mV->ForeColor = System::Drawing::Color::Crimson;

					 f_button_PSV1_p30mv->Enabled = true;
					 f_button_PSV1_m30mv->Enabled = true;
				 }

				 //Значит работает PSV2
				 if ((currentData->r_quants & currentData->masckon[5]) != 0) {
					 //надо обработать

					 f_button_start_stop_PSV2->Text = "Выключить PSV2";
					 f_button_start_stop_PSV2->ForeColor = System::Drawing::Color::Crimson;
					 f_label_PSV2_status_mV->ForeColor = System::Drawing::Color::Crimson;

					 f_button_PSV2_p30mv->Enabled = true;
					 f_button_PSV2_m30mv->Enabled = true;
				 }

			 }

			 // Если процесс был закончен, фиксируем время и тик
			 if (((currentData->r_quants & currentData->masckon[4]) == 0) | ((currentData->r_quants & currentData->masckon[5]) == 0)) {
				
				 if (((currentData->r_quants & currentData->masckon[4]) == 0) & ((currentData->r_quants & currentData->masckon[5]) == 0)) {

					 if (currentData->STime_gases != 0) {
						 f_label_timer_current_gases->ForeColor = System::Drawing::Color::Crimson;
						 f_label_timer_start_gases->ForeColor = System::Drawing::Color::Crimson;
						 f_label_timer_time_gases->ForeColor = System::Drawing::Color::Crimson;
						 i_label_timer_gases->ForeColor = System::Drawing::Color::Crimson;
					 }
				 }

				 if ((currentData->r_quants & currentData->masckon[4]) == 0) {

					 f_button_start_stop_PSV1->Text = "Включить PSV1";
					 f_button_start_stop_PSV1->ForeColor = System::Drawing::Color::RoyalBlue;

					 f_button_PSV1_p30mv->Enabled = false;
					 f_button_PSV1_m30mv->Enabled = false;

				 }

				 if ((currentData->r_quants & currentData->masckon[5]) == 0) {

					 f_button_start_stop_PSV2->Text = "Включить PSV2";
					 f_button_start_stop_PSV2->ForeColor = System::Drawing::Color::RoyalBlue;

					 f_button_PSV2_p30mv->Enabled = false;
					 f_button_PSV2_m30mv->Enabled = false;

				 }
			 }
		 }
		 //-------------------------------------------------------------------------------------------------------------
		 //
		 // 
		 // 
		 //-------------------------------------------------------------------------------------------------------------
		 // 5.TPlB_proccess - 7,8 bit: 7 - U, 8 - I.
		 // ============================================================================================================
		 // 
		 // 
		 // ============================================================================================================
		 //
		 void TPlB() {

			if (((currentData->r_quants & currentData->masckon[7]) != 0) | ((currentData->r_quants & currentData->masckon[8])) != 0) {

				f_label_timer_current_TPlB->ForeColor = System::Drawing::Color::SeaGreen;
				f_label_timer_start_TPlB->ForeColor = System::Drawing::Color::SeaGreen;
				f_label_timer_time_TPlB->ForeColor = System::Drawing::Color::SeaGreen;
				i_label_timer_TPlB->ForeColor = System::Drawing::Color::SeaGreen;

				if (currentData->STime_TPlB == 0)
				{
					currentData->STime_TPlB = currentData->work_time;
					currentData->DataTime_TPlB = DateTime::Now.ToString("HH:mm");
				}

				currentData->LTime_TPlB = currentData->work_time - currentData->STime_TPlB;

				f_label_timer_start_TPlB->Text = currentData->STime_TPlB.ToString();
				f_label_timer_current_TPlB->Text = currentData->LTime_TPlB.ToString();
				f_label_timer_time_TPlB->Text = currentData->DataTime_TPlB;

				if (termo_mode) {

					if (f_button_TPLB_on_T->Text == "Включить источник тока") {

						f_button_TPLB_on_T->Text = "Выключить источник тока";
						f_button_TPLB_on_T->ForeColor = System::Drawing::Color::Crimson;
						f_button_set_TPlB_t->Enabled = true;
						tabpage_TPlB_Magnetron->Enabled = false;

					}
				}

				else if (magnentron_mode) {

					if (f_button_TPLB_on_M->Text == "Включить источник тока") {

						f_button_TPLB_on_M->Text = "Выключить источник тока";
						f_button_TPLB_on_M->ForeColor = System::Drawing::Color::Crimson;
						f_button_set_TPlB_m->Enabled = true;
						tabpage_TPlB_Termo->Enabled = false;
					}
				}
			}

			if (((currentData->r_quants & currentData->masckon[7]) == 0) | ((currentData->r_quants & currentData->masckon[8])) == 0) {

				if (currentData->STime_TPlB != 0) {

					f_label_timer_current_TPlB->ForeColor = System::Drawing::Color::Crimson;
					f_label_timer_start_TPlB->ForeColor = System::Drawing::Color::Crimson;
					f_label_timer_time_TPlB->ForeColor = System::Drawing::Color::Crimson;
					i_label_timer_TPlB->ForeColor = System::Drawing::Color::Crimson;
				}

				if (f_button_TPLB_on_M->Text == "Выключить источник тока") {

					f_button_TPLB_on_M->Text = "Включить источник тока";
					f_button_TPLB_on_M->ForeColor = System::Drawing::Color::Navy;
					f_button_set_TPlB_m->Enabled = false;
					tabpage_TPlB_Termo->Enabled = true;
				}

				else if (f_button_TPLB_on_T->Text == "Выключить источник тока") {

					f_button_TPLB_on_T->Text = "Включить источник тока";
					f_button_TPLB_on_T->ForeColor = System::Drawing::Color::Navy;
					f_button_set_TPlB_t->Enabled = false;
					tabpage_TPlB_Magnetron->Enabled = true;
				}
			}

		 }
		 //-------------------------------------------------------------------------------------------------------------
		 //
		 //
		 //-------------------------------------------------------------------------------------------------------------
		 // 6. Heating -- нагрев (релейный).
		 //=============================================================================================================
		 //
		 //
		 //=============================================================================================================
		 void heating() {

			 if ((currentData->r_quants & currentData->masckon[10]) == 0) {

					 f_button_on_off_heat->Text = "Включить нагрев";
					 f_button_on_off_heat->ForeColor = System::Drawing::Color::Crimson;
					 picture_heating_on->Visible = false;
					 f_label_temp_status_deg->ForeColor = System::Drawing::Color::DarkSlateBlue;
					 i_label_temp_status->ForeColor = System::Drawing::Color::DarkSlateBlue;
				 }

			if ((currentData->r_quants & currentData->masckon[10]) != 0) {
					
					f_label_temp_status_deg->ForeColor = System::Drawing::Color::Crimson;
					i_label_temp_status->ForeColor = System::Drawing::Color::Crimson;
					 picture_heating_on->Visible = true;
					 f_button_on_off_heat->Text = "Отключить нагрев";
					 f_button_on_off_heat->ForeColor = System::Drawing::Color::Navy;
				 }

		 }
		 //------------------------------------------------------------------------------------------------------------
		 //
		 //
		 // 
		 // 
		 // 
		 //------------------------------------------------------------------------------------------------------------
		 // Функция, обрабатываюащая все r_quants
		 void process_R_quants() {

			 currentData->r_quants = currentData->share_mem[0];
			
			 vacuum_start();
			 vacuum();
			 vacuum_stop(); 
			 TPlB();
			 heating();
			 gases();

		 }
		 //------------------------------------------------------------------------------------------------------------

		




		//DateTime^ date1 = gcnew DateTime(0);

		void start_timer() {

			currentData->work_time = 0;

			Work_Timer->Enabled = true;
			Work_Timer->Interval = 500;

		}

		void stop_timer() {

			Work_Timer->Enabled = false;
		}
		




		// ФУНКЦИИ РАБОТА С ФОРМОЙ 

		void MainForm_block() { //блокируем элементы на форме

			left_down_panel->Enabled = false;
			left_panel->Enabled = false;
			right_panel->Enabled = false;
			right_down_panel->Enabled = false;
			status_block_form = true;
			down_panel->Enabled = false;

		}

		void MainForm_unblock() { // активируем элементы на форме

			left_down_panel->Enabled = true;
			left_panel->Enabled = true;
			right_panel->Enabled = true;
			right_down_panel->Enabled = true;
			status_block_form = false;
			down_panel->Enabled = true;
			f_label_recording->Visible = true;
			i_label_name_recording->Visible = true;
			f_label_name_recording->Visible = true;
			pictureBox_recording->Visible = true;


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
			//Термичка
			f_textbox_termo_current_ma->Text = "-";
			f_textbox_termo_voltage_V->Text = "-";
			f_textbox_magnetron_current_ma->Text = "-";
			f_textbox_magnetron_voltage_V->Text = "-";

		//Temperature
			f_label_temp_status_deg->Text = "-";

		//Flap
			f_label_flap_status->Text = "-";

		//Recording
			f_label_recording->Visible = false;
			i_label_name_recording->Visible = false;
			f_label_name_recording->Visible = false;
			pictureBox_recording->Visible = false;

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

			this->Show();
			MainForm_block();
			MainFormClear();
			picture_connection->Visible = false;
			picture_not_connection->Visible = true;
			f_button_connect_to_PLC->Enabled = true;
			i_button_connect_to_PLC->Text = "Нет соединения с PLC";
			i_button_connect_to_PLC->ForeColor = System::Drawing::Color::Crimson;

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
	private: System::Windows::Forms::ToolStripMenuItem^ heat_toolset;
	private: System::Windows::Forms::ToolStripMenuItem^ выборРегулятораToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pid_toolset;
	private: System::Windows::Forms::ToolStripMenuItem^ настройкаШИМToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ network_and_accs;
	private: System::Windows::Forms::ToolStripMenuItem^ network_toolset;
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

	private: System::Windows::Forms::Label^ f_label_turbopump_status;
	private: System::Windows::Forms::Label^ f_label_backpump_status;
	private: System::Windows::Forms::Label^ i_label_turbopump_status;
	private: System::Windows::Forms::Label^ i_label_backpump_status;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ f_label_temp_status_deg;
private: System::Windows::Forms::Label^ i_label_temp_status;

	private: System::Windows::Forms::Button^ f_button_set_temp;
	private: System::Windows::Forms::TextBox^ f_textbox_set_temp;
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
private: System::Windows::Forms::Label^ i_label_time_stop_pump;

	private: System::Windows::Forms::Label^ f_label_timer_current_TPlB;
	private: System::Windows::Forms::Label^ f_label_timer_start_TPlB;
private: System::Windows::Forms::Label^ i_label_timer_TPlB;

	private: System::Windows::Forms::Label^ f_label_timer_current_gases;
	private: System::Windows::Forms::Label^ f_label_timer_start_gases;
private: System::Windows::Forms::Label^ i_label_timer_gases;

	private: System::Windows::Forms::Label^ f_label_timer_current_pump;
	private: System::Windows::Forms::Label^ f_label_timer_current_start_pump;
	private: System::Windows::Forms::Label^ f_label_timer_time_pump;
	private: System::Windows::Forms::Label^ f_label_timer_start_pump;
private: System::Windows::Forms::Label^ i_label_time_pump;

	private: System::Windows::Forms::Label^ f_label_timer_start_start_pump;
	private: System::Windows::Forms::Label^ f_label_timer_time_start_pump;
private: System::Windows::Forms::Label^ i_label_time_start_pump;

	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::TextBox^ f_textbox_set_U_T;
	private: System::Windows::Forms::Label^ label54;
	private: System::Windows::Forms::TextBox^ f_textbox_set_I_T;
	private: System::Windows::Forms::Label^ label56;
	private: System::Windows::Forms::Panel^ left_down_panel;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::PictureBox^ picture_connection;
	private: System::Windows::Forms::Label^ i_button_connect_to_PLC;
	private: System::Windows::Forms::Button^ f_button_connect_to_PLC;
	private: System::Windows::Forms::GroupBox^ groupBox_flap;
	private: System::Windows::Forms::GroupBox^ subgroupBox_mode;

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
	private: System::Windows::Forms::Timer^ Work_Timer;
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
			this->heat_toolset = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выборРегулятораToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pid_toolset = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->настройкаШИМToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->network_and_accs = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->network_toolset = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->учетнаяЗаписьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->strip_admin_user = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->strip_student_user = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->демоверсияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->настройкиОтображенияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->клапанБабочкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menu_strip_butterfly_percent = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menu_strip_butterfly_mV = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->f_label_name_recording = (gcnew System::Windows::Forms::Label());
			this->pictureBox_recording = (gcnew System::Windows::Forms::PictureBox());
			this->i_label_name_recording = (gcnew System::Windows::Forms::Label());
			this->groupbox_butterfly = (gcnew System::Windows::Forms::GroupBox());
			this->i_label_set_butterfly = (gcnew System::Windows::Forms::Label());
			this->f_button_set_butterfly = (gcnew System::Windows::Forms::Button());
			this->f_textbox_butterfly_pos = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->f_label_batterfly_status = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->groupBox_time = (gcnew System::Windows::Forms::GroupBox());
			this->f_label_timer_time_stop_pump = (gcnew System::Windows::Forms::Label());
			this->f_label_timer_current_stop_pump = (gcnew System::Windows::Forms::Label());
			this->f_label_timer_start_stop_pump = (gcnew System::Windows::Forms::Label());
			this->f_label_timer_time_TPlB = (gcnew System::Windows::Forms::Label());
			this->f_label_timer_time_gases = (gcnew System::Windows::Forms::Label());
			this->i_label_time_stop_pump = (gcnew System::Windows::Forms::Label());
			this->f_label_timer_current_TPlB = (gcnew System::Windows::Forms::Label());
			this->f_label_timer_start_TPlB = (gcnew System::Windows::Forms::Label());
			this->i_label_timer_TPlB = (gcnew System::Windows::Forms::Label());
			this->f_label_timer_current_gases = (gcnew System::Windows::Forms::Label());
			this->f_label_timer_start_gases = (gcnew System::Windows::Forms::Label());
			this->i_label_timer_gases = (gcnew System::Windows::Forms::Label());
			this->f_label_timer_current_pump = (gcnew System::Windows::Forms::Label());
			this->f_label_timer_current_start_pump = (gcnew System::Windows::Forms::Label());
			this->f_label_timer_time_pump = (gcnew System::Windows::Forms::Label());
			this->f_label_timer_start_pump = (gcnew System::Windows::Forms::Label());
			this->i_label_time_pump = (gcnew System::Windows::Forms::Label());
			this->f_label_timer_start_start_pump = (gcnew System::Windows::Forms::Label());
			this->f_label_timer_time_start_pump = (gcnew System::Windows::Forms::Label());
			this->i_label_time_start_pump = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->tabpage_TPlB = (gcnew System::Windows::Forms::TabControl());
			this->tabpage_TPlB_Termo = (gcnew System::Windows::Forms::TabPage());
			this->f_button_TPLB_on_T = (gcnew System::Windows::Forms::Button());
			this->i_label_low_voltage = (gcnew System::Windows::Forms::Label());
			this->f_button_set_TPlB_t = (gcnew System::Windows::Forms::Button());
			this->f_textbox_termo_current_ma = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->f_textbox_termo_voltage_V = (gcnew System::Windows::Forms::Label());
			this->f_textbox_set_I_T = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->f_textbox_set_U_T = (gcnew System::Windows::Forms::TextBox());
			this->tabpage_TPlB_Magnetron = (gcnew System::Windows::Forms::TabPage());
			this->f_button_TPLB_on_M = (gcnew System::Windows::Forms::Button());
			this->i_label_high_voltage = (gcnew System::Windows::Forms::Label());
			this->f_button_set_TPlB_m = (gcnew System::Windows::Forms::Button());
			this->f_textbox_magnetron_current_ma = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->f_textbox_magnetron_voltage_V = (gcnew System::Windows::Forms::Label());
			this->f_textbox_set_I_M = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->f_textbox_set_U_M = (gcnew System::Windows::Forms::TextBox());
			this->right_panel = (gcnew System::Windows::Forms::Panel());
			this->groupBox_flap = (gcnew System::Windows::Forms::GroupBox());
			this->test_b = (gcnew System::Windows::Forms::Label());
			this->f_label_flap_auto_info = (gcnew System::Windows::Forms::Label());
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
			this->f_button_set_temp = (gcnew System::Windows::Forms::Button());
			this->f_textbox_set_temp = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->f_button_on_off_heat = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->f_label_temp_status_deg = (gcnew System::Windows::Forms::Label());
			this->i_label_temp_status = (gcnew System::Windows::Forms::Label());
			this->picture_heating_on = (gcnew System::Windows::Forms::PictureBox());
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
			this->f_label_system_status = (gcnew System::Windows::Forms::Label());
			this->f_button_block_form = (gcnew System::Windows::Forms::Button());
			this->data_label = (gcnew System::Windows::Forms::Label());
			this->picture_not_connection = (gcnew System::Windows::Forms::PictureBox());
			this->f_button_connect_to_PLC = (gcnew System::Windows::Forms::Button());
			this->picture_connection = (gcnew System::Windows::Forms::PictureBox());
			this->i_button_connect_to_PLC = (gcnew System::Windows::Forms::Label());
			this->Work_Timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->down_panel = (gcnew System::Windows::Forms::Panel());
			this->Flap_auto_timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel_unblock = (gcnew System::Windows::Forms::Panel());
			this->f_button_unblock = (gcnew System::Windows::Forms::Button());
			this->f_textbox_pas = (gcnew System::Windows::Forms::TextBox());
			this->f_textbox_log = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->UVN_picturebox_open = (gcnew System::Windows::Forms::PictureBox());
			this->UVN_picturebox_close = (gcnew System::Windows::Forms::PictureBox());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
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
			this->tabpage_TPlB->SuspendLayout();
			this->tabpage_TPlB_Termo->SuspendLayout();
			this->tabpage_TPlB_Magnetron->SuspendLayout();
			this->right_panel->SuspendLayout();
			this->groupBox_flap->SuspendLayout();
			this->subgroupBox_mode->SuspendLayout();
			this->right_down_panel->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_heating_on))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel6->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_not_connection))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_connection))->BeginInit();
			this->panel4->SuspendLayout();
			this->down_panel->SuspendLayout();
			this->panel_unblock->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UVN_picturebox_open))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UVN_picturebox_close))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::White;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->управлениеПроцессомToolStripMenuItem,
					this->heat_toolset, this->network_and_accs, this->настройкиОтображенияToolStripMenuItem
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
			// heat_toolset
			// 
			this->heat_toolset->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->выборРегулятораToolStripMenuItem,
					this->pid_toolset, this->настройкаШИМToolStripMenuItem
			});
			this->heat_toolset->Name = L"heat_toolset";
			this->heat_toolset->Size = System::Drawing::Size(124, 20);
			this->heat_toolset->Text = L"Настройка нагрева";
			// 
			// выборРегулятораToolStripMenuItem
			// 
			this->выборРегулятораToolStripMenuItem->Name = L"выборРегулятораToolStripMenuItem";
			this->выборРегулятораToolStripMenuItem->Size = System::Drawing::Size(176, 22);
			this->выборРегулятораToolStripMenuItem->Text = L"Выбор регулятора";
			// 
			// pid_toolset
			// 
			this->pid_toolset->Name = L"pid_toolset";
			this->pid_toolset->Size = System::Drawing::Size(176, 22);
			this->pid_toolset->Text = L"Настройка ПИД";
			this->pid_toolset->Click += gcnew System::EventHandler(this, &MainForm::pid_toolset_Click);
			// 
			// настройкаШИМToolStripMenuItem
			// 
			this->настройкаШИМToolStripMenuItem->Name = L"настройкаШИМToolStripMenuItem";
			this->настройкаШИМToolStripMenuItem->Size = System::Drawing::Size(176, 22);
			this->настройкаШИМToolStripMenuItem->Text = L"Настройка ШИМ";
			// 
			// network_and_accs
			// 
			this->network_and_accs->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->network_toolset,
					this->учетнаяЗаписьToolStripMenuItem, this->toolStripSeparator1
			});
			this->network_and_accs->Name = L"network_and_accs";
			this->network_and_accs->Size = System::Drawing::Size(58, 20);
			this->network_and_accs->Text = L"Доступ";
			// 
			// network_toolset
			// 
			this->network_toolset->Name = L"network_toolset";
			this->network_toolset->Size = System::Drawing::Size(180, 22);
			this->network_toolset->Text = L"Сетевой доступ";
			this->network_toolset->Click += gcnew System::EventHandler(this, &MainForm::network_toolset_Click);
			// 
			// учетнаяЗаписьToolStripMenuItem
			// 
			this->учетнаяЗаписьToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->strip_admin_user,
					this->strip_student_user, this->демоверсияToolStripMenuItem
			});
			this->учетнаяЗаписьToolStripMenuItem->Name = L"учетнаяЗаписьToolStripMenuItem";
			this->учетнаяЗаписьToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->учетнаяЗаписьToolStripMenuItem->Text = L"Учетная запись";
			// 
			// strip_admin_user
			// 
			this->strip_admin_user->Enabled = false;
			this->strip_admin_user->Name = L"strip_admin_user";
			this->strip_admin_user->Size = System::Drawing::Size(147, 22);
			this->strip_admin_user->Text = L"Admin";
			this->strip_admin_user->Click += gcnew System::EventHandler(this, &MainForm::strip_admin_user_Click);
			// 
			// strip_student_user
			// 
			this->strip_student_user->Name = L"strip_student_user";
			this->strip_student_user->Size = System::Drawing::Size(147, 22);
			this->strip_student_user->Text = L"Student";
			this->strip_student_user->Click += gcnew System::EventHandler(this, &MainForm::studentToolStripMenuItem_Click);
			// 
			// демоверсияToolStripMenuItem
			// 
			this->демоверсияToolStripMenuItem->Name = L"демоверсияToolStripMenuItem";
			this->демоверсияToolStripMenuItem->Size = System::Drawing::Size(147, 22);
			this->демоверсияToolStripMenuItem->Text = L"Демо-версия";
			// 
			// настройкиОтображенияToolStripMenuItem
			// 
			this->настройкиОтображенияToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->клапанБабочкаToolStripMenuItem });
			this->настройкиОтображенияToolStripMenuItem->Name = L"настройкиОтображенияToolStripMenuItem";
			this->настройкиОтображенияToolStripMenuItem->Size = System::Drawing::Size(156, 20);
			this->настройкиОтображенияToolStripMenuItem->Text = L"Настройки отображения";
			// 
			// клапанБабочкаToolStripMenuItem
			// 
			this->клапанБабочкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->menu_strip_butterfly_percent,
					this->menu_strip_butterfly_mV
			});
			this->клапанБабочкаToolStripMenuItem->Name = L"клапанБабочкаToolStripMenuItem";
			this->клапанБабочкаToolStripMenuItem->Size = System::Drawing::Size(163, 22);
			this->клапанБабочкаToolStripMenuItem->Text = L"Клапан бабочка";
			// 
			// menu_strip_butterfly_percent
			// 
			this->menu_strip_butterfly_percent->Enabled = false;
			this->menu_strip_butterfly_percent->Name = L"menu_strip_butterfly_percent";
			this->menu_strip_butterfly_percent->Size = System::Drawing::Size(210, 22);
			this->menu_strip_butterfly_percent->Text = L"Проценты, 0-100%";
			this->menu_strip_butterfly_percent->Click += gcnew System::EventHandler(this, &MainForm::menu_strip_butterfly_percent_Click);
			// 
			// menu_strip_butterfly_mV
			// 
			this->menu_strip_butterfly_mV->Name = L"menu_strip_butterfly_mV";
			this->menu_strip_butterfly_mV->Size = System::Drawing::Size(210, 22);
			this->menu_strip_butterfly_mV->Text = L"Напряжение, 0-10000 мВ";
			this->menu_strip_butterfly_mV->Click += gcnew System::EventHandler(this, &MainForm::menu_strip_butterfly_mV_Click);
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
			this->groupBox6->Location = System::Drawing::Point(9, 321);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(304, 348);
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
			this->tabControl1->Location = System::Drawing::Point(6, 29);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(292, 312);
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
			this->tabPage1->Size = System::Drawing::Size(284, 284);
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
			this->tabPage2->Size = System::Drawing::Size(284, 284);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Автоматический режим";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// left_down_panel
			// 
			this->left_down_panel->Controls->Add(this->f_label_recording);
			this->left_down_panel->Controls->Add(this->f_label_name_recording);
			this->left_down_panel->Controls->Add(this->pictureBox_recording);
			this->left_down_panel->Controls->Add(this->i_label_name_recording);
			this->left_down_panel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->left_down_panel->Location = System::Drawing::Point(0, 675);
			this->left_down_panel->Name = L"left_down_panel";
			this->left_down_panel->Size = System::Drawing::Size(317, 30);
			this->left_down_panel->TabIndex = 21;
			// 
			// f_label_recording
			// 
			this->f_label_recording->AutoSize = true;
			this->f_label_recording->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_label_recording->ForeColor = System::Drawing::Color::Crimson;
			this->f_label_recording->Location = System::Drawing::Point(35, 5);
			this->f_label_recording->Name = L"f_label_recording";
			this->f_label_recording->Size = System::Drawing::Size(81, 18);
			this->f_label_recording->TabIndex = 1;
			this->f_label_recording->Text = L"RECORDING";
			this->f_label_recording->Click += gcnew System::EventHandler(this, &MainForm::f_label_recording_Click);
			// 
			// f_label_name_recording
			// 
			this->f_label_name_recording->AutoSize = true;
			this->f_label_name_recording->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_label_name_recording->ForeColor = System::Drawing::Color::Black;
			this->f_label_name_recording->Location = System::Drawing::Point(231, 4);
			this->f_label_name_recording->Name = L"f_label_name_recording";
			this->f_label_name_recording->Size = System::Drawing::Size(76, 19);
			this->f_label_name_recording->TabIndex = 3;
			this->f_label_name_recording->Text = L"Hst121.txt";
			// 
			// pictureBox_recording
			// 
			this->pictureBox_recording->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_recording.Image")));
			this->pictureBox_recording->Location = System::Drawing::Point(9, 3);
			this->pictureBox_recording->Name = L"pictureBox_recording";
			this->pictureBox_recording->Size = System::Drawing::Size(20, 25);
			this->pictureBox_recording->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox_recording->TabIndex = 0;
			this->pictureBox_recording->TabStop = false;
			this->pictureBox_recording->Click += gcnew System::EventHandler(this, &MainForm::pictureBox_recording_Click);
			// 
			// i_label_name_recording
			// 
			this->i_label_name_recording->AutoSize = true;
			this->i_label_name_recording->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->i_label_name_recording->ForeColor = System::Drawing::Color::Black;
			this->i_label_name_recording->Location = System::Drawing::Point(187, 4);
			this->i_label_name_recording->Name = L"i_label_name_recording";
			this->i_label_name_recording->Size = System::Drawing::Size(42, 19);
			this->i_label_name_recording->TabIndex = 2;
			this->i_label_name_recording->Text = L"Имя:";
			// 
			// groupbox_butterfly
			// 
			this->groupbox_butterfly->Controls->Add(this->i_label_set_butterfly);
			this->groupbox_butterfly->Controls->Add(this->f_button_set_butterfly);
			this->groupbox_butterfly->Controls->Add(this->f_textbox_butterfly_pos);
			this->groupbox_butterfly->Controls->Add(this->label40);
			this->groupbox_butterfly->Controls->Add(this->f_label_batterfly_status);
			this->groupbox_butterfly->Controls->Add(this->label42);
			this->groupbox_butterfly->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupbox_butterfly->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupbox_butterfly->ForeColor = System::Drawing::Color::RoyalBlue;
			this->groupbox_butterfly->Location = System::Drawing::Point(9, 173);
			this->groupbox_butterfly->Name = L"groupbox_butterfly";
			this->groupbox_butterfly->Size = System::Drawing::Size(305, 141);
			this->groupbox_butterfly->TabIndex = 19;
			this->groupbox_butterfly->TabStop = false;
			this->groupbox_butterfly->Text = L"Клапан бабочка";
			// 
			// i_label_set_butterfly
			// 
			this->i_label_set_butterfly->AutoSize = true;
			this->i_label_set_butterfly->BackColor = System::Drawing::Color::White;
			this->i_label_set_butterfly->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->i_label_set_butterfly->ForeColor = System::Drawing::Color::RoyalBlue;
			this->i_label_set_butterfly->Location = System::Drawing::Point(58, 71);
			this->i_label_set_butterfly->Name = L"i_label_set_butterfly";
			this->i_label_set_butterfly->Size = System::Drawing::Size(189, 19);
			this->i_label_set_butterfly->TabIndex = 19;
			this->i_label_set_butterfly->Text = L"Задать положение 0-100%";
			// 
			// f_button_set_butterfly
			// 
			this->f_button_set_butterfly->BackColor = System::Drawing::SystemColors::ControlLight;
			this->f_button_set_butterfly->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->f_button_set_butterfly->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_button_set_butterfly->Location = System::Drawing::Point(74, 99);
			this->f_button_set_butterfly->Name = L"f_button_set_butterfly";
			this->f_button_set_butterfly->Size = System::Drawing::Size(214, 27);
			this->f_button_set_butterfly->TabIndex = 18;
			this->f_button_set_butterfly->Text = L" Установить положение";
			this->f_button_set_butterfly->UseVisualStyleBackColor = false;
			this->f_button_set_butterfly->Click += gcnew System::EventHandler(this, &MainForm::f_button_set_butterfly_Click);
			// 
			// f_textbox_butterfly_pos
			// 
			this->f_textbox_butterfly_pos->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_textbox_butterfly_pos->HideSelection = false;
			this->f_textbox_butterfly_pos->Location = System::Drawing::Point(11, 99);
			this->f_textbox_butterfly_pos->Name = L"f_textbox_butterfly_pos";
			this->f_textbox_butterfly_pos->Size = System::Drawing::Size(57, 27);
			this->f_textbox_butterfly_pos->TabIndex = 17;
			this->f_textbox_butterfly_pos->Text = L"100";
			this->f_textbox_butterfly_pos->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Calibri", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label40->ForeColor = System::Drawing::Color::Black;
			this->label40->Location = System::Drawing::Point(90, 53);
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
			this->f_label_batterfly_status->Location = System::Drawing::Point(171, 27);
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
			this->label42->Location = System::Drawing::Point(64, 27);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(114, 26);
			this->label42->TabIndex = 11;
			this->label42->Text = L"Положение";
			this->label42->Click += gcnew System::EventHandler(this, &MainForm::label42_Click);
			// 
			// groupBox_time
			// 
			this->groupBox_time->Controls->Add(this->f_label_timer_time_stop_pump);
			this->groupBox_time->Controls->Add(this->f_label_timer_current_stop_pump);
			this->groupBox_time->Controls->Add(this->f_label_timer_start_stop_pump);
			this->groupBox_time->Controls->Add(this->f_label_timer_time_TPlB);
			this->groupBox_time->Controls->Add(this->f_label_timer_time_gases);
			this->groupBox_time->Controls->Add(this->i_label_time_stop_pump);
			this->groupBox_time->Controls->Add(this->f_label_timer_current_TPlB);
			this->groupBox_time->Controls->Add(this->f_label_timer_start_TPlB);
			this->groupBox_time->Controls->Add(this->i_label_timer_TPlB);
			this->groupBox_time->Controls->Add(this->f_label_timer_current_gases);
			this->groupBox_time->Controls->Add(this->f_label_timer_start_gases);
			this->groupBox_time->Controls->Add(this->i_label_timer_gases);
			this->groupBox_time->Controls->Add(this->f_label_timer_current_pump);
			this->groupBox_time->Controls->Add(this->f_label_timer_current_start_pump);
			this->groupBox_time->Controls->Add(this->f_label_timer_time_pump);
			this->groupBox_time->Controls->Add(this->f_label_timer_start_pump);
			this->groupBox_time->Controls->Add(this->i_label_time_pump);
			this->groupBox_time->Controls->Add(this->f_label_timer_start_start_pump);
			this->groupBox_time->Controls->Add(this->f_label_timer_time_start_pump);
			this->groupBox_time->Controls->Add(this->i_label_time_start_pump);
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
			// i_label_time_stop_pump
			// 
			this->i_label_time_stop_pump->AutoSize = true;
			this->i_label_time_stop_pump->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->i_label_time_stop_pump->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->i_label_time_stop_pump->Location = System::Drawing::Point(12, 137);
			this->i_label_time_stop_pump->Name = L"i_label_time_stop_pump";
			this->i_label_time_stop_pump->Size = System::Drawing::Size(119, 23);
			this->i_label_time_stop_pump->TabIndex = 17;
			this->i_label_time_stop_pump->Text = L"Стоп откачки:";
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
			// i_label_timer_TPlB
			// 
			this->i_label_timer_TPlB->AutoSize = true;
			this->i_label_timer_TPlB->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->i_label_timer_TPlB->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->i_label_timer_TPlB->Location = System::Drawing::Point(2, 110);
			this->i_label_timer_TPlB->Name = L"i_label_timer_TPlB";
			this->i_label_timer_TPlB->Size = System::Drawing::Size(129, 23);
			this->i_label_timer_TPlB->TabIndex = 14;
			this->i_label_timer_TPlB->Text = L"Источник тока:";
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
			// i_label_timer_gases
			// 
			this->i_label_timer_gases->AutoSize = true;
			this->i_label_timer_gases->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->i_label_timer_gases->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->i_label_timer_gases->Location = System::Drawing::Point(12, 83);
			this->i_label_timer_gases->Name = L"i_label_timer_gases";
			this->i_label_timer_gases->Size = System::Drawing::Size(119, 23);
			this->i_label_timer_gases->TabIndex = 11;
			this->i_label_timer_gases->Text = L"Напуск газов:";
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
			// i_label_time_pump
			// 
			this->i_label_time_pump->AutoSize = true;
			this->i_label_time_pump->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->i_label_time_pump->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->i_label_time_pump->Location = System::Drawing::Point(49, 55);
			this->i_label_time_pump->Name = L"i_label_time_pump";
			this->i_label_time_pump->Size = System::Drawing::Size(80, 23);
			this->i_label_time_pump->TabIndex = 6;
			this->i_label_time_pump->Text = L"Откачка:";
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
			// i_label_time_start_pump
			// 
			this->i_label_time_start_pump->AutoSize = true;
			this->i_label_time_start_pump->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->i_label_time_start_pump->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->i_label_time_start_pump->Location = System::Drawing::Point(2, 27);
			this->i_label_time_start_pump->Name = L"i_label_time_start_pump";
			this->i_label_time_start_pump->Size = System::Drawing::Size(125, 23);
			this->i_label_time_start_pump->TabIndex = 3;
			this->i_label_time_start_pump->Text = L"Старт откачки:";
			// 
			// groupBox8
			// 
			this->groupBox8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->groupBox8->Controls->Add(this->tabpage_TPlB);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox8->ForeColor = System::Drawing::Color::RoyalBlue;
			this->groupBox8->Location = System::Drawing::Point(6, 12);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(424, 202);
			this->groupBox8->TabIndex = 20;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Источник тока TPlB";
			// 
			// tabpage_TPlB
			// 
			this->tabpage_TPlB->Controls->Add(this->tabpage_TPlB_Termo);
			this->tabpage_TPlB->Controls->Add(this->tabpage_TPlB_Magnetron);
			this->tabpage_TPlB->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabpage_TPlB->Location = System::Drawing::Point(6, 26);
			this->tabpage_TPlB->Name = L"tabpage_TPlB";
			this->tabpage_TPlB->SelectedIndex = 0;
			this->tabpage_TPlB->Size = System::Drawing::Size(412, 168);
			this->tabpage_TPlB->TabIndex = 24;
			this->tabpage_TPlB->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::tabControl2_SelectedIndexChanged);
			// 
			// tabpage_TPlB_Termo
			// 
			this->tabpage_TPlB_Termo->Controls->Add(this->f_button_TPLB_on_T);
			this->tabpage_TPlB_Termo->Controls->Add(this->i_label_low_voltage);
			this->tabpage_TPlB_Termo->Controls->Add(this->f_button_set_TPlB_t);
			this->tabpage_TPlB_Termo->Controls->Add(this->f_textbox_termo_current_ma);
			this->tabpage_TPlB_Termo->Controls->Add(this->label56);
			this->tabpage_TPlB_Termo->Controls->Add(this->f_textbox_termo_voltage_V);
			this->tabpage_TPlB_Termo->Controls->Add(this->f_textbox_set_I_T);
			this->tabpage_TPlB_Termo->Controls->Add(this->label15);
			this->tabpage_TPlB_Termo->Controls->Add(this->label54);
			this->tabpage_TPlB_Termo->Controls->Add(this->label6);
			this->tabpage_TPlB_Termo->Controls->Add(this->f_textbox_set_U_T);
			this->tabpage_TPlB_Termo->Location = System::Drawing::Point(4, 24);
			this->tabpage_TPlB_Termo->Name = L"tabpage_TPlB_Termo";
			this->tabpage_TPlB_Termo->Padding = System::Windows::Forms::Padding(3);
			this->tabpage_TPlB_Termo->Size = System::Drawing::Size(404, 140);
			this->tabpage_TPlB_Termo->TabIndex = 0;
			this->tabpage_TPlB_Termo->Text = L"Термическое испарение";
			this->tabpage_TPlB_Termo->UseVisualStyleBackColor = true;
			// 
			// f_button_TPLB_on_T
			// 
			this->f_button_TPLB_on_T->BackColor = System::Drawing::SystemColors::ControlLight;
			this->f_button_TPLB_on_T->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->f_button_TPLB_on_T->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_button_TPLB_on_T->ForeColor = System::Drawing::Color::Navy;
			this->f_button_TPLB_on_T->Location = System::Drawing::Point(15, 99);
			this->f_button_TPLB_on_T->Name = L"f_button_TPLB_on_T";
			this->f_button_TPLB_on_T->Size = System::Drawing::Size(246, 29);
			this->f_button_TPLB_on_T->TabIndex = 57;
			this->f_button_TPLB_on_T->Text = L"Включить источник тока";
			this->f_button_TPLB_on_T->UseVisualStyleBackColor = false;
			this->f_button_TPLB_on_T->Click += gcnew System::EventHandler(this, &MainForm::f_button_TPLB_on_T_Click);
			// 
			// i_label_low_voltage
			// 
			this->i_label_low_voltage->AutoSize = true;
			this->i_label_low_voltage->BackColor = System::Drawing::Color::White;
			this->i_label_low_voltage->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->i_label_low_voltage->ForeColor = System::Drawing::Color::RoyalBlue;
			this->i_label_low_voltage->Location = System::Drawing::Point(283, 94);
			this->i_label_low_voltage->Name = L"i_label_low_voltage";
			this->i_label_low_voltage->Size = System::Drawing::Size(107, 36);
			this->i_label_low_voltage->TabIndex = 35;
			this->i_label_low_voltage->Text = L"  Режим TPlB: \r\nНизковольтный";
			this->i_label_low_voltage->Click += gcnew System::EventHandler(this, &MainForm::label29_Click);
			// 
			// f_button_set_TPlB_t
			// 
			this->f_button_set_TPlB_t->BackColor = System::Drawing::SystemColors::ControlLight;
			this->f_button_set_TPlB_t->Enabled = false;
			this->f_button_set_TPlB_t->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->f_button_set_TPlB_t->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_button_set_TPlB_t->ForeColor = System::Drawing::Color::Crimson;
			this->f_button_set_TPlB_t->Location = System::Drawing::Point(286, 20);
			this->f_button_set_TPlB_t->Name = L"f_button_set_TPlB_t";
			this->f_button_set_TPlB_t->Size = System::Drawing::Size(112, 65);
			this->f_button_set_TPlB_t->TabIndex = 42;
			this->f_button_set_TPlB_t->Text = L"Установить\r\n значение";
			this->f_button_set_TPlB_t->UseVisualStyleBackColor = false;
			this->f_button_set_TPlB_t->Click += gcnew System::EventHandler(this, &MainForm::f_button_set_TPlB_t_Click);
			// 
			// f_textbox_termo_current_ma
			// 
			this->f_textbox_termo_current_ma->AutoSize = true;
			this->f_textbox_termo_current_ma->Font = (gcnew System::Drawing::Font(L"Calibri", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_textbox_termo_current_ma->ForeColor = System::Drawing::Color::Crimson;
			this->f_textbox_termo_current_ma->Location = System::Drawing::Point(142, 59);
			this->f_textbox_termo_current_ma->Name = L"f_textbox_termo_current_ma";
			this->f_textbox_termo_current_ma->Size = System::Drawing::Size(46, 22);
			this->f_textbox_termo_current_ma->TabIndex = 45;
			this->f_textbox_termo_current_ma->Text = L"9000";
			this->f_textbox_termo_current_ma->Click += gcnew System::EventHandler(this, &MainForm::f_textbox_current_ma_Click);
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
			// f_textbox_termo_voltage_V
			// 
			this->f_textbox_termo_voltage_V->AutoSize = true;
			this->f_textbox_termo_voltage_V->Font = (gcnew System::Drawing::Font(L"Calibri", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_textbox_termo_voltage_V->ForeColor = System::Drawing::Color::DarkBlue;
			this->f_textbox_termo_voltage_V->Location = System::Drawing::Point(142, 27);
			this->f_textbox_termo_voltage_V->Name = L"f_textbox_termo_voltage_V";
			this->f_textbox_termo_voltage_V->Size = System::Drawing::Size(28, 22);
			this->f_textbox_termo_voltage_V->TabIndex = 42;
			this->f_textbox_termo_voltage_V->Text = L"24";
			this->f_textbox_termo_voltage_V->Click += gcnew System::EventHandler(this, &MainForm::f_textbox_voltage_V_Click);
			// 
			// f_textbox_set_I_T
			// 
			this->f_textbox_set_I_T->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_textbox_set_I_T->Location = System::Drawing::Point(198, 55);
			this->f_textbox_set_I_T->Name = L"f_textbox_set_I_T";
			this->f_textbox_set_I_T->Size = System::Drawing::Size(63, 29);
			this->f_textbox_set_I_T->TabIndex = 17;
			this->f_textbox_set_I_T->Text = L"9000";
			this->f_textbox_set_I_T->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->f_textbox_set_I_T->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox3_TextChanged);
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
			// f_textbox_set_U_T
			// 
			this->f_textbox_set_U_T->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_textbox_set_U_T->Location = System::Drawing::Point(198, 21);
			this->f_textbox_set_U_T->Name = L"f_textbox_set_U_T";
			this->f_textbox_set_U_T->Size = System::Drawing::Size(63, 29);
			this->f_textbox_set_U_T->TabIndex = 28;
			this->f_textbox_set_U_T->Text = L"24";
			this->f_textbox_set_U_T->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->f_textbox_set_U_T->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox6_TextChanged);
			// 
			// tabpage_TPlB_Magnetron
			// 
			this->tabpage_TPlB_Magnetron->Controls->Add(this->f_button_TPLB_on_M);
			this->tabpage_TPlB_Magnetron->Controls->Add(this->i_label_high_voltage);
			this->tabpage_TPlB_Magnetron->Controls->Add(this->f_button_set_TPlB_m);
			this->tabpage_TPlB_Magnetron->Controls->Add(this->f_textbox_magnetron_current_ma);
			this->tabpage_TPlB_Magnetron->Controls->Add(this->label23);
			this->tabpage_TPlB_Magnetron->Controls->Add(this->f_textbox_magnetron_voltage_V);
			this->tabpage_TPlB_Magnetron->Controls->Add(this->f_textbox_set_I_M);
			this->tabpage_TPlB_Magnetron->Controls->Add(this->label25);
			this->tabpage_TPlB_Magnetron->Controls->Add(this->label26);
			this->tabpage_TPlB_Magnetron->Controls->Add(this->label28);
			this->tabpage_TPlB_Magnetron->Controls->Add(this->f_textbox_set_U_M);
			this->tabpage_TPlB_Magnetron->Location = System::Drawing::Point(4, 24);
			this->tabpage_TPlB_Magnetron->Name = L"tabpage_TPlB_Magnetron";
			this->tabpage_TPlB_Magnetron->Padding = System::Windows::Forms::Padding(3);
			this->tabpage_TPlB_Magnetron->Size = System::Drawing::Size(404, 140);
			this->tabpage_TPlB_Magnetron->TabIndex = 1;
			this->tabpage_TPlB_Magnetron->Text = L"Магнетронное распыление";
			this->tabpage_TPlB_Magnetron->UseVisualStyleBackColor = true;
			// 
			// f_button_TPLB_on_M
			// 
			this->f_button_TPLB_on_M->BackColor = System::Drawing::SystemColors::ControlLight;
			this->f_button_TPLB_on_M->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->f_button_TPLB_on_M->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_button_TPLB_on_M->ForeColor = System::Drawing::Color::Navy;
			this->f_button_TPLB_on_M->Location = System::Drawing::Point(15, 99);
			this->f_button_TPLB_on_M->Name = L"f_button_TPLB_on_M";
			this->f_button_TPLB_on_M->Size = System::Drawing::Size(246, 29);
			this->f_button_TPLB_on_M->TabIndex = 58;
			this->f_button_TPLB_on_M->Text = L"Включить источник тока";
			this->f_button_TPLB_on_M->UseVisualStyleBackColor = false;
			this->f_button_TPLB_on_M->Click += gcnew System::EventHandler(this, &MainForm::f_button_TPLB_on_M_Click);
			// 
			// i_label_high_voltage
			// 
			this->i_label_high_voltage->AutoSize = true;
			this->i_label_high_voltage->BackColor = System::Drawing::Color::White;
			this->i_label_high_voltage->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->i_label_high_voltage->ForeColor = System::Drawing::Color::RoyalBlue;
			this->i_label_high_voltage->Location = System::Drawing::Point(283, 94);
			this->i_label_high_voltage->Name = L"i_label_high_voltage";
			this->i_label_high_voltage->Size = System::Drawing::Size(116, 36);
			this->i_label_high_voltage->TabIndex = 57;
			this->i_label_high_voltage->Text = L"  Режим TPlB: \r\nВысоковольтный";
			// 
			// f_button_set_TPlB_m
			// 
			this->f_button_set_TPlB_m->BackColor = System::Drawing::SystemColors::ControlLight;
			this->f_button_set_TPlB_m->Enabled = false;
			this->f_button_set_TPlB_m->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->f_button_set_TPlB_m->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_button_set_TPlB_m->ForeColor = System::Drawing::Color::Crimson;
			this->f_button_set_TPlB_m->Location = System::Drawing::Point(286, 20);
			this->f_button_set_TPlB_m->Name = L"f_button_set_TPlB_m";
			this->f_button_set_TPlB_m->Size = System::Drawing::Size(112, 64);
			this->f_button_set_TPlB_m->TabIndex = 56;
			this->f_button_set_TPlB_m->Text = L"Установить\r\n значение";
			this->f_button_set_TPlB_m->UseVisualStyleBackColor = false;
			this->f_button_set_TPlB_m->Click += gcnew System::EventHandler(this, &MainForm::f_button_set_TPlB_m_Click);
			// 
			// f_textbox_magnetron_current_ma
			// 
			this->f_textbox_magnetron_current_ma->AutoSize = true;
			this->f_textbox_magnetron_current_ma->Font = (gcnew System::Drawing::Font(L"Calibri", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_textbox_magnetron_current_ma->ForeColor = System::Drawing::Color::Crimson;
			this->f_textbox_magnetron_current_ma->Location = System::Drawing::Point(142, 59);
			this->f_textbox_magnetron_current_ma->Name = L"f_textbox_magnetron_current_ma";
			this->f_textbox_magnetron_current_ma->Size = System::Drawing::Size(37, 22);
			this->f_textbox_magnetron_current_ma->TabIndex = 54;
			this->f_textbox_magnetron_current_ma->Text = L"150";
			this->f_textbox_magnetron_current_ma->Click += gcnew System::EventHandler(this, &MainForm::label21_Click);
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
			// f_textbox_magnetron_voltage_V
			// 
			this->f_textbox_magnetron_voltage_V->AutoSize = true;
			this->f_textbox_magnetron_voltage_V->Font = (gcnew System::Drawing::Font(L"Calibri", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_textbox_magnetron_voltage_V->ForeColor = System::Drawing::Color::DarkBlue;
			this->f_textbox_magnetron_voltage_V->Location = System::Drawing::Point(142, 27);
			this->f_textbox_magnetron_voltage_V->Name = L"f_textbox_magnetron_voltage_V";
			this->f_textbox_magnetron_voltage_V->Size = System::Drawing::Size(37, 22);
			this->f_textbox_magnetron_voltage_V->TabIndex = 51;
			this->f_textbox_magnetron_voltage_V->Text = L"400";
			this->f_textbox_magnetron_voltage_V->Click += gcnew System::EventHandler(this, &MainForm::label24_Click);
			// 
			// f_textbox_set_I_M
			// 
			this->f_textbox_set_I_M->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_textbox_set_I_M->Location = System::Drawing::Point(198, 55);
			this->f_textbox_set_I_M->Name = L"f_textbox_set_I_M";
			this->f_textbox_set_I_M->Size = System::Drawing::Size(63, 29);
			this->f_textbox_set_I_M->TabIndex = 47;
			this->f_textbox_set_I_M->Text = L"0";
			this->f_textbox_set_I_M->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->f_textbox_set_I_M->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox4_TextChanged);
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
			// f_textbox_set_U_M
			// 
			this->f_textbox_set_U_M->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_textbox_set_U_M->Location = System::Drawing::Point(198, 21);
			this->f_textbox_set_U_M->Name = L"f_textbox_set_U_M";
			this->f_textbox_set_U_M->Size = System::Drawing::Size(63, 29);
			this->f_textbox_set_U_M->TabIndex = 49;
			this->f_textbox_set_U_M->Text = L"0";
			this->f_textbox_set_U_M->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->f_textbox_set_U_M->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox5_TextChanged);
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
			this->groupBox_flap->Controls->Add(this->test_b);
			this->groupBox_flap->Controls->Add(this->f_label_flap_auto_info);
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
			// test_b
			// 
			this->test_b->AutoSize = true;
			this->test_b->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->test_b->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->test_b->Location = System::Drawing::Point(156, 23);
			this->test_b->Name = L"test_b";
			this->test_b->Size = System::Drawing::Size(37, 23);
			this->test_b->TabIndex = 24;
			this->test_b->Text = L"0 c.";
			this->test_b->Visible = false;
			this->test_b->Click += gcnew System::EventHandler(this, &MainForm::test_b_Click);
			// 
			// f_label_flap_auto_info
			// 
			this->f_label_flap_auto_info->AutoSize = true;
			this->f_label_flap_auto_info->BackColor = System::Drawing::Color::White;
			this->f_label_flap_auto_info->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_label_flap_auto_info->ForeColor = System::Drawing::Color::RoyalBlue;
			this->f_label_flap_auto_info->Location = System::Drawing::Point(97, 199);
			this->f_label_flap_auto_info->Name = L"f_label_flap_auto_info";
			this->f_label_flap_auto_info->Size = System::Drawing::Size(130, 19);
			this->f_label_flap_auto_info->TabIndex = 24;
			this->f_label_flap_auto_info->Text = L"Ожидание старта";
			// 
			// f_button_auto_start_flap
			// 
			this->f_button_auto_start_flap->BackColor = System::Drawing::SystemColors::ControlLight;
			this->f_button_auto_start_flap->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->f_button_auto_start_flap->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_button_auto_start_flap->ForeColor = System::Drawing::Color::Crimson;
			this->f_button_auto_start_flap->Location = System::Drawing::Point(11, 194);
			this->f_button_auto_start_flap->Name = L"f_button_auto_start_flap";
			this->f_button_auto_start_flap->Size = System::Drawing::Size(83, 29);
			this->f_button_auto_start_flap->TabIndex = 34;
			this->f_button_auto_start_flap->Text = L"Начать";
			this->f_button_auto_start_flap->UseVisualStyleBackColor = false;
			this->f_button_auto_start_flap->Click += gcnew System::EventHandler(this, &MainForm::f_button_auto_start_flap_Click);
			// 
			// I_label_set_time_flap
			// 
			this->I_label_set_time_flap->AutoSize = true;
			this->I_label_set_time_flap->BackColor = System::Drawing::Color::White;
			this->I_label_set_time_flap->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->I_label_set_time_flap->ForeColor = System::Drawing::Color::RoyalBlue;
			this->I_label_set_time_flap->Location = System::Drawing::Point(8, 130);
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
			this->f_textBox_set_time_flap->Location = System::Drawing::Point(171, 127);
			this->f_textBox_set_time_flap->Name = L"f_textBox_set_time_flap";
			this->f_textBox_set_time_flap->Size = System::Drawing::Size(47, 27);
			this->f_textBox_set_time_flap->TabIndex = 19;
			this->f_textBox_set_time_flap->Text = L"100";
			this->f_textBox_set_time_flap->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->f_textBox_set_time_flap->Visible = false;
			// 
			// progressBar_flap
			// 
			this->progressBar_flap->Location = System::Drawing::Point(11, 161);
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
			this->subgroupBox_mode->Location = System::Drawing::Point(16, 60);
			this->subgroupBox_mode->Name = L"subgroupBox_mode";
			this->subgroupBox_mode->Size = System::Drawing::Size(202, 66);
			this->subgroupBox_mode->TabIndex = 16;
			this->subgroupBox_mode->TabStop = false;
			this->subgroupBox_mode->Text = L"Режим работы";
			// 
			// radioButton_flap_auto_mode
			// 
			this->radioButton_flap_auto_mode->AutoSize = true;
			this->radioButton_flap_auto_mode->ForeColor = System::Drawing::Color::Black;
			this->radioButton_flap_auto_mode->Location = System::Drawing::Point(10, 38);
			this->radioButton_flap_auto_mode->Name = L"radioButton_flap_auto_mode";
			this->radioButton_flap_auto_mode->Size = System::Drawing::Size(140, 23);
			this->radioButton_flap_auto_mode->TabIndex = 1;
			this->radioButton_flap_auto_mode->Text = L"Автоматический";
			this->radioButton_flap_auto_mode->UseVisualStyleBackColor = true;
			this->radioButton_flap_auto_mode->CheckedChanged += gcnew System::EventHandler(this, &MainForm::radioButton_flap_auto_mode_CheckedChanged_1);
			this->radioButton_flap_auto_mode->Click += gcnew System::EventHandler(this, &MainForm::radioButton_flap_auto_mode_CheckedChanged);
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
			this->f_button_manual_close_flap->Click += gcnew System::EventHandler(this, &MainForm::f_button_manual_close_flap_Click);
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
			this->f_button_manual_open_flap->Click += gcnew System::EventHandler(this, &MainForm::f_button_manual_open_flap_Click);
			// 
			// i_label_flap_status
			// 
			this->i_label_flap_status->AutoSize = true;
			this->i_label_flap_status->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->i_label_flap_status->ForeColor = System::Drawing::Color::Black;
			this->i_label_flap_status->Location = System::Drawing::Point(37, 45);
			this->i_label_flap_status->Name = L"i_label_flap_status";
			this->i_label_flap_status->Size = System::Drawing::Size(134, 15);
			this->i_label_flap_status->TabIndex = 13;
			this->i_label_flap_status->Text = L"(положение заслонки)";
			// 
			// f_label_flap_status
			// 
			this->f_label_flap_status->AutoSize = true;
			this->f_label_flap_status->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_label_flap_status->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->f_label_flap_status->Location = System::Drawing::Point(63, 21);
			this->f_label_flap_status->Name = L"f_label_flap_status";
			this->f_label_flap_status->Size = System::Drawing::Size(87, 26);
			this->f_label_flap_status->TabIndex = 12;
			this->f_label_flap_status->Text = L"Открыта";
			// 
			// right_down_panel
			// 
			this->right_down_panel->Controls->Add(this->f_stop_button);
			this->right_down_panel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->right_down_panel->Location = System::Drawing::Point(0, 653);
			this->right_down_panel->Name = L"right_down_panel";
			this->right_down_panel->Size = System::Drawing::Size(251, 52);
			this->right_down_panel->TabIndex = 12;
			// 
			// f_stop_button
			// 
			this->f_stop_button->BackColor = System::Drawing::Color::Crimson;
			this->f_stop_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_stop_button->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->f_stop_button->Location = System::Drawing::Point(3, 7);
			this->f_stop_button->Name = L"f_stop_button";
			this->f_stop_button->Size = System::Drawing::Size(245, 42);
			this->f_stop_button->TabIndex = 0;
			this->f_stop_button->Text = L"STOP";
			this->f_stop_button->UseVisualStyleBackColor = false;
			this->f_stop_button->Click += gcnew System::EventHandler(this, &MainForm::f_stop_button_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->f_button_set_temp);
			this->groupBox3->Controls->Add(this->f_textbox_set_temp);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->f_button_on_off_heat);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->f_label_temp_status_deg);
			this->groupBox3->Controls->Add(this->i_label_temp_status);
			this->groupBox3->Controls->Add(this->picture_heating_on);
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
			// f_button_set_temp
			// 
			this->f_button_set_temp->BackColor = System::Drawing::SystemColors::ControlLight;
			this->f_button_set_temp->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->f_button_set_temp->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_button_set_temp->Location = System::Drawing::Point(81, 80);
			this->f_button_set_temp->Name = L"f_button_set_temp";
			this->f_button_set_temp->Size = System::Drawing::Size(137, 29);
			this->f_button_set_temp->TabIndex = 18;
			this->f_button_set_temp->Text = L"Установить";
			this->f_button_set_temp->UseVisualStyleBackColor = false;
			this->f_button_set_temp->Click += gcnew System::EventHandler(this, &MainForm::f_button_set_temp_Click);
			// 
			// f_textbox_set_temp
			// 
			this->f_textbox_set_temp->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_textbox_set_temp->Location = System::Drawing::Point(12, 80);
			this->f_textbox_set_temp->Name = L"f_textbox_set_temp";
			this->f_textbox_set_temp->Size = System::Drawing::Size(63, 29);
			this->f_textbox_set_temp->TabIndex = 17;
			this->f_textbox_set_temp->Text = L"100";
			this->f_textbox_set_temp->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			this->f_label_temp_status_deg->Location = System::Drawing::Point(92, 20);
			this->f_label_temp_status_deg->Name = L"f_label_temp_status_deg";
			this->f_label_temp_status_deg->Size = System::Drawing::Size(52, 26);
			this->f_label_temp_status_deg->TabIndex = 12;
			this->f_label_temp_status_deg->Text = L"720°";
			// 
			// i_label_temp_status
			// 
			this->i_label_temp_status->AutoSize = true;
			this->i_label_temp_status->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->i_label_temp_status->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->i_label_temp_status->Location = System::Drawing::Point(65, 20);
			this->i_label_temp_status->Name = L"i_label_temp_status";
			this->i_label_temp_status->Size = System::Drawing::Size(32, 26);
			this->i_label_temp_status->TabIndex = 11;
			this->i_label_temp_status->Text = L"T=";
			this->i_label_temp_status->Click += gcnew System::EventHandler(this, &MainForm::label11_Click);
			// 
			// picture_heating_on
			// 
			this->picture_heating_on->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_heating_on.Image")));
			this->picture_heating_on->Location = System::Drawing::Point(169, 30);
			this->picture_heating_on->Name = L"picture_heating_on";
			this->picture_heating_on->Size = System::Drawing::Size(54, 42);
			this->picture_heating_on->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picture_heating_on->TabIndex = 19;
			this->picture_heating_on->TabStop = false;
			this->picture_heating_on->Visible = false;
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
			this->groupBox1->Size = System::Drawing::Size(231, 85);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Давление системы";
			// 
			// f_label_WRG_status
			// 
			this->f_label_WRG_status->AutoSize = true;
			this->f_label_WRG_status->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_label_WRG_status->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->f_label_WRG_status->Location = System::Drawing::Point(80, 50);
			this->f_label_WRG_status->Name = L"f_label_WRG_status";
			this->f_label_WRG_status->Size = System::Drawing::Size(125, 26);
			this->f_label_WRG_status->TabIndex = 3;
			this->f_label_WRG_status->Text = L"5x10+3 mbar";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label3->Location = System::Drawing::Point(15, 50);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 26);
			this->label3->TabIndex = 2;
			this->label3->Text = L"WRG";
			// 
			// f_label_APG_status
			// 
			this->f_label_APG_status->AutoSize = true;
			this->f_label_APG_status->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_label_APG_status->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->f_label_APG_status->Location = System::Drawing::Point(80, 22);
			this->f_label_APG_status->Name = L"f_label_APG_status";
			this->f_label_APG_status->Size = System::Drawing::Size(125, 26);
			this->f_label_APG_status->TabIndex = 1;
			this->f_label_APG_status->Text = L"5x10+3 mbar";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::DarkSlateBlue;
			this->label1->Location = System::Drawing::Point(15, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 26);
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
			this->groupBox5->Controls->Add(this->f_label_system_status);
			this->groupBox5->Controls->Add(this->f_button_block_form);
			this->groupBox5->Controls->Add(this->data_label);
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
			// f_label_system_status
			// 
			this->f_label_system_status->AutoSize = true;
			this->f_label_system_status->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_label_system_status->ForeColor = System::Drawing::Color::DarkGreen;
			this->f_label_system_status->Location = System::Drawing::Point(320, 17);
			this->f_label_system_status->Name = L"f_label_system_status";
			this->f_label_system_status->Size = System::Drawing::Size(52, 19);
			this->f_label_system_status->TabIndex = 13;
			this->f_label_system_status->Text = L"Статус";
			this->f_label_system_status->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// f_button_block_form
			// 
			this->f_button_block_form->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->f_button_block_form->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_button_block_form->ForeColor = System::Drawing::Color::Crimson;
			this->f_button_block_form->Location = System::Drawing::Point(227, 58);
			this->f_button_block_form->Name = L"f_button_block_form";
			this->f_button_block_form->Size = System::Drawing::Size(191, 31);
			this->f_button_block_form->TabIndex = 12;
			this->f_button_block_form->Text = L"Заблокировать экран";
			this->f_button_block_form->UseVisualStyleBackColor = true;
			this->f_button_block_form->Click += gcnew System::EventHandler(this, &MainForm::f_button_block_form_Click);
			// 
			// data_label
			// 
			this->data_label->AutoSize = true;
			this->data_label->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->data_label->ForeColor = System::Drawing::Color::Crimson;
			this->data_label->Location = System::Drawing::Point(320, 36);
			this->data_label->Name = L"data_label";
			this->data_label->Size = System::Drawing::Size(87, 19);
			this->data_label->TabIndex = 11;
			this->data_label->Text = L"Ожидание ";
			this->data_label->TextAlign = System::Drawing::ContentAlignment::TopRight;
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
			this->f_button_connect_to_PLC->Size = System::Drawing::Size(201, 31);
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
			this->picture_connection->Size = System::Drawing::Size(33, 23);
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
			this->i_button_connect_to_PLC->Location = System::Drawing::Point(45, 27);
			this->i_button_connect_to_PLC->Name = L"i_button_connect_to_PLC";
			this->i_button_connect_to_PLC->Size = System::Drawing::Size(224, 19);
			this->i_button_connect_to_PLC->TabIndex = 1;
			this->i_button_connect_to_PLC->Text = L"Cоединение с PLC установлено";
			// 
			// Work_Timer
			// 
			this->Work_Timer->Tick += gcnew System::EventHandler(this, &MainForm::Timer_Tick);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Controls->Add(this->down_panel);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel4->Location = System::Drawing::Point(317, 479);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(436, 250);
			this->panel4->TabIndex = 9;
			// 
			// down_panel
			// 
			this->down_panel->Controls->Add(this->groupBox8);
			this->down_panel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->down_panel->Location = System::Drawing::Point(0, 0);
			this->down_panel->Name = L"down_panel";
			this->down_panel->Size = System::Drawing::Size(436, 250);
			this->down_panel->TabIndex = 0;
			this->down_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::down_panel_Paint);
			// 
			// Flap_auto_timer
			// 
			this->Flap_auto_timer->Tick += gcnew System::EventHandler(this, &MainForm::Flap_auto_timer_Tick);
			// 
			// panel_unblock
			// 
			this->panel_unblock->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panel_unblock->BackColor = System::Drawing::Color::LightGray;
			this->panel_unblock->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel_unblock->Controls->Add(this->f_button_unblock);
			this->panel_unblock->Controls->Add(this->f_textbox_pas);
			this->panel_unblock->Controls->Add(this->f_textbox_log);
			this->panel_unblock->Controls->Add(this->label21);
			this->panel_unblock->Controls->Add(this->label24);
			this->panel_unblock->Location = System::Drawing::Point(84, 99);
			this->panel_unblock->Name = L"panel_unblock";
			this->panel_unblock->Size = System::Drawing::Size(276, 144);
			this->panel_unblock->TabIndex = 11;
			this->panel_unblock->Visible = false;
			// 
			// f_button_unblock
			// 
			this->f_button_unblock->BackColor = System::Drawing::SystemColors::ControlLight;
			this->f_button_unblock->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->f_button_unblock->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_button_unblock->ForeColor = System::Drawing::Color::SeaGreen;
			this->f_button_unblock->Location = System::Drawing::Point(18, 103);
			this->f_button_unblock->Name = L"f_button_unblock";
			this->f_button_unblock->Size = System::Drawing::Size(237, 29);
			this->f_button_unblock->TabIndex = 19;
			this->f_button_unblock->Text = L"Разблокировать";
			this->f_button_unblock->UseVisualStyleBackColor = false;
			this->f_button_unblock->Click += gcnew System::EventHandler(this, &MainForm::f_button_unblock_Click);
			// 
			// f_textbox_pas
			// 
			this->f_textbox_pas->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_textbox_pas->Location = System::Drawing::Point(79, 63);
			this->f_textbox_pas->Name = L"f_textbox_pas";
			this->f_textbox_pas->Size = System::Drawing::Size(176, 27);
			this->f_textbox_pas->TabIndex = 9;
			this->f_textbox_pas->UseSystemPasswordChar = true;
			// 
			// f_textbox_log
			// 
			this->f_textbox_log->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_textbox_log->Location = System::Drawing::Point(79, 23);
			this->f_textbox_log->Name = L"f_textbox_log";
			this->f_textbox_log->Size = System::Drawing::Size(176, 27);
			this->f_textbox_log->TabIndex = 8;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(14, 67);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(59, 19);
			this->label21->TabIndex = 7;
			this->label21->Text = L"Пароль";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->Location = System::Drawing::Point(14, 27);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(51, 19);
			this->label24->TabIndex = 6;
			this->label24->Text = L"Логин";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->UVN_picturebox_open);
			this->panel1->Controls->Add(this->UVN_picturebox_close);
			this->panel1->Controls->Add(this->panel_unblock);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(317, 133);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(436, 346);
			this->panel1->TabIndex = 11;
			// 
			// UVN_picturebox_open
			// 
			this->UVN_picturebox_open->Dock = System::Windows::Forms::DockStyle::Fill;
			this->UVN_picturebox_open->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"UVN_picturebox_open.Image")));
			this->UVN_picturebox_open->Location = System::Drawing::Point(0, 0);
			this->UVN_picturebox_open->Name = L"UVN_picturebox_open";
			this->UVN_picturebox_open->Size = System::Drawing::Size(436, 346);
			this->UVN_picturebox_open->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->UVN_picturebox_open->TabIndex = 13;
			this->UVN_picturebox_open->TabStop = false;
			this->UVN_picturebox_open->Visible = false;
			// 
			// UVN_picturebox_close
			// 
			this->UVN_picturebox_close->Dock = System::Windows::Forms::DockStyle::Fill;
			this->UVN_picturebox_close->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"UVN_picturebox_close.Image")));
			this->UVN_picturebox_close->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"UVN_picturebox_close.InitialImage")));
			this->UVN_picturebox_close->Location = System::Drawing::Point(0, 0);
			this->UVN_picturebox_close->Name = L"UVN_picturebox_close";
			this->UVN_picturebox_close->Size = System::Drawing::Size(436, 346);
			this->UVN_picturebox_close->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->UVN_picturebox_close->TabIndex = 12;
			this->UVN_picturebox_close->TabStop = false;
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(177, 6);
			// 
			// MainForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1004, 729);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->right_panel);
			this->Controls->Add(this->left_panel);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->ImeMode = System::Windows::Forms::ImeMode::Katakana;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UVN Control System 2.0 ";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::MainForm_FormClosing);
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
			this->tabpage_TPlB->ResumeLayout(false);
			this->tabpage_TPlB_Termo->ResumeLayout(false);
			this->tabpage_TPlB_Termo->PerformLayout();
			this->tabpage_TPlB_Magnetron->ResumeLayout(false);
			this->tabpage_TPlB_Magnetron->PerformLayout();
			this->right_panel->ResumeLayout(false);
			this->groupBox_flap->ResumeLayout(false);
			this->groupBox_flap->PerformLayout();
			this->subgroupBox_mode->ResumeLayout(false);
			this->subgroupBox_mode->PerformLayout();
			this->right_down_panel->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_heating_on))->EndInit();
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
			this->panel_unblock->ResumeLayout(false);
			this->panel_unblock->PerformLayout();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UVN_picturebox_open))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UVN_picturebox_close))->EndInit();
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

		flap_auto_mode = true;
		groupBox_flap->Height = 229;
		f_button_manual_close_flap->Visible = false;
		f_button_manual_open_flap->Visible = false;
		//f_button_auto_mode_flap_start->Visible = true;
		//f_button_auto_mode_flap_stop->Visible = true;
		I_label_set_time_flap->Visible = true;
		progressBar_flap->Visible = true;
		f_textBox_set_time_flap->Visible = true;
	

}
private: System::Void radioButton_flap_manual_mode_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	flap_auto_mode = false;
	groupBox_flap->Height = 180;
	f_button_manual_close_flap->Visible = true;
	f_button_manual_open_flap->Visible = true;
	//f_button_auto_mode_flap_start->Visible = false;
	//f_button_auto_mode_flap_stop->Visible = false;
	I_label_set_time_flap->Visible = false;
	progressBar_flap->Visible = false;
	f_textBox_set_time_flap->Visible = false;
	f_label_flap_auto_info->Text = "Ожидание старта";
}
private: System::Void f_button_exit_Click(System::Object^ sender, System::EventArgs^ e) {

	System::Windows::Forms::Application::Exit();
}
private: System::Void MainForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {


}


private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	currentData->command = currentData->nagrev;


}
private: System::Void f_button_connect_to_PLC_Click(System::Object^ sender, System::EventArgs^ e) {
	
	PLC_connect();
/*f_button_connect_to_PLC->Enabled = false;
	picture_connection->Visible = true;
	picture_not_connection->Visible = false;
	f_button_connect_to_PLC->Enabled = false;

	i_button_connect_to_PLC->Text = "Соединение с PLC установлено";
	i_button_connect_to_PLC->ForeColor = System::Drawing::Color::SeaGreen;

	f_label_recording->Visible = true;
	i_label_name_recording->Visible = true;
	f_label_name_recording->Visible = true;
	pictureBox_recording->Visible = true;
*/


}
private: System::Void Timer_Tick(System::Object^ sender, System::EventArgs^ e) {

	if (currentData->tick%2!=0) {							//Читаем, если тик нечетный

		data_label->ForeColor = System::Drawing::Color::SeaGreen;

		currentData->date_to_array();

		Read_PLC_data();

		update_values();

		PLC_connecting_status();

		process_R_quants();

		currentData->ShareMemToLocal();

	}

	else if (currentData->tick % 2 == 0) {						//Отправляем, если тик четный

		Write_command(currentData->command);

		Write_PLC_data();

		currentData->command = 0;

	}


	if (modbusform->form_open) {

		modbusform->modbusform_open(currentData->main_connecting_status, currentData->share_mem);

	}

	currentData->tick++;


	if (currentData->tick % 2 != 0)								//Обработка отображения времени

		{

			currentData->work_time++;
			data_label->Text = "Старт " + currentData->work_time.ToString() + " с.";

		}


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

	if (f_button_start_stop_PSV1->Text == "Включить PSV1" & f_button_start_stop_PSV2->Text == "Включить PSV2")
	{
		currentData->command = currentData->gas_PSV1;
		currentData->set_PSV1 = 1800;
		currentData->STime_gases = 0;
	}
	else if (f_button_start_stop_PSV1->Text == "Выключить PSV1") {

		currentData->command = currentData->gas_PSV1;
		currentData->set_PSV1 = 0;


	}

/*
	if (f_button_start_stop_PSV1->Text=="Включить PSV1") {
	
		
		currentData->command = currentData->gas_PSV1;
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

		currentData->command = currentData->gas_PSV1;
		f_button_start_stop_PSV1->Text = "Включить PSV1";
		f_button_start_stop_PSV1->ForeColor = System::Drawing::Color::RoyalBlue;

		f_button_PSV1_p30mv->Enabled = false;
		f_button_PSV1_m30mv->Enabled = false;

		//добавить функцию включения дискретного управ на ПЛК
		currentData->set_PSV1 = 0;
		f_label_PSV1_status_mV->Text = currentData->set_PSV1.ToString();

	}


	*/
	

}
private: System::Void f_button_PSV1_p30mv_Click(System::Object^ sender, System::EventArgs^ e) {

	currentData->set_PSV1 += 30;
	//f_label_PSV1_status_mV->Text = currentData->set_PSV1.ToString();
}	
private: System::Void f_button_PSV1_m30mv_Click(System::Object^ sender, System::EventArgs^ e) {

	currentData->set_PSV1 -= 30;
	//f_label_PSV1_status_mV->Text = currentData->set_PSV1.ToString();
}
private: System::Void f_button_start_stop_PSV2_Click(System::Object^ sender, System::EventArgs^ e) {

	if (f_button_start_stop_PSV1->Text == "Включить PSV1" & f_button_start_stop_PSV2->Text == "Включить PSV2")
	{
		currentData->command = currentData->gas_PSV2;
		currentData->STime_gases = 0;
		currentData->set_PSV2 = 1800;
	}

	else if (f_button_start_stop_PSV2->Text == "Выключить PSV2") {

		currentData->command = currentData->gas_PSV2;
		currentData->set_PSV2 = 0;
	}
	

	/*

	if (f_button_start_stop_PSV2->Text == "Включить PSV2") {


		currentData->command = currentData->gas_PSV2;
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

		currentData->command = currentData->gas_PSV2;
		f_button_start_stop_PSV2->Text = "Включить PSV2";
		f_button_start_stop_PSV2->ForeColor = System::Drawing::Color::RoyalBlue;

		f_button_PSV2_p30mv->Enabled = false;
		f_button_PSV2_m30mv->Enabled = false;

		//добавить функцию включения дискретного управ на ПЛК
		currentData->set_PSV2 = 0;
		f_label_PSV2_status_mV->Text = currentData->set_PSV2.ToString();

	}
	*/
}
private: System::Void f_button_PSV2_p30mv_Click(System::Object^ sender, System::EventArgs^ e) {

	currentData->set_PSV2 += 30;
}
private: System::Void f_button_PSV2_m30mv_Click(System::Object^ sender, System::EventArgs^ e) {

	currentData->set_PSV2 -= 30;
}
private: System::Void f_button_start_pump_Click(System::Object^ sender, System::EventArgs^ e) {
	
	currentData->STime_start_vacuum = 0;
	currentData->STime_vacuum = 0;
	currentData->command = currentData->vacuum_start;

	//f_button_stop_pump->Enabled = true;
	//f_button_start_pump->Enabled = false;
}
private: System::Void f_button_stop_pump_Click(System::Object^ sender, System::EventArgs^ e) {
	
	currentData->STime_stop_vacuum = 0;
	currentData->command = currentData->vacuum_stop;
	//f_button_start_pump->Enabled = true;
	//f_button_stop_pump->Enabled = false;

}
private: System::Void f_button_set_butterfly_Click(System::Object^ sender, System::EventArgs^ e) {

	//void mvToPercent(int mV) {

	//	return mV / 100;

	//}
	//f_label_batterfly_status->


	if (i_label_set_butterfly->Text == "Задать положение 0-100%") {

		if (Convert::ToInt32(f_textbox_butterfly_pos->Text)<=100) {

			currentData->set_BV = Convert::ToInt32(f_textbox_butterfly_pos->Text)*100;
			f_label_batterfly_status->Text = (currentData->set_BV/100).ToString() + "%";
		}

		else if (Convert::ToInt32(f_textbox_butterfly_pos->Text) > 100)
		
			MessageBox::Show("Максимальное положение клапана бабобочки - 100%", "UVN Control System 2.0", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}

	if (i_label_set_butterfly->Text == "Задать положение 0-1000 мВ") {

		if (Convert::ToInt32(f_textbox_butterfly_pos->Text) <= 10000) {
			currentData->set_BV = Convert::ToInt32(f_textbox_butterfly_pos->Text);
			f_label_batterfly_status->Text = currentData->set_BV.ToString() + " мВ";
		}

		else if (Convert::ToInt32(f_textbox_butterfly_pos->Text) > 10000)

			MessageBox::Show("Максимальное положение клапана бабобочки соответствует значению 10000 мВ", "UVN Control System 2.0", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}


}
private: System::Void menu_strip_butterfly_mV_Click(System::Object^ sender, System::EventArgs^ e) {

	menu_strip_butterfly_percent->Enabled = true;
	menu_strip_butterfly_mV->Enabled = false;
	i_label_set_butterfly->Text = "Задать положение 0-1000 мВ";

	if (f_label_batterfly_status->Text != "-") {
		
		f_label_batterfly_status->Text = currentData->set_BV.ToString()+" мВ";

	}

}
private: System::Void menu_strip_butterfly_percent_Click(System::Object^ sender, System::EventArgs^ e) {

	menu_strip_butterfly_percent->Enabled = false;
	menu_strip_butterfly_mV->Enabled = true;
	i_label_set_butterfly->Text = "Задать положение 0-100%";

	if (f_label_batterfly_status->Text != "-") {

		f_label_batterfly_status->Text = (currentData->set_BV/100).ToString() + "%";

	}

}
private: System::Void f_button_manual_open_flap_Click(System::Object^ sender, System::EventArgs^ e) {


	currentData->command = currentData->flap;
	/* 
	f_button_manual_open_flap->Enabled = false;
	f_button_manual_close_flap->Enabled = true;
	UVN_picturebox_open->Visible = true;
	//UVN_picturebox_close->Visible = false;
	f_label_flap_status->Text = "Открыта";
	flap_open = true;
	*/
}
private: System::Void f_button_manual_close_flap_Click(System::Object^ sender, System::EventArgs^ e) {

	currentData->command = currentData->flap;

	/*
	
	f_button_manual_open_flap->Enabled = true;
	f_button_manual_close_flap->Enabled = false;
	UVN_picturebox_open->Visible = false;
	//UVN_picturebox_close->Visible = true;
	flap_open = false;

	f_label_flap_status->Text = "Закрыта";
	
	*/
	

}
private: System::Void f_button_auto_start_flap_Click(System::Object^ sender, System::EventArgs^ e) {

	currentData->command = currentData->flap;

	flap_auto_mode = true;

	//if (f_button_auto_start_flap->Text=="Начать") {

		set_flap_auto_time = Convert::ToInt32(f_textBox_set_time_flap->Text);

		flap_progress = 100/set_flap_auto_time;

		flap_open = false;

		Flap_auto_timer->Enabled = true;

		Flap_auto_timer->Interval = 1000;

		//test_b->Visible = true;

		//f_button_auto_start_flap->Text = "Стоп";

		//UVN_picturebox_open->Visible = true;

		//UVN_picturebox_close->Visible = false;
	//}

	//else if  (f_button_auto_start_flap->Text == "Стоп") {
//
	//	flap_auto_mode = false;

		//set_flap_auto_time = Convert::ToInt32(f_textBox_set_time_flap->Text);

	//	Flap_auto_timer->Enabled = false;

		//f_button_auto_start_flap->Text = "Начать";

//		flap_auto_time = 0;


	//	}
	

}

private: System::Void Flap_auto_timer_Tick(System::Object^ sender, System::EventArgs^ e) {
	
	if (currentData->rg_dc & currentData->masckon[0] != 0) {

		if (flap_auto_time != set_flap_auto_time) {

			f_label_flap_status->Text = "Открыта";

			flap_open = true;

			flap_auto_time++;

			f_button_manual_open_flap->Enabled = true;
			f_button_manual_close_flap->Enabled = false;



			progressBar_flap->Value = flap_auto_time * flap_progress;

			test_b->Text = flap_auto_time.ToString() + " c.";
			UVN_picturebox_open->Visible = true;
			f_label_flap_auto_info->ForeColor = System::Drawing::Color::Crimson;
			f_label_flap_auto_info->Text = "Идет процесс";

		}

		else {

			currentData->command = currentData->flap;
			//Flap_auto_timer->Enabled = false;
			//flap_open = true;

		}
	}

	else if (((currentData->rg_dc & currentData->masckon[0]) == 0)&&flap_open) {

			f_label_flap_status->Text = "Закрыта";

			progressBar_flap->Value = 0;

			f_button_auto_start_flap->Text = "Начать";

			flap_auto_time = 0;

			f_label_flap_auto_info->ForeColor = System::Drawing::Color::RoyalBlue;

			f_label_flap_auto_info->Text = "Процесс окончен";

			f_button_manual_open_flap->Enabled = true;
			f_button_manual_close_flap->Enabled = false;

			f_label_flap_status->Text = "Закрыта";

			if (!status_block_form) {

				UVN_picturebox_open->Visible = false;
				UVN_picturebox_close->Visible = true;

			}

			Flap_auto_timer->Enabled = false;
			flap_open = false;
		
	}
	
}
private: System::Void test_b_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void f_button_block_form_Click(System::Object^ sender, System::EventArgs^ e) {

		MainForm_block();

		status_block_form = true;
		UVN_picturebox_close->Visible = false;
		UVN_picturebox_open->Visible = false;
	
		panel_unblock->Visible = true;
		panel_unblock->Enabled = true;
		f_textbox_log->Text = user->ID;
		f_textbox_log->Enabled = false;
		f_label_system_status->Text = "Ожидание";
	
}
private: System::Void f_button_unblock_Click(System::Object^ sender, System::EventArgs^ e) {


	if (user->get_login(f_textbox_log->Text, f_textbox_pas->Text)) {
		
		//status_block_form = true;
		access_user();

		if (flap_open) {

			UVN_picturebox_close->Visible = true;
			UVN_picturebox_open->Visible= true;
		}

		else if (!flap_open) {

			UVN_picturebox_close->Visible = true;
			UVN_picturebox_open->Visible = false;
		}
	}

	
}
private: System::Void studentToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	panel_unblock->Visible = true;
	panel_unblock->Enabled = true;
	f_textbox_log->Text = "student";
	f_textbox_log->Enabled = false;
	UVN_picturebox_close->Visible = false;
	UVN_picturebox_open->Visible = false;
}


private: System::Void f_button_TPLB_on_T_Click(System::Object^ sender, System::EventArgs^ e) {


	if (f_button_TPLB_on_T->Text == "Включить источник тока") {

		termo_mode = true;
		currentData->command = currentData->TPlB_LV;
	}
		else if (f_button_TPLB_on_T->Text == "Выключить источник тока") {

		termo_mode = false;

	}

	/* if (f_button_TPLB_on_T->Text == "Включить источник тока") {

		currentData->command = currentData->TPlB_LV;
		f_button_TPLB_on_T->Text = "Выключить источник тока";
		f_button_TPLB_on_T->ForeColor = System::Drawing::Color::Crimson;
		f_button_set_TPlB_t->Enabled = true;
		tabpage_TPlB_Magnetron->Enabled = false;




	}

	else if (f_button_TPLB_on_T->Text == "Выключить источник тока") {

		currentData->command = currentData->TPlB_LV;
		f_button_TPLB_on_T->Text = "Включить источник тока";
		f_button_TPLB_on_T->ForeColor = System::Drawing::Color::Navy;
		f_button_set_TPlB_t->Enabled = false;
		tabpage_TPlB_Magnetron->Enabled = true;


	}
	*/
}
private: System::Void f_button_TPLB_on_M_Click(System::Object^ sender, System::EventArgs^ e) {


	if (f_button_TPLB_on_M->Text == "Включить источник тока") {

		magnentron_mode = true;

		currentData->command = currentData->TPlB_HV;

		currentData->STime_TPlB = 0;
	}

	else if (f_button_TPLB_on_M->Text == "Выключить источник тока") {

		magnentron_mode = false;

	}



	/*
	if (f_button_TPLB_on_M->Text == "Включить источник тока") {

		currentData->command = currentData->TPlB_HV;
		f_button_TPLB_on_M->Text = "Выключить источник тока";
		f_button_TPLB_on_M->ForeColor = System::Drawing::Color::Crimson;
		f_button_set_TPlB_m->Enabled = true;
		tabpage_TPlB_Termo->Enabled = false;

	}

	else if (f_button_TPLB_on_M->Text == "Выключить источник тока") {

		currentData->command = currentData->TPlB_HV;
		f_button_TPLB_on_M->Text = "Включить источник тока";
		f_button_TPLB_on_M->ForeColor = System::Drawing::Color::Navy;
		f_button_set_TPlB_m->Enabled = false;
		tabpage_TPlB_Termo->Enabled = true;

	}

	*/
}
private: System::Void network_toolset_Click(System::Object^ sender, System::EventArgs^ e) {

	//modbusform_open_status=true;
	modbusform->form_open = true;
	modbusform->Show();

}
private: System::Void f_button_set_temp_Click(System::Object^ sender, System::EventArgs^ e) {

	currentData->set_temp=Convert::ToInt32(f_textbox_set_temp->Text);


}
private: System::Void f_button_set_TPlB_t_Click(System::Object^ sender, System::EventArgs^ e) {

	currentData->set_TPlB_U = Convert::ToInt32(f_textbox_set_U_T->Text);
	currentData->set_TPlB_I = Convert::ToInt32(f_textbox_set_I_T->Text);

}
private: System::Void f_button_set_TPlB_m_Click(System::Object^ sender, System::EventArgs^ e) {

	currentData->set_TPlB_U = Convert::ToInt32(f_textbox_set_U_M->Text);
	currentData->set_TPlB_I = Convert::ToInt32(f_textbox_set_I_M->Text);

}
private: System::Void pid_toolset_Click(System::Object^ sender, System::EventArgs^ e) {

	pidform->Show();

}


private: System::Void MainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {


	if (MessageBox::Show("Вы точно хотите закрыть приложение?", "UVN Control System 2.0", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
	{
		Environment::Exit(0); // убивает полностью весь процесс, в отличие от Application()

	}

	else e->Cancel = true;
}
private: System::Void strip_admin_user_Click(System::Object^ sender, System::EventArgs^ e) {

	panel_unblock->Visible = true;
	panel_unblock->Enabled = true;
	f_textbox_log->Text = "admin";
	f_textbox_log->Enabled = false;
	UVN_picturebox_close->Visible = false;
	UVN_picturebox_open->Visible = false;

}
private: System::Void label42_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton_flap_auto_mode_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {

	flap_auto_mode = true;

}
};
}
