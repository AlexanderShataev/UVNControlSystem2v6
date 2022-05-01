#pragma once
#include "windows.h"

namespace UVNControlSystem2v6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace EasyModbus;

	#define ARRAY_SIZE 2;

	/// <summary>
	/// Сводка для ModbusForm
	/// </summary>

	public ref class ModbusForm : public System::Windows::Forms::Form
	{

	public:  ModbusClient^ modbus = gcnew ModbusClient();


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Timer^ modbus_read_sharemem;
	public:

	public:

	public:


		bool f_ReadHoldingRegisters=false;
		bool form_open;
	private: System::Windows::Forms::PictureBox^ pictureBoxmodbus;
	public:

		array<int>^ share_mem_readholdings = gcnew array<int>(30);


		void clearform() {

			modbustst_timer->Enabled = false;
			lstRegValues->Items->Clear();
			form_open = false;
			connecting_status();
			this->Hide();
		}

		void modbusform_open (bool f_main_connecting_status, array<int>^ share_mem) {

			int startAddress = Convert::ToInt16(f_textbox_start_bit->Text);
			int quantity = Convert::ToInt16(f_textbox_lenght_bit->Text);

			if (f_main_connecting_status) {

				f_label_status->Text = "UVN 2.0 connected to PLC";
				share_mem_readholdings = share_mem;


				if (!modbus_read_sharemem->Enabled) {

					modbus_read_sharemem->Enabled = true;
					modbus_read_sharemem->Interval = 1000;
				}

				groupbox_holding_registers->Enabled = false;
				groupBox_modbus_settool->Enabled = false;

			}

				else if (!f_main_connecting_status) {

					modbus_read_sharemem->Enabled = false;
					connecting_status();

				}

			

		}

		
		void ReadHoldingRegisters(array<int>^ DataArray) {

			try {

				if (form_open) {

					lstRegValues->Items->Clear();
					//for (int values)
					for (int i = 0; i < DataArray->Length; i++) {
						if (i < 9) {

							lstRegValues->Items->Add("ShareMem[" + i + "]      ||    Holding Register " + (i + 1) + "      ||    " + DataArray[i]);

						}

						else if (i > 9) {

							lstRegValues->Items->Add("ShareMem[" + i + "]    ||    Holding Register " + (i + 1) + "    ||    " + DataArray[i]);

						}

						else if (i = 9) {

							lstRegValues->Items->Add("ShareMem[" + i + "]      ||    Holding Register " + (i + 1) + "    ||    " + DataArray[i]);

						}
					}
				}

			}

			catch (System::Exception^) {

				MessageBox::Show("Ошибка подключения", "Закрытие");
				modbus_read_sharemem->Enabled = false;

			}

		}

		void connecting_status() {

			if (modbus->Connected) {

				f_label_status->Text = "Connected";
				groupbox_holding_registers->Enabled = true;

			}
			else if (!modbus->Connected) {

				f_label_status->Text = "Not connected";
				groupbox_holding_registers->Enabled = false;


			}

		}
			 
		void connect() {

			String^ ipAddress = f_textbox_IP->Text;
			String^ Port = f_textbox_IP->Text;
			

			//ModbusProtocol^ TestMod = gcnew ModbusProtocol(ipAddress);
			modbus->IPAddress = ipAddress;
			modbus->Port = 502;


			modbustst_timer->Enabled = true;
			modbustst_timer->Interval = 1000;

			try {

				modbus->Connect();

				if (modbus->Connected) {

					f_label_status->Text = "Connected";
				}
			}

			catch (System::Exception^) {

				f_label_status->Text = "Error";

			}



		}




		ModbusForm(void)
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
		~ModbusForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ f_button_connect;
	protected:
	private: System::Windows::Forms::TextBox^ f_textbox_IP;
	private: System::Windows::Forms::TextBox^ f_textbox_socket;
	private: System::Windows::Forms::Label^ i_label_IP;
	private: System::Windows::Forms::Label^ i_label_port_modbus;
	private: System::Windows::Forms::Label^ f_label_status;




	private: System::Windows::Forms::Button^ f_button_disconnect;
	private: System::Windows::Forms::GroupBox^ groupBox_modbus_settool;
	private: System::Windows::Forms::GroupBox^ groupbox_holding_registers;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ListBox^ lstRegValues;
	private: System::Windows::Forms::TextBox^ f_textbox_start_bit;
	private: System::Windows::Forms::TextBox^ f_textbox_lenght_bit;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ f_button_read_tstmodbus;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Timer^ modbustst_timer;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ModbusForm::typeid));
			this->f_button_connect = (gcnew System::Windows::Forms::Button());
			this->f_textbox_IP = (gcnew System::Windows::Forms::TextBox());
			this->f_textbox_socket = (gcnew System::Windows::Forms::TextBox());
			this->i_label_IP = (gcnew System::Windows::Forms::Label());
			this->i_label_port_modbus = (gcnew System::Windows::Forms::Label());
			this->f_label_status = (gcnew System::Windows::Forms::Label());
			this->f_button_disconnect = (gcnew System::Windows::Forms::Button());
			this->groupBox_modbus_settool = (gcnew System::Windows::Forms::GroupBox());
			this->groupbox_holding_registers = (gcnew System::Windows::Forms::GroupBox());
			this->f_textbox_start_bit = (gcnew System::Windows::Forms::TextBox());
			this->f_textbox_lenght_bit = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->f_button_read_tstmodbus = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lstRegValues = (gcnew System::Windows::Forms::ListBox());
			this->modbustst_timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->modbus_read_sharemem = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBoxmodbus = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox_modbus_settool->SuspendLayout();
			this->groupbox_holding_registers->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxmodbus))->BeginInit();
			this->SuspendLayout();
			// 
			// f_button_connect
			// 
			this->f_button_connect->Location = System::Drawing::Point(135, 19);
			this->f_button_connect->Name = L"f_button_connect";
			this->f_button_connect->Size = System::Drawing::Size(96, 30);
			this->f_button_connect->TabIndex = 0;
			this->f_button_connect->Text = L"Connect";
			this->f_button_connect->UseVisualStyleBackColor = true;
			this->f_button_connect->Click += gcnew System::EventHandler(this, &ModbusForm::f_button_connect_Click);
			// 
			// f_textbox_IP
			// 
			this->f_textbox_IP->Location = System::Drawing::Point(62, 25);
			this->f_textbox_IP->Name = L"f_textbox_IP";
			this->f_textbox_IP->Size = System::Drawing::Size(56, 20);
			this->f_textbox_IP->TabIndex = 1;
			this->f_textbox_IP->Text = L"127.0.0.1";
			// 
			// f_textbox_socket
			// 
			this->f_textbox_socket->Location = System::Drawing::Point(62, 60);
			this->f_textbox_socket->Name = L"f_textbox_socket";
			this->f_textbox_socket->Size = System::Drawing::Size(56, 20);
			this->f_textbox_socket->TabIndex = 2;
			this->f_textbox_socket->Text = L"502";
			// 
			// i_label_IP
			// 
			this->i_label_IP->AutoSize = true;
			this->i_label_IP->Location = System::Drawing::Point(15, 28);
			this->i_label_IP->Name = L"i_label_IP";
			this->i_label_IP->Size = System::Drawing::Size(17, 13);
			this->i_label_IP->TabIndex = 3;
			this->i_label_IP->Text = L"IP";
			// 
			// i_label_port_modbus
			// 
			this->i_label_port_modbus->AutoSize = true;
			this->i_label_port_modbus->Location = System::Drawing::Point(15, 63);
			this->i_label_port_modbus->Name = L"i_label_port_modbus";
			this->i_label_port_modbus->Size = System::Drawing::Size(41, 13);
			this->i_label_port_modbus->TabIndex = 4;
			this->i_label_port_modbus->Text = L"Socket";
			// 
			// f_label_status
			// 
			this->f_label_status->AutoSize = true;
			this->f_label_status->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->f_label_status->Location = System::Drawing::Point(42, 29);
			this->f_label_status->Name = L"f_label_status";
			this->f_label_status->Size = System::Drawing::Size(156, 18);
			this->f_label_status->TabIndex = 5;
			this->f_label_status->Text = L"Waiting for connection";
			// 
			// f_button_disconnect
			// 
			this->f_button_disconnect->Location = System::Drawing::Point(135, 55);
			this->f_button_disconnect->Name = L"f_button_disconnect";
			this->f_button_disconnect->Size = System::Drawing::Size(96, 30);
			this->f_button_disconnect->TabIndex = 6;
			this->f_button_disconnect->Text = L"Disconnect";
			this->f_button_disconnect->UseVisualStyleBackColor = true;
			this->f_button_disconnect->Click += gcnew System::EventHandler(this, &ModbusForm::f_button_disconnect_Click);
			// 
			// groupBox_modbus_settool
			// 
			this->groupBox_modbus_settool->Controls->Add(this->f_textbox_IP);
			this->groupBox_modbus_settool->Controls->Add(this->f_button_disconnect);
			this->groupBox_modbus_settool->Controls->Add(this->f_textbox_socket);
			this->groupBox_modbus_settool->Controls->Add(this->i_label_IP);
			this->groupBox_modbus_settool->Controls->Add(this->f_button_connect);
			this->groupBox_modbus_settool->Controls->Add(this->i_label_port_modbus);
			this->groupBox_modbus_settool->Location = System::Drawing::Point(12, 77);
			this->groupBox_modbus_settool->Name = L"groupBox_modbus_settool";
			this->groupBox_modbus_settool->Size = System::Drawing::Size(248, 102);
			this->groupBox_modbus_settool->TabIndex = 7;
			this->groupBox_modbus_settool->TabStop = false;
			this->groupBox_modbus_settool->Text = L"Сетевой упраление";
			// 
			// groupbox_holding_registers
			// 
			this->groupbox_holding_registers->Controls->Add(this->f_textbox_start_bit);
			this->groupbox_holding_registers->Controls->Add(this->f_textbox_lenght_bit);
			this->groupbox_holding_registers->Controls->Add(this->label1);
			this->groupbox_holding_registers->Controls->Add(this->f_button_read_tstmodbus);
			this->groupbox_holding_registers->Controls->Add(this->label2);
			this->groupbox_holding_registers->Enabled = false;
			this->groupbox_holding_registers->Location = System::Drawing::Point(12, 185);
			this->groupbox_holding_registers->Name = L"groupbox_holding_registers";
			this->groupbox_holding_registers->Size = System::Drawing::Size(248, 151);
			this->groupbox_holding_registers->TabIndex = 8;
			this->groupbox_holding_registers->TabStop = false;
			this->groupbox_holding_registers->Text = L"Read Holding Registers";
			// 
			// f_textbox_start_bit
			// 
			this->f_textbox_start_bit->Location = System::Drawing::Point(71, 34);
			this->f_textbox_start_bit->Name = L"f_textbox_start_bit";
			this->f_textbox_start_bit->Size = System::Drawing::Size(136, 20);
			this->f_textbox_start_bit->TabIndex = 1;
			this->f_textbox_start_bit->Text = L"0";
			// 
			// f_textbox_lenght_bit
			// 
			this->f_textbox_lenght_bit->Location = System::Drawing::Point(71, 60);
			this->f_textbox_lenght_bit->Name = L"f_textbox_lenght_bit";
			this->f_textbox_lenght_bit->Size = System::Drawing::Size(136, 20);
			this->f_textbox_lenght_bit->TabIndex = 2;
			this->f_textbox_lenght_bit->Text = L"10";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Start";
			// 
			// f_button_read_tstmodbus
			// 
			this->f_button_read_tstmodbus->Location = System::Drawing::Point(18, 99);
			this->f_button_read_tstmodbus->Name = L"f_button_read_tstmodbus";
			this->f_button_read_tstmodbus->Size = System::Drawing::Size(213, 34);
			this->f_button_read_tstmodbus->TabIndex = 0;
			this->f_button_read_tstmodbus->Text = L"Read";
			this->f_button_read_tstmodbus->UseVisualStyleBackColor = true;
			this->f_button_read_tstmodbus->Click += gcnew System::EventHandler(this, &ModbusForm::f_button_read_tstmodbus_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Lenght";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(279, 21);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 18);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Values";
			// 
			// lstRegValues
			// 
			this->lstRegValues->FormattingEnabled = true;
			this->lstRegValues->Location = System::Drawing::Point(282, 51);
			this->lstRegValues->Name = L"lstRegValues";
			this->lstRegValues->Size = System::Drawing::Size(257, 498);
			this->lstRegValues->TabIndex = 7;
			// 
			// modbustst_timer
			// 
			this->modbustst_timer->Tick += gcnew System::EventHandler(this, &ModbusForm::modbustst_timer_Tick);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->f_label_status);
			this->groupBox1->Location = System::Drawing::Point(12, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(248, 63);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Сетевой упраление";
			// 
			// modbus_read_sharemem
			// 
			this->modbus_read_sharemem->Tick += gcnew System::EventHandler(this, &ModbusForm::modbus_read_sharemem_Tick);
			// 
			// pictureBoxmodbus
			// 
			this->pictureBoxmodbus->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxmodbus.Image")));
			this->pictureBoxmodbus->Location = System::Drawing::Point(443, 6);
			this->pictureBoxmodbus->Name = L"pictureBoxmodbus";
			this->pictureBoxmodbus->Size = System::Drawing::Size(96, 33);
			this->pictureBoxmodbus->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxmodbus->TabIndex = 7;
			this->pictureBoxmodbus->TabStop = false;
			// 
			// ModbusForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(564, 557);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBoxmodbus);
			this->Controls->Add(this->lstRegValues);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupbox_holding_registers);
			this->Controls->Add(this->groupBox_modbus_settool);
			this->Name = L"ModbusForm";
			this->Text = L"ModbusForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &ModbusForm::ModbusForm_FormClosing);
			this->groupBox_modbus_settool->ResumeLayout(false);
			this->groupBox_modbus_settool->PerformLayout();
			this->groupbox_holding_registers->ResumeLayout(false);
			this->groupbox_holding_registers->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxmodbus))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void f_button_connect_Click(System::Object^ sender, System::EventArgs^ e) {
		

		connect();
	

	}



private: System::Void f_button_read_tstmodbus_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (!f_ReadHoldingRegisters) {

		f_ReadHoldingRegisters = true;

	}

	else if (f_ReadHoldingRegisters) {

		f_ReadHoldingRegisters = false;

	}
}

private: System::Void f_button_disconnect_Click(System::Object^ sender, System::EventArgs^ e) {


	modbus->Disconnect();
	f_label_status->Text = "Disconnected";



	
}
private: System::Void modbustst_timer_Tick(System::Object^ sender, System::EventArgs^ e) {


	connecting_status();

	if (f_ReadHoldingRegisters) {

		ReadHoldingRegisters(share_mem_readholdings);

	}

}
private: System::Void modbus_read_sharemem_Tick(System::Object^ sender, System::EventArgs^ e) {

	/* lstRegValues->Items->Clear();

	for (int i = 0; i < 30; i++) {

		lstRegValues->Items->Add(" "+i+".    "+share_mem_readholdings[i]);
	}
	*/
	if (form_open) {

		ReadHoldingRegisters(share_mem_readholdings);

	}
	else modbus_read_sharemem->Enabled = false;

}


private: System::Void ModbusForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {

	clearform();
	e->Cancel = true;

}
};
}
