#include <Arduino.h>
#include "Scale/scale.h"
#include "Dispaly/display.h"

display disp;
loadCell cell;

void setup() 
{
  // put your setup code here, to run once:
  cell.tareLoadCell();
}

void loop() 
{
  cell.readLoadCell();
}