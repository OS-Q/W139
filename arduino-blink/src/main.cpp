/*******************************************************************************
****版本：V1.0.0
****平台：msp430
****日期：2021-05-21
****作者：Qitas
****版权：OS-Q
*******************************************************************************/
#include <Arduino.h>

void setup()
{
  // initialize LED digital pin as an output.
  pinMode(RED_LED, OUTPUT);
}

void loop()
{
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(RED_LED, HIGH);
  // wait for a second
  delay(1000);
  // turn the LED off by making the voltage LOW
  digitalWrite(RED_LED, LOW);
   // wait for a second
  delay(1000);
}

/*---------------------------(C) COPYRIGHT 2021 OS-Q -------------------------*/
