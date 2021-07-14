#include "Scale/scale.h"

//display disp;
//Constructor
loadCell::loadCell()
{
    LoadCellLeft.begin(DOUT_PIN_LEFT, SCK_PIN_LEFT);
    LoadCellRight.begin(DOUT_PIN_RIGHT, SCK_PIN_RIGHT);
    tareLoadCell();
}

void loadCell::tareLoadCell()
{   
    zeroFacLeft = LoadCellLeft.read_average();
    LoadCellLeft.set_scale(zeroFacLeft);
    LoadCellLeft.tare();

    zeroFacRight = LoadCellRight.read_average();
    LoadCellRight.set_scale(zeroFacRight);
    LoadCellRight.tare();

    //controller con(zeroFacLeft, zeroFacRight);
}

void loadCell::readLoadCell()
{
    time = 0;
    //Measurement
    while(time <= 7000)
    {   
        time = millis();
        //disp.displayTimer("Hang for: ", time / 1000, false);
        vctLeftHandForce.push_back(LoadCellLeft.read());
        vctRightHandForce.push_back(LoadCellRight.read());        
    }

    //Average values
    for(unsigned int i = 0; i < vctLeftHandForce.size(); i++)
    {
        leftHandForceAvr += vctLeftHandForce.at(i);
        rightHandForceAvr += vctLeftHandForce.at(i);
    }
    
    leftHandForceAvr = leftHandForceAvr / vctLeftHandForce.size();
    rightHandForceAvr = rightHandForceAvr / vctRightHandForce.size();

    leftHandForceMax = *std::max_element(vctLeftHandForce.begin(), vctLeftHandForce.end());
    rightHandForceMax = *std::max_element(vctRightHandForce.begin(), vctRightHandForce.end());
}

void loadCell::comitValuesToDisplay()
{
    /*disp.displayWriteText("Avr. Left: ", leftHandForceAvr, "kg", 3, 6);
    disp.displayWriteText("Avr. Right: ", rightHandForceAvr, "kg", 3, 18);
    disp.displayWriteText("Avr. Total: ", leftHandForceAvr + rightHandForceAvr, "kg", 3, 6);

    disp.displayWriteText("Avr. Left: ", leftHandForceAvr * gravity, "N", 3, 6);
    disp.displayWriteText("Avr. Right: ", rightHandForceAvr * gravity, "N", 3, 18);
    disp.displayWriteText("Avr. Total: ", (leftHandForceAvr + rightHandForceAvr) * gravity, "N", 3, 6);

    disp.displayWriteText("Max. Left: ", leftHandForceAvr, "kg", 3, 6);
    disp.displayWriteText("Max. Right: ", rightHandForceAvr, "kg", 3, 18);
    disp.displayWriteText("Max. Total: ", leftHandForceAvr + rightHandForceAvr, "kg", 3, 6);

    disp.displayWriteText("Max. Left: ", leftHandForceAvr * gravity, "N", 3, 6);
    disp.displayWriteText("Max. Right: ", rightHandForceAvr * gravity, "N", 3, 18);
    disp.displayWriteText("Max. Total: ", (leftHandForceAvr + rightHandForceAvr) * gravity, "N", 3, 6);*/
}

void loadCell::prepare()
{
    time = 0;
    float mytime = 5000;
    while(mytime >= 0)
    {   
        mytime = mytime - time;
        time = millis();
        //disp.displayTimer("Hang for: ", time / 1000, true);        
    }
}