#include <Adafruit_SSD1331.h>
#include <Adafruit_GFX.h>
#include <Adafruit_I2CDevice.h>

//Pins for Oled Display
// You can use any (4 or) 5 pins
#define sclk 13
#define mosi 11
#define cs   10
#define rst  9
#define dc   8

class display
{
private:
    Adafruit_SSD1331 Disp = Adafruit_SSD1331(cs, dc, rst);
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
    void displayDelay(const int &ms);
    void displayWriteText(const String& text, const float& value, const String& unit, const int& xpos, const int& ypos);
    void displayWriteText(const String& text, const int& xpos, const int& ypos);
    void displayTimer(const String& text, const int& ms, const bool& WaitHang);
};