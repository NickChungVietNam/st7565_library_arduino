


#include "ST7565_homephone.h"
ST7565 lcd(3,4,5,6);//RST, SCLK, A0, SID

void setup()   {   
  lcd.begin(0x18,0,0,0,0x4);
}
void loop(){
  
}

