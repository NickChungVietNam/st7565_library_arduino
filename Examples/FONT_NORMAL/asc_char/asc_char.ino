


#include "ST7565_homephone.h"
ST7565 lcd(3,4,5,6);

void setup()   { 
  lcd.ON();  
  lcd.SET(23,0,0,0,4);
}
void loop(){
 //c1:
 char text ='A';
 text='A';
 lcd.Asc_Char(10,10,text,BLACK);
 lcd.Display();
 //c2:
 
 lcd.Asc_Char(20,10,'B',BLACK);
 lcd.Display();
 //c3:
 
 lcd.Asc_Char(30,10,67,BLACK);
 lcd.Display();
}

//  void Asc_Char(int x1, int y1,unsigned char c, bool color);
//viết 1 kí tự trong bảng ASCII, biến truyền vào có kiếu (unsigned char)
// x1,y1: tọa độ con trỏ
///unsigned char có miền giá trị (0->255);
