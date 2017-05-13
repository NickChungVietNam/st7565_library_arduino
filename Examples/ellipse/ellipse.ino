


#include "ST7565_homephone.h"
ST7565 lcd(3,4,5,6);//RST, SCLK, A0, SID

void setup()   { 
    lcd.ON();  
  lcd.SET(23,0,0,0,4);
}
void loop(){
  lcd.Elip( 60,30,20,10,BLACK);
  lcd.Display();
}

//void Elip( int x, int  y,  int xRadius, int  yRadius, bool color);

// x,y: tâm ellipse
// xRadius,yRadius: bán kính trục đứng và trục ngang

