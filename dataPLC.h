#pragma once
namespace UVNControlSystem2v6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace EasyModbus;

	ref class dataPLC
	{
	public:


		//������ ����������
		bool main_connecting_status;

		// ������ �� ���
		array<int>^ data = gcnew array<int>(13); 

		//������ � ���
		array<int>^ share_mem = gcnew array<int>(30);


		//���������� �� ���
		int set_APG;
		int set_WRG;
		int set_PSV1;
		int set_PSV2;
		int set_BV;
		int set_temp;
		int set_TPlB_I;
		int set_TPlB_U;
		int work_time = 0; 


		//��������� �������

		 void null_date () {


			  data[0] = 20;
			  data[1] = 0;	// cmd_word
			  data[2] = 0;
			  data[3] = 0;	//au_PSV1 � ���������
			  data[4] = 0;	//au_PSV2 � ���������
			  data[5] = 0;	//������� BV (������-�������)
			  data[6] = 0;	//au_TPlB_Iset
			  data[7] = 0;	//au_TPlB_Uset
			  data[8] = 0;	//�������� ����������� � ���������, ��������� ������� ���������
			  data[9] = 0;
			  data[10] = 0;	//p_�������� �������� BV
			  data[11] = 0;	//PID
		 }


		   //������� �� ������ ModbusTCPServer 	

		 void date_to_array() {


			  data[0] = 20;
			  data[1] = 0;	// cmd_word
			  data[2] = work_time;
			  data[3] = set_PSV1;	//au_PSV1 � ���������
			  data[4] = set_PSV2;	//au_PSV2 � ���������
			  data[5] = set_BV;	//������� BV (������-�������)
			  data[6] = set_TPlB_I;	//au_TPlB_Iset
			  data[7] = set_TPlB_U;	//au_TPlB_Uset
			  data[8] = set_temp;	//�������� ����������� � ���������, ��������� ������� ���������
			  data[9] = 0;
			  data[10] = 0;	//p_�������� �������� BV
			  data[11] = work_time;	//PID

		   }

		   //����� ������� � ���
		 void recieve_data(int recieving[30]) {

			   for (int i = 0; i <= 30; i++) {

				   share_mem[i] = recieving[i];

			   }

		   }


	
	};

};