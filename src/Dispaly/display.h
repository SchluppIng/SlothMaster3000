#include <Adafruit_SSD1331.h>
#include <Adafruit_GFX.h>

//Pins for Oled Display
// You can use any (4 or) 5 pins
#define sclk 13
#define mosi 11
#define cs   10
#define rst  9
#define dc   8

Adafruit_SSD1331 Disp;

class display
{
private:
    // Color definitions
    #define BLACK           0x0000
    #define BLUE            0x001F
    #define RED             0xF800
    #define GREEN           0x07E0
    #define CYAN            0x07FF
    #define MAGENTA         0xF81F
    #define YELLOW          0xFFE0
    #define WHITE           0xFFFF
    #define DBLUE           0x0005

public:
    //Constructor
    display();
    //Methods
    void displayTestPattern();

};