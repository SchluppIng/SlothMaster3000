#ifndef scale
#define scale

#include <Arduino.h>
#include <ArduinoSTL.h>
#include <HX711.h>
#include <algorithm>

//Pins for Load cells
#define DOUT_PIN_LEFT 4
#define SCK_PIN_LEFT 5
#define DOUT_PIN_RIGHT 6
#define SCK_PIN_RIGHT 7

//Load Cells
HX711 LoadCellLeft;
HX711 LoadCellRight;

class loadCell{
private:
    //bool read  = true;
    unsigned long time;
    long zeroFacLeft, zeroFacRight;

public:
    //Constructor
    loadCell();  

    //Methods
    void tareLoadCell();
    void readLoadCell();
    void comitValuesToDisplay();
    void prepare();

    //Variables
    //Values for load handling
    float leftHandForceAvr, rightHandForceAvr, totalForceAvr;
    float leftHandForceMax, rightHandForceMax, totalForcMax;
    std::vector<float> vctLeftHandForce;
    std::vector<float> vctRightHandForce;
    const float gravity = 9.81;
};