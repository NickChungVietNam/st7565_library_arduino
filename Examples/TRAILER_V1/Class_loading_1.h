
class loading_1: public object {
  private:
    bool phinh_to, thu_nho;
    //vẽ hcn , x,y tọa độ gốc lúc chưa phồng, x,y =const
    //w,h độ rộng và chiều cao lúc chưa phồng, w,h =const
    //x_0 hoành độ của hcn đầu tiên
    //DENTA phồng to bao nhiêu pixel
  public:
    byte X_0;
    int DENTA;
    byte denta_max = 4;
    void dra(  byte i) {
      //i hcn thứ i
      lcd.fillrect(X_0 + (W + denta_max)*i - DENTA, Y - DENTA, W + DENTA * 2, H + DENTA * 2, BLACK);
      lcd.display();

    }

    void del(  byte i) {
      //i hcn thứ i
      lcd.fillrect(X_0 + (W + denta_max)*i - DENTA, Y - DENTA, W + DENTA * 2, H + DENTA * 2, DELETE);
      lcd.display();

    }
    void set_denta(byte i, byte denta) {
      DENTA = denta;
    }
    void action(byte i) {
      del(i);
      if (DENTA >= denta_max) {
        phinh_to = false;
      }
      if (DENTA <= 0) {
        phinh_to = true;
      }
      if (phinh_to == true) {
        DENTA++;
      } else {
        DENTA--;
      }
      dra(i);
    }
    loading_1() {
      // contructor
      phinh_to = true;
      X_0 = 50;
      Y = 30;
      W = 2;
      H = 9;
      DENTA = -300;
    }


};
