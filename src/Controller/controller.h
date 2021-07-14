#pragma once

#include <string>

#include "Scale/scale.h"

using namespace std;

class controller
{
    private:
    float leftHandForceAvr, rightHandForceAvr, totalForceAvr;
    float leftHandForceMax, rightHandForceMax, totalForcMax;

    public:
        //Constructor
        controller(const int& leftZeroFac, const int& rightZeroFac);
        controller(loadCell cell);
        //Destructor
        ~controller();
};