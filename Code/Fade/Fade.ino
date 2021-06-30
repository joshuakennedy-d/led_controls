int led = 9;           // use any PWM pin in Arduino
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

void setup() {
  // declaring pin 9 as an output:
  pinMode(led, OUTPUT);
}
void loop() {
  analogWrite(led, brightness);             // set the brightness of pin 9:
  brightness = brightness + fadeAmount;    // change the brightness for next time through the loop:
  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
    delay(30);  // wait for 30 milliseconds to see the dimming effect
}
