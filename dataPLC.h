#pragma once
ref class dataPLC
{	
public:

	int set_APG;
	int set_WRG;
	int set_PSV1;
	int set_PSV2;
	int set_BV;

	
	void r_data() {

		int data[11];
		data[0] = 20;					
		data[1] = 0;	 // cmd_word
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

};

