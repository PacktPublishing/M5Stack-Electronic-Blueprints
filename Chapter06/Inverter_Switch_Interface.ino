/*
  Control_LED_by_Button

  modified 2021/6/30
  by http://www.freenove.com
*/

int M5StackPin = 2;  // The M5Stack Core 2 pin
int ControlPin = 13;     // The Inverter Output Control pin

void setup() {
  pinMode(M5StackPin, INPUT);  // Set the M5Stack Core 2 pin as an input 
  pinMode(ControlPin, OUTPUT);    // Set the ControlPin as an output 
}

void loop() {
  if (digitalRead(M5StackPin) == HIGH) // if the M5Stack Core 2 UI ON button is pressed
    digitalWrite(ControlPin, HIGH);        // switch ON the Inverter Output ControlPin
  else                                // if the M5Stack Core 2 UI OFF button is pressed
    digitalWrite(ControlPin, LOW);       // switch OFF the Inverter Output ControlPin
}
