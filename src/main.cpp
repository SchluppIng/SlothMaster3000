#include <Arduino.h>
#include "Scale/scale.h"
#include "Dispaly/display.h"

void setup() 
{
  // put your setup code here, to run once:
  display disp;
  loadCell cell;
  cell.tareLoadCell();
}

void loop() 
{
  // put your main code here, to run repeatedly:
}