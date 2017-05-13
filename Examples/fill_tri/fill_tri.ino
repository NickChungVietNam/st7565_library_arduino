


#include "ST7565_homephone.h"
ST7565 lcd(3,4,5,6);//RST, SCLK, A0, SID


void setup()   {   
  lcd.ON();
  lcd.SET(23,0,0,0,4);
}
void loop(){
  lcd.FillTri( 30,20,90,40,60,10,BLACK);
  lcd.Display();
}
//void FillTri(int x1,int y1,int x2,int y2 ,int x3,int y3, bool color);
// vẽ tam giác TTO MÀU có 3 đỉnh A(x1,y1) B(x2,y2), C(x3,y3)
