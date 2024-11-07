#include "KY40Controller.h"

KY40Controller::KY40Controller() {
    this->value = 0;
}

KY40Controller::KY40Controller(int pin_clk, int pin_dt, int pin_sw) {
    this->PIN_CLK = pin_clk;
    this->PIN_DT = pin_dt;
    this->PIN_SW = pin_sw;
}

