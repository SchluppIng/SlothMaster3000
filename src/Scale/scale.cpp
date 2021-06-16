#include "Scale/scale.h"

//Constructor
loadCell::loadCell()
{
    LoadCellLeft.begin(DOUT_PIN_LEFT, SCK_PIN_LEFT);
    LoadCellRight.begin(DOUT_PIN_RIGHT, SCK_PIN_RIGHT);
}

void loadCell::tareLoadCell()
{
    LoadCellLeft.tare();
    LoadCellRight.tare();
}

void loadCell::readLoadCell()
{
    time = millis();
    //Measurement
    while(time <= 7000)
    {   
        vctLeftHandForce.push_back(LoadCellLeft.read());
        vctRightHandForce.push_back(LoadCellRight.read());
    }

    //Average values
    for(int i = 0; i < vctLeftHandForce.size(); i++)
    {
        leftHandForceAvr += vctLeftHandForce.at(i);
        rightHandForceAvr += vctLeftHandForce.at(i);

    }
    
    leftHandForceAvr = leftHandForceAvr / vctLeftHandForce.size();
    rightHandForceAvr = rightHandForceAvr / vctRightHandForce.size();

    leftHandForceMax = *std::max_element(vctLeftHandForce.begin(), vctLeftHandForce.end());
    rightHandForceMax = *std::max_element(vctRightHandForce.begin(), vctRightHandForce.end());
}