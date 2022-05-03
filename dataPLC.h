#pragma once
namespace UVNControlSystem2v6 {

	using namespace System;
	ref class dataPLC
	{
	public:

		//===============SharedMemory  type Unsigned Int=====================
//№Rg-Sh_Mem[№]-Value------------------------Примечание------------------
//  1	0	R_Quants,				Слово состояния процессов
//  2   1   B_ac_TIC,	 			Аналоговый сигнал с TIC (обороты ТМН)
// 	3   2   ac_APG,     			Давление с вакууметра APG
// 	4   3   ac_WRG,    				Давление с вакууметра WRG
//	5   4   ac_Tpod,      			Температура подложки
//	6   5   ac_BV_poz,    			Положение заслонки BV (свободно)
//	7   6   ac_TPlB_Uact, 			Фактическое напряжение TPlB
//	8   7   ac_TPlB_Iact,  			Фактический ток TPlB
//	9	8	ac_TPlB_Pact,			Фактическая мощность TPlB
//	10	9	au_PSV1,		 		Фактическое управление на PSV1
//	11	10	au_PSV2,				Фактическое управление на PSV2
//	12	11	au_TPlB_Iset			Установленный  ток на TPlB
//	13	12	au_TPlB_Uset			Установленное напряжение на TPlB
//  14  13	rg_dc					Регистр ДК 	Биты соответствуют маскам DC
//  15  14 	rg_dm					Регистр ДУ 	Биты соответствуют маскам DM
//  16  15  Буфер ошибок PLC.		См. "Коды_ошибок.С"  
//	17	16	act_poz_BV				Фактическое положение заслонки BV
//  18	17	davlenieBV				Давление, считываемое клапаном BV
//	19	18	learnm					Ответ бабочки на запрос LEARN STATUS
//  20	19	Резерв
//	21	20	Признак команды клиента "Запись в SharedMemory" 0 - не запись
//  22  21  Команды оператора в соответствии с SharedMemory.doc
//				1		vacuum_start()		Запуск процесса откачки
//				2		Vacuum()			Запуск только автоматически
//				3		vacuum_stop()		Запуск остановки откачки
//				4		napusk1_St()		Шаговый режим напуска PSV1 - уставка в RG24
//				5		napusk2_St()		Шаговый режим напуска PSV2 - уставка в RG25
//				60		COM1exchench()		Позиционирование ВV, позиция 0..10000 через dop_command RG26
//				61		COM1exchench()		Открыть BV
//				62		COM1exchench()		Закрыть BV
//				63		COM1exchench()		Контроль позиции BV
//				64		COM1exchench()		Zero
//				66		COM1exchench()		Pressure control
//				67		COM1exchench()		LEARN
//				68		COM1exchench()		LEARN status
//				7		TPlB_LV()			Вкл,Выкл низковольтный режим TPlB, инв.проц.
//				8		TPlB_HV()			Вкл,Выкл высоковольтный режим TPlB, инв.проц.
//				9		TPlB_IU_St()		Вкл,Выкл шаговый режим установки тока и напр.TPlB,
//											уставка тока 0..10000 через RG27, напр. RG28
//				10		nagrev()			Вкл,Выкл процесс нагрева подложки, инв.проц.
//				11		napyl()				Вкл,Выкл процесс напыления
//				17		zasl()				Повернуть на 180 гр. заслонку, инветировать положение
//			-------------------- Команды отладки------------------------------------
//			100		Установка канала АУ. Номер канала - в dop_command - регистр 23(22)
//					у клиента (сервера), величина уставки - в регистр 50(49)			
//			--------------------
//			300		Инверсия канала ДУ. Номер канала - в dop_command - регистр 23(22)
//					у клиента (сервера).
//			--------------------
//			1000		Выход из программы
//------------------------------------------------------------------------
//	23	22	Дополнительное слово команды, см. коды 200..203
//  24	23	au_PSV1			Напряжение на PSV1 в дискретах
//  25	24	au_PSV2			Напряжение на PSV2 в дискретах
//  26	25	zad_poz_BV		Заданная позиция BV
//	27	26	au_TPlB_Iset	Шаговое управление током TPlB
//  28	27	au_TPlB_Uset 	Шаговое управление напряжением TPlB 
//	29	28	zad_Temp		Заданная температура подложки
//	30	29	zad_t_napyl		Заданное время напыления
//	31  30 	p_contr 		Заданное давление для контроля клапаном BV
//	32  31 	k1 		Заданное давление для контроля клапаном BV
//	33  32 	k2 		Заданное давление для контроля клапаном BV
//	34  33 	k3		Заданное давление для контроля клапаном BV		
//-------------------Параметры настроечного листинга----------------------
//  30...45
//--------------------------------------------------------           
//  50 и более         	Резерв. Здесь пишем ошибки инициализации
//						системы, обнаруженные до запука сервера,
//						переменные команд отладки.
//-------------------------------------------------------------------------
		//Константы
		//
		//ТЕМПЕРАТУРА
		//
		//ПЕРЕВОД ДИСКРЕТ В ГРАДУСЫ t_podl=DtoT_A*D^2+DtoT_B*D+DtoT_C

		const double DtoT_A = 0.00000683;
		const double DtoT_B = 0.179277;
		const double DtoT_C = -112.2168;
		
		//
		//ПЕРЕВОД ГРАДУСЫ В ДИСКРЕТЫ D=TtoD_A*t_podl^2 + TtoD_B*t_podl + TtoD_C

		const double TtoD_A = -0.000837733;	
		const double TtoD_B = 5.302;		
		const double TtoD_C = 612.3;		

		//СТАТУС СОЕДИНЕНИЯ
		bool main_connecting_status;

		// МАССИВ на ПЛК
		array<int>^ data = gcnew array<int>(13); 

		//Массив с ПЛК
		array<int>^ share_mem = gcnew array<int>(30);

		//Переменные на ПЛК
		int command;
		int r_quants;

		array<int>^ masckon = gcnew array<int> (16);


		int set_APG;
		int set_WRG;
		int set_PSV1;
		int set_PSV2;
		int set_BV;
		int set_temp;
		int set_TPlB_I;
		int set_TPlB_U;
		//
		//
		//________________
		int work_time = 0; 

		int vacuum_start = 1;
		int vacuum = 2;
		int vacuum_stop = 3;
		int gas_PSV1 = 4;
		int gas_PSV2 = 5;
		int COM1exchench;
		int TPlB_LV = 7;
		int TPlB_HV = 8;
		int TPlB_IU_S = 9;
		int nagrev = 10;
		int process = 11;


		int TempToDiscrete(int temp) {

			return TtoD_A * temp * temp + TtoD_B * temp + TtoD_C;

		}

		int DiscreteToInt(int Discrete) {

			return DtoT_A * Discrete * Discrete + DtoT_B * Discrete + DtoT_C;

		}

		   //Посылка на сервер ModbusTCPServer 	

		 void date_to_array() {

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

			  data[0] = 20;
			  data[1] = command;	// cmd_word
			  data[2] = work_time;
			  data[3] = set_PSV1;	//au_PSV1 в дискретах
			  data[4] = set_PSV2;	//au_PSV2 в дискретах
			  data[5] = set_BV;	//позиция BV (клапан-бабочка)
			  data[6] = set_TPlB_I;	//au_TPlB_Iset
			  data[7] = set_TPlB_U;	//au_TPlB_Uset
			  data[8] = TempToDiscrete(set_temp);	//Заданная температура в дискретах, требуется функция пересчета
			  data[9] = 0;
			  data[10] = 0;	//p_заданное давление BV
			  data[11] = work_time;	//PID

		   }

		   //Прием посылки с ПЛК

		 void recieve_data(int recieving[30]) {

			   for (int i = 0; i <= 30; i++) {

				   share_mem[i] = recieving[i];

			   }

		   }


	};

};