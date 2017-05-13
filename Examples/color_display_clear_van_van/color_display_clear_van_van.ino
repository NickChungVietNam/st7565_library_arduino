// đây là phần hướng dẫn dùng các cài đặt liên quan

#include "ST7565_homephone.h"
ST7565 lcd(3,4,5,6);
//color: chỉ chấp nhận 3 loại sau BLACK (1), WHITE(0),DELETE(0), 
// lcd.display();: là hàm cho phép màn hình hiển thị những gì đã vẽ
// lcd.clear(); : xóa tất cả màn hình 

void setup()   {  
  lcd.ON(); 
  lcd.SET(23,0,0,0,4);
  }


void loop(){
  lcd.Rect( 60,30,20,20,BLACK);// vẽ hcn A màu đen 
  lcd.Display();
  delay(1000);
  lcd.Rect( 60,30,20,20,DELETE);// xóa hcn  A
  lcd.Display();
  delay(1000);
  lcd.Rect( 40,30,20,20,BLACK);// vẽ hcn B màu đen 
  lcd.Display();
  delay(1000);
  lcd.Rect( 40,30,20,20,WHITE);//vẽ hcn B màu trắng 
  lcd.Display();
  delay(1000);
  lcd.Clear();// xóa toàn màn hình
}


 

