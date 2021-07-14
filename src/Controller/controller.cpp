#include "Controller/controller.h"
#include "Dispaly/display.h"

display disp;

controller::controller(const int& leftZeroFac, const int& rightZeroFac)
{
    disp.displayWriteText("Begin Calibration", 3, 6);
    disp.displayWriteText("Left: ", 3, 13);
    disp.displayWriteText(String(leftZeroFac), 3, 25);
    disp.displayWriteText("Right: ", 3, 20);
    disp.displayWriteText(String(rightZeroFac), 3, 25);
    disp.displayDelay(3000);
}

controller::controller(loadCell cell)
{
    leftHandForceAvr = cell.
}

void controller::SetDisplayText()
{
    disp.displayWriteText(t, x, y);
}

void controller::DisplayDelay(const int& ms)
{
    disp.displayDelay(ms);
}

controller::~controller(){}