#include <HX711.h>
#include <ArduinoSTL.h>
#include "Dispaly/display.h"

//Pins for Load cells
#define DOUT_PIN_LEFT 4
#define SCK_PIN_LEFT 5
#define DOUT_PIN_RIGHT 6
#define SCK_PIN_RIGHT 7

//Loads cells
HX711 LoadCellLeft;
HX711 LoadCellRight;

class loadCell{
private:
    //Values for load handling
    float leftHandForceAvr, rightHandForceAvr, totalForceAvr;
    float leftHandForceMax, rightHandForceMax, totalForcMax;
    std::vector<float> vctLeftHandForce;
    std::vector<float> vctRightHandForce;
    const float gravity = 9.81;
    display disp;

public:
    //Constructor
    loadCell();  

    //Methods
    void tareLoadCell();
    void readLoadCell();
};