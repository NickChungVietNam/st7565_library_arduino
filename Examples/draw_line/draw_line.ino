


#include "ST7565_homephone.h"
ST7565 lcd(3,4,5,6);//RST, SCLK, A0, SID

void setup()   {  
  lcd.ON(); 
  lcd.SET(23,0,0,0,4);
}
void loop(){
  lcd.DrawLine(0,0,60,30,BLACK);
  lcd.Display();
}

 // void DrawLine(int x0,int y0,int x1,int y1,  bool color);
 // vẽ đoạn thẳng
 // x0,y0: tọa độ điểm thứ nhất
 // x1,y1: tọa độ điểm thứ hai
