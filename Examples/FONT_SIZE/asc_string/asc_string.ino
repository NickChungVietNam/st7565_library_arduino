


#include "ST7565_homephone.h"
ST7565 lcd(3,4,5,6);//RST, SCLK, A0, SID

void setup()   {  
  lcd.ON(); 
  lcd.SET(23,0,0,0,4);
  
}

void loop(){
  //c1:
  lcd.Asc_String(0,0,Asc("Size 1"),1, BLACK);
  lcd.Asc_String(0,12,Asc("Size 2"),2, BLACK);
  lcd.Asc_String(0,30,Asc("Size 3"),3, BLACK);
  lcd.display();
}
//void Asc_String(int x1, int y1,unsigned char c[] ,byte he_so_phong_to, bool color);
//x1,y1: tọa độ con trỏ của chữ cái đầu tiên
// c: mảng kí tự dạng chuỗi kí tự 
//he_so_phong_to: phóng to

