


#include "ST7565_homephone.h"
ST7565 lcd(3,4,5,6);//RST, SCLK, A0, SID

void setup()   {
  lcd.ON();   
  lcd.SET(23,0,0,0,4);
}
void loop(){
  lcd.FillCorner( 40,20, 40,30,5,BLACK);
  lcd.Display();
  
}
//void FillCorner( int x,int y,int w,int h, int r, bool color);
//x,y: tọa độ đỉnh góc trái trên cùng
// w,h: chiều rộng thao trục x và trục y
//r: bán kính đường tròn bo góc
