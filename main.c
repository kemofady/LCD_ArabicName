
/* library **/
#include<util/delay.h>
#include"STD_TYPES.h"
#include"BIT_MATH.h"
/* mcal */

#include"DIO_driver/Dio_Interface.h"

/* own  drive*/

#include"LCD_driver/LCD_interface.h"
 //--------------------------------------
//name in Arabic

u8 arr_fristarabicletter[7]={
	0b00111,
	0b00100,
	0b00100,
	0b00100,
	0b11100,
	0b00000,
	0b00000
};
u8 arr_secondarabicletter[7]={
	0b00000,
	0b00000,
	0b00000,
	0b00000,
	0b00111,
	0b01000,
	0b10000
};
u8 arr_thirdarabicletter[7]={
	0b00000,
	0b00000,
	0b00001,
	0b00001,
	0b11111,
	0b00000,
	0b11011

};
u8 arr_fourtharabicletter[7]={
	0b00000,
	0b00000,
	0b00000,
	0b00110,
	0b01001,
	0b01110,
	0b10000,
	0b10000
};
//---------------------------------------------------
u8 arr_manmouvingpattern1[8]={
	0b00100,
	0b01010,
	0b00100,
	0b01110,
	0b00100,
	0b00100,
	0b01010,
	0b00000
};

u8 arr_manmouvingpattern2[8]={
	0b00100,
	0b01010,
	0b00100,
	0b01110,
	0b00100,
	0b00110,
	0b00101,
	0b00000
};


void main(){
	LCD_voidinit();

  //  write Arabic name

	  LCD_voidpattern(0,arr_fourtharabicletter);
	  LCD_voidpattern(1,arr_thirdarabicletter);
	  LCD_voidpattern(2,arr_secondarabicletter);
	  LCD_voidpattern(3,arr_fristarabicletter);
	  LCD_gotoxy(0,6);
	  LCD_voidsenddata(0);
	  LCD_voidsenddata(1);
	  LCD_voidsenddata(2);
	  LCD_voidsenddata(3);


	while(1){

			}

	}

