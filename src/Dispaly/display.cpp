#include "Dispaly/display.h"

display::display()
{
    Disp = Adafruit_SSD1331(cs, dc, rst);
    Disp.begin();
    displayTestPattern();
}

void display::displayDelay(const int &ms)
{
    delay(ms);
}

void display::displayWriteText(String text, int xpos, int ypos)
{

}


