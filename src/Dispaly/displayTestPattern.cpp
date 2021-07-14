#include <Arduino.h>
#include <Adafruit_SSD1331.h>
#include <Adafruit_GFX.h>
#include <Adafruit_I2CDevice.h>
#include "Dispaly/display.h"

void display::displayTestPattern()
{
  uint8_t w, h;
  Disp.setAddrWindow(0, 0, 96, 64);

  for (h = 0; h < 64; h++)
  {
    for (w = 0; w < 96; w++)
    {
      if (w > 83)
      {
        Disp.writePixel(w, h, WHITE);
      }
      else if (w > 71)
      {
        Disp.writePixel(w, h, BLUE);
      }
      else if (w > 59)
      {
        Disp.writePixel(w, h, GREEN);
      }
      else if (w > 47)
      {
        Disp.writePixel(w, h, CYAN);
      }
      else if (w > 35)
      {
        Disp.writePixel(w, h, RED);
      }
      else if (w > 23)
      {
        Disp.writePixel(w, h, MAGENTA);
      }
      else if (w > 11)
      {
        Disp.writePixel(w, h, YELLOW);
      }
      else
      {
        Disp.writePixel(w, h, BLACK);
      }
    }
  }
  Disp.endWrite();
  Disp.fillScreen(DBLUE);
  Disp.drawRect(0, 0, 96, 64, GREEN);

  Disp.setTextColor(CYAN);
  Disp.setCursor(8, 15);
  Disp.setTextSize(1);
  Disp.println("Temp. Monitor");
  Disp.setCursor(8, 29);
  Disp.println("S. Schonhoeft");
  Disp.setCursor(23, 44);
  Disp.println("Dec. 2019");
  
  displayDelay(3000);
}