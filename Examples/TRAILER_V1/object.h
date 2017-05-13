class object {
  private:
  public:
byte COLOR;
    static byte static_x0, static_y0;// tâm của màn hình
    byte X, Y, W, H;
    byte X0, Y0; // tâm
    byte R, A, B;
    /*
      x,y: tọa độ
      w,h:  chiều rộng, chiều cao
      r: bán kính tròn
      a,b : bán kính trục ngang, trục dọc(ellipse-sphere)*/
};
byte object::static_x0 = 63;
byte object::static_y0 = 31;
