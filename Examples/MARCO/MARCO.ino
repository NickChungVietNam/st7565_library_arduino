

#include "ST7565_homephone.h"
// add a bitmap library of a 16x16 fruit icon
ST7565 lcd(3, 4, 5, 6);

void setup()   {
  lcd.ON();
  lcd.SET(20, 0, 0, 0, 4);

  
}
// bạn có thể khai báo hàm theo 2 kiểu sau đây:
/*
allpixel    AllPixel
drawline    DrawLine
drawpixel   DrawPixel
getpixel   GetPixel
fillcircle   FillCircle
circle   Circle
corner   Corner
fillcorner   FillCorner
rect   Rect
fillrect   FillRect
tri   Tri
filltri   FillTri
elip   Elip
fillelip   FillElip
bitmap   Bitmap
plus_bitmap   Plus_Bitmap
asc_char   Asc_Char
asc_string   Asc_String
uni_char   Uni_Char
uni_string   Uni_String
runstatus   RunStatus
number_long   Number_Long
number_ulong   Number_Ulong
number_float   Number_Float
keep_angle   Keep_Angle
find_xy_elip   Find_XY_Elip
x_elip   X_Elip
y_elip   Y_Elip
find_xy_sphere   Find_XY_Sphere
x_sphere   X_Sphere
y_sphere   Y_Sphere
analog   Analog
pullup_4   Pullup_4
clear   Clear
display  Display

*/
void loop() {
lcd.Circle(30,30,20,BLACK);
lcd.circle(90,30,20,BLACK);
lcd.display();


}

