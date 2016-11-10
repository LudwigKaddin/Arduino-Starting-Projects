void setup() {
  // put your setup code here, to run once:

pinMode(13, OUTPUT); // Sets pin 13 to OUTPUT, sending 3.3 volts to the LED.


}

void loop() {
  // put your main code here, to run repeatedly:


digitalWrite(13, HIGH); // Enables/lights the LED (on)
delay(1000); // Delays the code for 1000 miliseconds (1 second)
digitalWrite(13, LOW); // Disbales the LED (off)
delay(1000); // Delays the code for 1000 miliseconds and starts the code over again (last line of the code)

}