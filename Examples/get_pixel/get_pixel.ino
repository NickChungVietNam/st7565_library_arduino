


#include "ST7565_homephone.h"
ST7565 lcd(3,4,5,6);//RST, SCLK, A0, SID

void setup()   {   
  Serial.begin(9600);
  lcd.ON();
  lcd.SET(23,0,0,0,4);
}
bool value;
void loop(){
  int x=63;
  int y=31;
  lcd.DrawPixel(x,y,BLACK);//vẽ, nhìn vào lcd nhé
  lcd.Display();
  value=lcd.GetPixel(63,31);// kiểm tra điểm (63,31) có được vẽ hay không
  Serial.println( value);// vì vẽ nên sẽ trả về 1
// THAY ĐỔI X,Y XEM SAO
}
//bool GetPixel( int x, int y);
// hàm kiểm tra điểm ở tọa độ x,y có được vẽ( tô ) hay không
//trả về 1 ( true) nếu đúng, ngược lại trả về false
