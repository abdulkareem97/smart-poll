int flamePin = 3; // define flame sensor pin
int Buzzer = 13; // define LED pin

void setup() {
  pinMode(flamePin, INPUT); // set flame sensor pin as input
  pinMode(Buzzer, OUTPUT); // set LED pin as output
  Serial.begin(9600); // initialize serial communication
}

void loop() {
  int flameValue = digitalRead(flamePin); // read flame sensor value
  Serial.println(flameValue); // print flame sensor value to serial monitor
  
  if (flameValue == 0) { // if flame is detected
    digitalWrite(Buzzer, HIGH); // turn on LED
  } else { // if no flame is detected
    digitalWrite(Buzzer, LOW); // turn off LED
  }
  delay(100); // delay for stability
}