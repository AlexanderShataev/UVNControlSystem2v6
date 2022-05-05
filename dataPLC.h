#pragma once
namespace UVNControlSystem2v6 {

	using namespace System;
	ref class dataPLC
	{
	public:

		//������ ����� �������� � ���� ������ � ������ ������ � PLC. ���� ��������� ����������� ���������� 
		//� ������������ ������:
		//================ SharedMemory  type Unsigned Int =====================

		//�Rg-Sh_Mem[�]-Value------------------------����������-----------------------------------------------
		//  1	0	R_Quants,				����� ��������� ���������
		//  2   1   B_ac_TIC,	 			���������� ������ � TIC (������� ���)
		// 	3   2   ac_APG,     			�������� � ���������� APG
		// 	4   3   ac_WRG,    				�������� � ���������� WRG
		//	5   4   ac_Tpod,      			����������� ��������
		//	6   5   ac_BV_poz,    			��������� �������� BV (��������)
		//	7   6   ac_TPlB_Uact, 			����������� ���������� TPlB
		//	8   7   ac_TPlB_Iact,  			����������� ��� TPlB
		//	9	8	ac_TPlB_Pact,			����������� �������� TPlB
		//	10	9	au_PSV1,		 		����������� ���������� �� PSV1
		//	11	10	au_PSV2,				����������� ���������� �� PSV2
		//	12	11	au_TPlB_Iset			�������������  ��� �� TPlB
		//	13	12	au_TPlB_Uset			������������� ���������� �� TPlB
		//  14  13	rg_dc					������� �� 	���� ������������� ������ DC
		//  15  14 	rg_dm					������� �� 	���� ������������� ������ DM
		//  16  15  ����� ������ PLC.		��. "����_������.�"  
		//	17	16	act_poz_BV				����������� ��������� �������� BV
		//  18	17	davlenieBV				��������, ����������� �������� BV
		//	19	18	learnm					����� ������� �� ������ LEARN STATUS
		//  20	19	������
		//	21	20	������� ������� ������� "������ � SharedMemory" 0 - �� ������
		//  22  21  ������� ��������� � ������������ � SharedMemory.doc
		//----------------------------------------------------------------------------------------------------
		//				1		vacuum_start()		������ �������� �������
		//				2		Vacuum()			������ ������ �������������
		//				3		vacuum_stop()		������ ��������� �������
		//				4		napusk1_St()		������� ����� ������� PSV1 - ������� � RG24
		//				5		napusk2_St()		������� ����� ������� PSV2 - ������� � RG25
		//				60		COM1exchench()		���������������� �V, ������� 0..10000 ����� dop_command RG26
		//				61		COM1exchench()		������� BV
		//				62		COM1exchench()		������� BV
		//				63		COM1exchench()		�������� ������� BV
		//				64		COM1exchench()		Zero
		//				66		COM1exchench()		Pressure control
		//				67		COM1exchench()		LEARN
		//				68		COM1exchench()		LEARN status
		//				7		TPlB_LV()			���,���� ������������� ����� TPlB, ���.����.
		//				8		TPlB_HV()			���,���� �������������� ����� TPlB, ���.����.
		//				9		TPlB_IU_St()		���,���� ������� ����� ��������� ���� � ����.TPlB,
		//											������� ���� 0..10000 ����� RG27, ����. RG28
		//				10		nagrev()			���,���� ������� ������� ��������, ���.����.
		//				11		napyl()				���,���� ������� ���������
		//				17		zasl()				��������� �� 180 ��. ��������, ������������ ���������
		//			-------------------------------- ������� �������------------------------------------
		//			100		��������� ������ ��. ����� ������ - � dop_command - ������� 23(22)
		//					� ������� (�������), �������� ������� - � ������� 50(49)			
		//			------------------------------------------------------------------------------------
		//			300		�������� ������ ��. ����� ������ - � dop_command - ������� 23(22)
		//					� ������� (�������).
		//			------------------------------------------------------------------------------------
		//			1000		����� �� ���������
		////----------------------------------------------------------------------------------------------------
		//	23	22	�������������� ����� �������, ��. ���� 200..203
		//	24	23	au_PSV1			���������� �� PSV1 � ���������
		//	25	24	au_PSV2			���������� �� PSV2 � ���������
		//	26	25	zad_poz_BV		�������� ������� BV
		//	27	26	au_TPlB_Iset	������� ���������� ����� TPlB
		//	28	27	au_TPlB_Uset 	������� ���������� ����������� TPlB 
		//	29	28	zad_Temp		�������� ����������� ��������
		//	30	29	zad_t_napyl		�������� ����� ���������
		//	31  30 	p_contr 		�������� �������� ��� �������� �������� BV
		//	32  31 	k1 		�������� �������� ��� �������� �������� BV
		//	33  32 	k2 		�������� �������� ��� �������� �������� BV
		//	34  33 	k3		�������� �������� ��� �������� �������� BV		
		//-------------------��������� ������������ ��������----------------------
		//	30...45
		//--------------------------------------------------------------------------------------------------------   
		// ����� ����������

		//	����������
		//--------------------------------------
		//	��������� ��������
		//  �����������
		//	������� ������� � ������� t_podl=DtoT_A*D^2+DtoT_B*D+DtoT_C
		//
		const double 
		
		DtoT_A = 0.00000683,
		DtoT_B = 0.179277,
		DtoT_C = -112.2168,
		//
		//	������� ������� � �������� D=TtoD_A*t_podl^2 + TtoD_B*t_podl + TtoD_C
		//
		TtoD_A = -0.000837733,	
		TtoD_B = 5.302,		
		TtoD_C = 612.3;		
		//--------------------------------------


		//	���������� � �������
		//--------------------------------------
		//	������ ����������
		bool main_connecting_status;						//��� 1 -- ���������� ����, 0 -- ���������� ���

		//	������ �� ���
		array<int>^ data = gcnew array<int>(13);			//������, ���������� ������ � PLC �� PLC:: HoldingRegisters 21-30 

		//	������ � ���
		array<int>^ share_mem = gcnew array<int>(30);		//������, ����������� ������ � PLC �� PC:: HoldingRegisters 1-30 

		//	������ ��������� ����������
		array<int>^ masckon = gcnew array<int>(16);			//������ ����� ����������� ����������
		//--------------------------------------


		//	���������� (��������) �������
		unsigned int

			work_time = 0,
			tick = 1,

			STime_start_vacuum = 0,
			STime_vacuum = 0,
			STime_stop_vacuum = 0,
			STime_gases = 0,
			STime_TPlB = 0,

			LTime_start_vacuum = 0,
			LTime_vacuum = 0,
			LTime_stop_vacuum = 0,
			LTime_gases = 0,
			LTime_TPlB = 0,
	
			DataTime_start_vacuum = 0,
			DataTime_vacuum = 0,
			DataTime_stop_vacuum = 0,
			DataTime_gases = 0,
			DataTime_TPlB = 0;

			
		

		//	���������� (��������) ������������ �� PLC
		//-------------------------------------
		unsigned int

			//�������� ������ �
			command,										//cmd -- �������� ������� ���������� share_mem[21]
			set_PSV1,										//����������� ���������� �� PSV1 (���������� �������� 0-10000 ��)
			set_PSV2,										//����������� ���������� �� PSV1 (���������� �������� 0-10000 ��)
			set_BV,											//�������� ��������� BV
			set_temp,										//�������� ����������� �����������������
			set_TPlB_I,										//�������� ���� ���� TPlB
			set_TPlB_U,										//�������� ���������� TPlB
			//
			//������ ������ command (cnmd) share_mem[21]+
			vacuum_start	=  1,
			vacuum			=  2,
			vacuum_stop		=  3,
			gas_PSV1		=  4,
			gas_PSV2		=  5,
			COM1exchench,
			TPlB_LV			=  7,
			TPlB_HV			=  8,
			TPlB_IU_S		=  9,
			nagrev			= 10,
			process			= 11;
		//--------------------------------------




//������ ������ command (cnmd) share_mem[21]+
//--------------------------------------
unsigned int
//	���������� (��������) ������������ �� PC � PLC
r_quants,										//����� ��������� ���������
B_ac_TIC,										//���������� ������ � TIC (������� ���)
ac_APG,											//�������� � ���������� APG
ac_WRG,											//�������� � ���������� WRG
ac_Tact,										//��������� ������� ����������� (��������������)
ac_BVact,										//��������
ac_TPlB_Uact,									//����������� �������� ���������� TPlB
ac_TPlB_Iact,									//����������� �������� ���� ���� TPlB
ac_TPlB_Pact,									//����������� �������� �������� TPlB
au_PSV1,										//����������� ���������� �� PSV1
au_PSV2,										//����������� ���������� �� PSV2
au_TPlB_Iset,									//����������� ������������� �������� ���� ���� TPlB
au_TPlB_Uset,									//����������� ������������� �������� ���������� TPlB		
rg_dc,											//������� �� 	���� ������������� ������ DC
rd_dm,											//������� �� 	���� ������������� ������ DM
buffer_PLC_error,								//��. "����_������.�" 
act_PV_position,								//����������� ��������� �������
pressureBV,										//�������� � �������
learn;
//--------------------------------------



//�������� �������� �������
//--------------------------------------
int DegreesToDiscrete(int temp) {					//������� �������� � �������� 

	return TtoD_A * temp * temp + TtoD_B * temp + TtoD_C;

}

int DiscreteToDegrees(int Discrete) {				//������� ������� � �������

	return DtoT_A * Discrete * Discrete + DtoT_B * Discrete + DtoT_C;

}
//--------------------------------------


//������� �� ������ ModbusTCPServer 	
//--------------------------------------
void date_to_array() {



	data[0] = 20;
	data[1] = command;								// cmd_word
	data[2] = work_time;
	data[3] = set_PSV1;							//au_PSV1 � ���������
	data[4] = set_PSV2;							//au_PSV2 � ���������
	data[5] = set_BV;								//������� BV (������-�������)
	data[6] = set_TPlB_I;							//au_TPlB_Iset
	data[7] = set_TPlB_U;							//au_TPlB_Uset
	data[8] = DegreesToDiscrete(set_temp);			//�������� ����������� � ���������, ��������� ������� ���������
	data[9] = 0;
	data[10] = 0;									//p_�������� �������� BV
	data[11] = work_time;							//PID

}

//����� ������� � ���

void recieve_data(int recieving[30]) {

	for (int i = 0; i <= 30; i++) {

		share_mem[i] = recieving[i];

	}

}

//��������� r_quants


	void process_quants() {		//���� true -- ������� �������, false -- �� �������

	masckon[0] = 1;
	masckon[1] = 2;
	masckon[2] = 4;
	masckon[3] = 8;
	masckon[4] = 16;
	masckon[5] = 32;
	masckon[6] = 64;
	masckon[7] = 128;
	masckon[8] = 256;
	masckon[9] = 512;
	masckon[10] = 1024;
	masckon[11] = 2048;
	masckon[12] = 4096;
	masckon[13] = 8192;
	masckon[14] = 16384;
	masckon[15] = 32768;

	}


	bool process_quants(int bit) {					////���� true -- ������� �������, false -- �� �������


	if ((r_quants & masckon[bit]) != 0) {

		return true;

	}

	else  {

		return false;
	}


}

	};

};