#include "Dispaly/display.h"

display::display()
{
    Disp = Adafruit_SSD1331(cs, dc, rst);
    Disp.begin();
    displayTestPattern();
}