


#include "ST7565_homephone.h"
ST7565 lcd(3,4,5,6);//RST, SCLK, A0, SID

void setup()   {    
  lcd.ON();
  lcd.SET(20,0,0,0,4);
}


int k=0;// int , long...
byte l=0;// byte, unsigned int, unsigned long...
float m=-100.123;

void loop(){ 

lcd.Number_Long(10,10,k,STYLE_NUMBER,2,BLACK);
//lcd.Number_Long(10,10,k,CASIO_NUMBER,2,BLACK);
//lcd.Number_Ulong(10,10,l,CASIO_NUMBER,3,BLACK);
//lcd.Number_Ulong(10,10,l,ASCII_NUMBER,3,BLACK);
//lcd.Number_Float(10, 10,m,3,ASCII_NUMBER,2,BLACK);
//lcd.Number_Float(10, 10,m,3,STYLE_NUMBER,2,BLACK);

lcd.Display();
k++;
l++;
m++;
lcd.Clear();

}


//void Number_Long(int x, int y,long a,byte select_font,byte he_so_phong_to, bool color);
//void Number_Ulong(int x, int y,unsigned long a,byte select_font,byte he_so_phong_to, bool color);
//void Number_Float(int x, int y, float a,byte n, byte select_font,byte he_so_phong_to,bool color);


//viết chữ số 
//x,y :tọa độ con trỏ
//a: tham số truyền vào với kiểu biến phù hợp
// select_font: chọn font
//ASCII_NUMBER hoặc bất kì số nào
//CASIO_NUMBER hoặc số 1
//STYLE_NUMBER hoặc số 2
// n: Nmax=10 (số chữ số muốn hiển thị sau dấu phảy( chỉ dùng cho kiểu float))


