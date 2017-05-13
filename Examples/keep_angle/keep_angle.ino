


#include "ST7565_homephone.h"
ST7565 lcd(3,4,5,6);//RST, SCLK, A0, SID

void setup()   {  
  Serial.begin(9600); // mở monitor để xem 
}
void loop(){
  int keep;
for( int goc=-720; goc<3600; goc++){
      Serial.print( goc);
      Serial.print("_");
keep=lcd.Keep_Angle(goc);// giữ góc
      Serial.println( keep);
  delay(10);
}

  
}

//int Keep_Angle(int goc);
// giữ cho góc đang tăng _luôn thuộc khoảng 0 -> 360

