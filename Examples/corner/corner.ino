


#include "ST7565_homephone.h"
ST7565 lcd(3,4,5,6);//RST, SCLK, A0, SID

void setup()   { 
  lcd.ON();  
  lcd.SET(23,0,0,0,4);
}
void loop(){
  lcd.Corner( 30,20,60,30,8,BLACK);
  lcd.display();
}
// hình chữ nhật kèm hiệu ứng bo góc
//void Corner( int x,int y, int w, int h,int r, bool color);
// x,y: tọa độ cúa đỉnh bên trái ,trên cùng
//w,h: chiều ngang, chiều cao;
//r : bán kính đường tròn bo góc

