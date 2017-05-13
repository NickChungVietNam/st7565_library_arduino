


#include "ST7565_homephone.h"
ST7565 lcd(3,4,5,6);//RST, SCLK, A0, SID

void setup()   { 
  lcd.ON();  
  lcd.SET(23,0,0,0,4);
}
void loop(){
  lcd.Rect(40,30,30,20,BLACK);
  lcd.Display();
  
}

//void Rect(int x,int y, int w, int h, bool color);
// vẽ hình tứ chữ nhật
//x,y: tọa độ đỉnh góc trái trên cùng
//w,h: chiều dài theo trục ngang và trục dọc

