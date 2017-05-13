


#include "ST7565_homephone.h"
ST7565 lcd(3,4,5,6);

void setup()   { 
   
  lcd.ON(); 
  lcd.SET(23,0,0,0,4);
  
}
void loop(){
  int value=0;
while(true){
  if(value==500){value=0;}
 lcd.Analog( 30,10,80,40, value,BLACK);
 value+=5;
 delay(10);
 lcd.display();
}
}
// vẽ một đồ thị dạng sóng vói biến nhập vào  value
  //void Analog( int x, int y, int w, int h,  int value,bool color);
  //x,y: tọa độ khung ảnh, w,h, độ rộng chiều cao
  // value: 1->500
  // 
  
