

#define BLYNK_TEMPLATE_ID "TMPL3hQ3bZjWW"
#define BLYNK_TEMPLATE_NAME "Tap controller"

#define BLYNK_FIRMWARE_VERSION "0.1.0"
#define BLYNK_PRINT Serial
#include "BlynkEdgent.h"
#include<Servo.h>
Servo servo;

BLYNK_WRITE(V0)
{
  int s0 = param.asInt(); 
  servo.write(s0);
  Blynk.virtualWrite(V1, s0);
}

void setup()
{
  Serial.begin(9600);
  servo.attach(13);
  BlynkEdgent.begin();
  delay(2000); 
}

void loop() 
{
  BlynkEdgent.run();
}
