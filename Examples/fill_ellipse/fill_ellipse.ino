


#include "ST7565_homephone.h"
ST7565 lcd(3,4,5,6);//RST, SCLK, A0, SID

void setup()   { 
  lcd.ON();  
  lcd.SET(23,0,0,0,4);
}
void loop(){
lcd.FillElip( 63,31, 50,20,BLACK);
lcd.Display();
  
}
//void FillElip(int x0, int y0  , int   xRadius,  int  yRadius, bool color);
//vẽ hình ellipse
// x0,y0: tâm ellipse
// xRadius, yRadius: bán kính trục x và y

