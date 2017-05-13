class nguyen_tu: public object {
  private:
    byte X1, Y1; // TỌA độ điểm cần tìm trên mặt cầu

  public:
    nguyen_tu(byte a, byte r) {
      //contructor
      // x,y: tâm khối cầu
      // X0=x0;
      //  Y0=y0;
      A = a; // bán kính ngang khối cầu
      B = a / 5; // bán kính trục dọc

      R = r; // bán kính của nguyên tử
    }

    void action(int goc_al, int goc_be, bool xoa) {// góc alpha và beta
      if (xoa) {
        lcd.fillcircle(X1, Y1, R, DELETE); // xóa ảnh cũ

      }
lcd.find_xy_sphere(static_x0, static_y0, A, B, goc_al, goc_be);
      X1 = lcd.x_sphere();
      Y1 = lcd.y_sphere();

      lcd.fillcircle(X1, Y1, R, BLACK); // vẽ ảnh mới
      lcd.display();

    }
};

