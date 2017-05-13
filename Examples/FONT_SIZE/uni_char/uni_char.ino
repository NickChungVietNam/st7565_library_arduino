


#include "ST7565_homephone.h"
// add a bitmap library of a 16x16 fruit icon
ST7565 lcd(3,4,5,6);

void setup()   {   
  lcd.ON();
  lcd.SET(20,0,0,0,4);
}
void loop(){
  lcd.Uni_Char(0,0,u'A', 1,BLACK);
  lcd.Uni_Char(14,0,u'B', 2,BLACK);
  lcd.Uni_Char(35,0,u'C', 3,BLACK);
  lcd.Uni_Char(63,0,u'D', 4,BLACK);
  lcd.Uni_Char(100,0,u'E', 5,BLACK);
lcd.display();
}

//void Uni_Char(int x1, int y1, char16_t c, byte he_so_phong_to, bool color);
// phóng to kích thước
