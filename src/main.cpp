#include <Arduino.h>
#include "Scale/scale.h"
#include "Dispaly/display.h"

display disp;
loadCell cell;

void setup() 
{
  Serial.begin(9600);
  // put your setup code here, to run once:
  cell.tareLoadCell();
}

void loop() 
{
  cell.prepare();
  cell.readLoadCell();
  //cell.tareLoadCell();
  cell.comitValuesToDisplay();
}