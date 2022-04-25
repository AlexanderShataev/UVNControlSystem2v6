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
		data[3] = 0;	//au_PSV1 в дискретах
		data[4] = 0;	//au_PSV2 в дискретах
		data[5] = 0;	//позиция BV (клапан-бабочка)
		data[6] = 0;	//au_TPlB_Iset
 		data[7] = 0;	//au_TPlB_Uset
		data[8] = 0;	//Заданная температура в дискретах, требуется функция пересчета
		data[9] = 0; 
		data[10] = 0;	//p_заданное давление BV
		data[11] = 0;	//PID
	}

};

