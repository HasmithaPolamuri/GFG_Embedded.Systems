//C++ code


int o_ledPin = 9; // the PWM pin the LED is attached to
int brightness = 0; // how bright the LED is
int fadeAmount = 5; // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup() {
   // declare pin 9 to be an output:
   pinMode(o_ledPin, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
   // set the brightness of pin 9:
   analogWrite(o_ledPin, brightness);
   // change the brightness for next time through the loop:
   brightness = brightness + fadeAmount;
   // reverse the direction of the fading at the ends of the fade:
   if (brightness == 0 || brightness == 255) {
      fadeAmount = -fadeAmount ;
   }
   // wait for 20 milliseconds to see the dimming effect
   delay(20);
}
