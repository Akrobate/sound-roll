#ifndef KY40Controller_h
#define KY40Controller_h

class KY40Controller {

    private:
        int value = 0;

        int PIN_CLK = 0;
        int PIN_DT = 0;
        int PIN_SW = 0;

    public:
        KY40Controller();
        KY40Controller(int pin_clk, int pin_dt, int pin_sw);

        void init();
        void update();

};

#endif