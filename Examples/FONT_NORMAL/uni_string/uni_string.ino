

#include "ST7565_homephone.h"


ST7565 lcd(3,4,5,6);

void setup()   {
  lcd.ON();   
  lcd.SET(20,0,0,0,4);
}

void loop(){
//c1:
lcd.Uni_String( 30, 15,Uni( u"\x111\x1ECF"), BLACK);//đỏ
//c2:
const static char16_t text[] PROGMEM =u"\x111\x65n";//đen
lcd.Uni_String( 30, 35,text, BLACK);
  
lcd.Display();
}

//void Uni_String(int x, int y, char16_t c[] , bool color);

//cài bộ gõ UNIKEY ở chế độ "unicode c string", nhấn "Đóng" rồi gõ như bình thường nhé
// viết 1 chuỗi chữ Việt, 
// x,y: tọa độ con trỏ căn lề
// char16_t : kiểu char 16bit, nhập vào chữ chuẩn mã hóa Unicode
//PROGMEM: lưu hằng vào Flash
// chú ý tiền tố : u" "
