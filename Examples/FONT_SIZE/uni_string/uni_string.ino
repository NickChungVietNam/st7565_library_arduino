

#include "ST7565_homephone.h"


ST7565 lcd(3,4,5,6);

void setup()   {
  lcd.ON();   
  lcd.SET(20,0,0,0,4);
}

void loop(){
//c1:
lcd.Uni_String( 15, 15 ,Uni( u"VI\x1EC6TN\x41M"), 2,BLACK);//đỏ
  
lcd.Display();
}

//void Uni_String(int x, int y, char16_t c[] ,byte he_so_phong_to, bool color);
// phóng to chữ
