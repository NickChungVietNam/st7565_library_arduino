


#include "ST7565_homephone.h"
ST7565 lcd(3,4,5,6);//RST, SCLK, A0, SID


//cài đặt chân input là 4 chân analog
//chú ý: 4 nút nối ở chế độ PULL Up ( tìm hiểu cách nối trước khi tiếp tục);
#define right_b A3
#define up_b A2
#define left_b A1
#define down_b A0
void setup()   {   
  Serial.begin(9600);
  lcd.SET(23,0,0,0,4);
pinMode(left_b,INPUT_PULLUP);       
pinMode(down_b,INPUT_PULLUP);
pinMode(right_b,INPUT_PULLUP); 
pinMode(up_b,INPUT_PULLUP); 
}
void loop(){
  byte value;
  
value=lcd.Pullup_4(right_b,  up_b, left_b, down_b);
Serial.println(value);// mở cửa sổ monitor để xem
  
}

//button_4_pullup(byte right_pin,  byte up_pin, byte left_pin, byte down_pin);
 //hàm có chức năng trả về chỉ số của nút tương ứng khi chúng được nhấn
//=0 nếu không có nút nào được nhấn
//=1 right
//=2 up
//=3 left 
//=4 down
//1*2=20 right và up
//1*3=30 right và left
//1*4=40 right và down
//2*3=60 up và left
//2*4=80 up và down
//3*4=120 left và down
/*
 * tính theo chiều dương của 4 góc phần tư
_______[2]
___[3]_____[1]
_______[4]
*/ 
