#include "Scale/scale.h"

//Constructor
loadCell::loadCell()
{
    LoadCellLeft.begin(DOUT_PIN_LEFT, SCK_PIN_LEFT);
    LoadCellRight.begin(DOUT_PIN_RIGHT, SCK_PIN_RIGHT);
}

void loadCell::tareLoadCell()
{

}

void loadCell::readLoadCell()
{

}