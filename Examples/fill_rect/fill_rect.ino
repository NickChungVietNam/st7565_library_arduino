


#include "ST7565_homephone.h"
ST7565 lcd(3,4,5,6);//RST, SCLK, A0, SID

void setup()   {   
    lcd.ON();
  lcd.SET(23,0,0,0,4);
}
void loop(){
  lcd.FillRect(40,30,40,20,BLACK);
  lcd.Display();
}

 // void FillRect(int x,int y, int w, int h, bool color);
 //tô màu hình chữ nhật
 // x,y: tọa độ đỉnh góc trái trên cùng
 // w,h: độ rộng theo trục x, và y
 
