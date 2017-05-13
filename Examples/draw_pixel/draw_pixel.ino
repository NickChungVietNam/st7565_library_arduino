


#include "ST7565_homephone.h"
ST7565 lcd(3,4,5,6);//RST, SCLK, A0, SID

void setup()   {  
  lcd.ON(); 
  lcd.SET(23,0,0,0,4);
}
void loop(){
  lcd.DrawPixel(60,30,BLACK);
  lcd.DrawPixel(60,33,BLACK);
  lcd.DrawPixel(60,36,BLACK);
  lcd.Display();
}
//void DrawPixel(int x,int y, bool color);
// vẽ 1 điểm có tọa độ x,y
