#pragma once
namespace UVNControlSystem2v6 {

	using namespace System;

	

	ref class dataPLC
	{
	public:

		//���������
		//
		//�����������
		//
		//������� ������� � ������� t_podl=DtoT_A*D^2+DtoT_B*D+DtoT_C

		const double DtoT_A = 0.00000683;
		const double DtoT_B = 0.179277;
		const double DtoT_C = -112.2168;
		
		//
		//������� ������� � �������� D=TtoD_A*t_podl^2 + TtoD_B*t_podl + TtoD_C

		const double TtoD_A = -0.000837733;	
		const double TtoD_B = 5.302;		
		const double TtoD_C = 612.3;		

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


		int TempToDiscrete(int temp) {

			return TtoD_A * temp * temp + TtoD_B * temp + TtoD_C;

		}

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
			  data[8] = TempToDiscrete(set_temp);	//�������� ����������� � ���������, ��������� ������� ���������
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