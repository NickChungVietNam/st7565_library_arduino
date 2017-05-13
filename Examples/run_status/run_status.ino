


#include "ST7565_homephone.h"
ST7565 lcd(3,4,5,6);//RST, SCLK, A0, SID

void setup()   { 
  lcd.ON();  
  lcd.SET(22,0,0,0,4);
}
void loop(){
  lcd.RunStatus(5,10,15,80,"Sketch uses 3,560 bytes (11%) of program storage space. Maximum is 32,256 bytes. ", BLACK);
  lcd.Display();
}

//void RunStatus( int x, int y, byte a,unsigned int t, const char *c PROGMEM, bool color) ;
//viết kí tự chạy từ phải sang trái
//x,y: tọa độ con trỏ
// a: số kí tự cần hiển thị
//t: tốc độ (1-100)


