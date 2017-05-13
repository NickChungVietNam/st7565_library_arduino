/*
   Ý tưởng:
  Hình chính sẽ xuất hiện ở giữa màn hình,
  hình phụ xuất hiện 2 bên( nếu muốn)
  Phình to dần ra
  thay đổi kích thước
  đợi 1 chút
  thu nhỏ dần lại
  hình kế tiếp
  : thuộc tính:
  tâm: x0, y0;
  kích thước max: width_max, high_max;
  loại(type): fill hay không
  màu : b-w

*/
class test_draw: public object {
  private:
    byte width_max, high_max, type, r_max;
    bool color;
    byte whmax;
    int goc_ban_dau;
    int xa, ya, xb, yb, xc, yc; // tọa đọ 3 ddiemr tam giác
    byte a_max, b_max;// bán kính trục ngang-dọc max ellipse
  public:
    test_draw( byte x0, byte y0, byte r) { //cho circle 
      // constructor
      X0 = x0;
      Y0 = y0;
      r_max = r; // r max

    }

    test_draw( byte x0, byte y0, byte a, byte b, byte none1, byte none2) { //cho ellipse
      // constructor
      X0 = x0;
      Y0 = y0;
      a_max=a;
      b_max=b;
      A=1;
      B=1;

    }

    test_draw( byte x0, byte y0, byte w, byte h, byte r) { // dành cho corner
      // constructor
      whmax = w > h ? w : h; // tìm max nếu w>h: true thì whmax=w
      X0 = x0;
      Y0 = y0;
      width_max = w;
      high_max = h;
      r_max = r;
      R = 0;
    }
    test_draw( byte x0, byte y0, byte r, int goc) { // triangle
      X0 = x0;
      Y0 = y0;
      r_max = r; // r max bán kính đường tròn ngoại tiếp tam giác đó
      goc_ban_dau = goc;

    }
    void ellipse_action( byte r){
      lcd.elip(X0,Y0,A,B,DELETE);
      if(r<=a_max){A=r;}
      if(r<=b_max){B=r;}
      lcd.elip(X0,Y0,A,B,BLACK);
    }
    void triangle_action( byte r) {
      //xóa ảnh cũ
      lcd.tri(xa, ya, xb, yb, xc, yc, DELETE);

      if (r <= r_max) {
        R = r;
      }//else{R=R;}
      lcd.find_xy_elip(X0, Y0, R, R, goc_ban_dau);
      xa = lcd.x_elip();
      ya = lcd.y_elip();
      lcd.find_xy_elip(X0, Y0, R, R, goc_ban_dau + 120);
      xb = lcd.x_elip();
      yb = lcd.y_elip();
      lcd.find_xy_elip(X0, Y0, R, R, goc_ban_dau + 240);
      xc = lcd.x_elip();
      yc = lcd.y_elip();

      //ta thu được 3 đỉnh của 1 tam giác đều
      // vẽ thôi
      lcd.tri(xa, ya, xb, yb, xc, yc, BLACK);

    }
    void circle_action(byte r) {
      lcd.circle(X0, Y0, R, DELETE);
      if (r <= r_max) {
        R = r;
      }//else{R=R;}

      lcd.circle(X0, Y0, R, BLACK);
    }
    void corner_action(byte denta) {

      //x0-width/2 là trọng tâm của hcn
      lcd.corner(X0 - W / 2, Y0 - H / 2, W, H, R, DELETE);
      if (denta <= width_max) {
        W = denta;
      }
      if (denta <= high_max) {
        H = denta;
      }
      if ((denta > whmax) && (denta - whmax <= r_max)) {
        R = denta - whmax;
      }
      lcd.corner(X0 - W / 2, Y0 - H / 2, W, H, R, BLACK);
    }
};
