


#include "ST7565_homephone.h"
ST7565 lcd(3,4,5,6);//RST, SCLK, A0, SID

void setup()   {  
  lcd.ON(); 
  lcd.SET(23,0,0,0,4);
}
void loop(){
  lcd.FillCircle( 60,30,20,BLACK);
  lcd.Display();
  
}
//void FillCircle(int x0,int y0, int r, bool color);
// vẽ hình tròn tô màu
// x0,y0: tọa độ tâm
//r: bán kính 
