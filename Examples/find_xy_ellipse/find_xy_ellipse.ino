


#include "ST7565_homephone.h"
ST7565 lcd(3,4,5,6);//RST, SCLK, A0, SID


void setup()   {
  lcd.ON();   
  lcd.SET(23,0,0,0,4);
}
void loop(){
  byte x,y;
  byte x0=60, y0=30, a=30,b=20;
  for( int goc=0; goc<360; goc++){
    
    lcd.Find_XY_Elip(x0,y0,a,b,goc);
    x=lcd.X_Elip();
    y=lcd.Y_Elip();

    
    lcd.DrawPixel( x,y,BLACK);
    lcd.Display();
    delay(100);
  }
  
  lcd.Clear();
}
// void Find_XY_Elip(int x0, int y0,  int a,  int b,int goc_alpha) ;
//int X_Elip();
//int Y_Elip();
// TRẢ VỀ TỌA ĐỘ (X,Y) CỦA ĐIỂM THUỘC ĐƯỜNG ELLIPSE
//TÌM TẬP CÁC ĐIỂM CÓ QUỸ ĐẠO THUỘC ELLIPSE
// goc_alpha: góc ( độ) tạo bởi điểm đó với trục hoành ( xem hình minh họa nhé); 
// góc nhỏ alpha min=-32768, alpha max=32767 

