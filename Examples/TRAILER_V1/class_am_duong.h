class am_duong: public object {

  private: byte X1, Y1, X2, Y2 ; //tọa độ điểm trên đường tròn

    byte R_nho;// R_nho: bán kính của hình tròn nhỏ
  public:
    am_duong( byte r) {
      // static_x0,static_y0,r tọa độ TÂM và NỬA bán kính của hình tròn âm dương

      R = r;
      R_nho = R / 2;
      //constructor

    }
    void  action(int goc, byte color) {
      //góc quay
      lcd.find_xy_elip( static_x0, static_y0, R, R, goc);
      X1 = lcd.x_elip( );
      Y1 = lcd.y_elip( );
      // HÌNH THỨ 2 quay trước 180 độ
      lcd.find_xy_elip(static_x0, static_y0, R, R, goc + 180);
      X2 = lcd.x_elip();
      Y2 = lcd.y_elip();
      ve_long_trang(X1, Y1, !color);
      ve_long_den(X2, Y2, color);
    }

    void  action_2(int goc, byte color) {
      //góc quay
      lcd.find_xy_elip(static_x0 - R * 2, static_y0, R, R, goc);
      X1 = lcd.x_elip( );
      Y1 = lcd.y_elip( );
      // HÌNH THỨ 2 quay trước 180 độ
       lcd.find_xy_elip(static_x0 + R * 2, static_y0, R, R, goc + 180);
      X2 = lcd.x_elip( );
      Y2 = lcd.y_elip( );
      ve_long_trang(X1, Y1, !color);
      ve_long_den(X2, Y2, color);
    }
    void ve_long_trang(byte static_x0, byte static_y0, byte color) {

      // VẼ TRÒN lòng trắng
      lcd.fillcircle( static_x0, static_y0, R, BLACK); // ngoài
      lcd.fillcircle( static_x0, static_y0, R_nho, color); //trong
      lcd.display();
    }

    void ve_long_den(byte static_x0, byte static_y0, byte color) {

      // VẼ TRÒN lòng đen

      lcd.fillcircle( static_x0, static_y0, R, WHITE); //ngoài
      lcd.fillcircle( static_x0, static_y0, R_nho, color); //trong
      lcd.display();
    }
};


