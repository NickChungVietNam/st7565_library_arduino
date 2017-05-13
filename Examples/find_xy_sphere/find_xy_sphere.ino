


#include "ST7565_homephone.h"
ST7565 lcd(3,4,5,6);//RST, SCLK, A0, SID

void setup()   { 
  lcd.ON();  
  lcd.SET(23,0,0,0,4);
}
void loop(){
 byte x0=63,y0=31,a=40,b=10;
 byte x,y;
//part 1
  for( int alpha=0; alpha<360; alpha+=10){
 for(int beta=0; beta<360; beta++){
  
  lcd.Find_XY_Sphere(x0,y0,a,b,alpha,beta);
    x=lcd.X_Sphere();
    y=lcd.Y_Sphere();

    
    lcd.DrawPixel( x,y,BLACK);
    lcd.Display();
  }
  lcd.Clear();
 }
//part2

for( byte count=0; count<2; count++){// làm lại 2 lần khói lệnh dưới
 for(int beta=0; beta<360; beta+=10){
  for( int alpha=0; alpha<360; alpha++){
    
  lcd.Find_XY_Sphere(x0,y0,a,b,alpha,beta);
    x=lcd.X_Sphere();
    y=lcd.Y_Sphere();
    lcd.DrawPixel( x,y,BLACK);
    lcd.Display();
  }
   if(count==0){lcd.Clear();} else{}
 }
}
  
}
// void Find_XY_Sphere(int x0, int y0,  int a, int b, int goc_alpha, int goc_beta);
//int X_Sphere(); 
///int Y_Sphere();


// tìm tọa độ của điểm A(x,y) có tập quãy đạo là một mặt cầu
// mặt phẳng nằm ngang qua tâm cắt nửa hình cầu là 1 ellipse có tâm x0,y0, bán kính a,b
//trên mặt phẳng nằm ngang, hình chiếu vuông góc của điểm A là A' hớp với trục hoành góc alpha
//trên mặt phẳng đứng qua tâm chứa A, góc hợp bởi điểm A và A' là góc beta
// alpha : 0->360 (min -32768 ->32767)
// beta: 0->360   (min -32768 -> 32767);
