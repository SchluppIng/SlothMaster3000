#include <Arduino.h>
#include <Adafruit_SSD1331.h>
#include <Adafruit_GFX.h>
#include <Adafruit_I2CDevice.h>
#include "Dispaly/display.h"

display::display()
{
    //Disp = Adafruit_SSD1331(cs, dc, rst);
    Disp.begin();
    displayTestPattern();
}

void display::displayDelay(const int &ms)
{
    delay(ms);
}

void display::displayWriteText(const String& text, const float& value, const String& unit, const int& xpos, const int& ypos)
{
    Disp.fillScreen(DBLUE);
    Disp.drawRect(0, 0, 96, 64, GREEN);

    Disp.setTextColor(CYAN);
    Disp.setCursor(xpos, ypos);
    Disp.print(text);
    Disp.setCursor(xpos + 25, ypos);
    Disp.print(value, 1);
    Disp.setCursor(xpos + 45, ypos);
    Disp.print(unit);

    displayDelay(10000);
}

void display::displayWriteText(const String& text, const int& xpos, const int& ypos)
{

}

void display::displayTimer(const String& text, const int& ms, const bool& WaitHang)
{
    Disp.setTextColor(CYAN);
    Disp.setCursor(15, 15);
    Disp.println(text);
    Disp.setCursor(22, 22);
    Disp.drawRect(22, 22, 32, 29, DBLUE);
    if(WaitHang == true)
        Disp.println(ms, 0);
    else
        Disp.println(ms, 1);
}