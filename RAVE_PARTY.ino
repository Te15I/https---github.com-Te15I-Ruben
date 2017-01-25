const byte ledPins[4] = {6, 9, 10, 11};

void setup() {
  // put your setup code here, to run once:
  for(int i = 0; i <= 3; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:       

  for(int i = 0; i <= 3; i++){
    digitalWrite(ledPins[i], HIGH);
    delay(250);
  }

  for(int i = 0; i <= 3; i++){
    digitalWrite(ledPins[i], LOW);
    delay(250);
  }
}
