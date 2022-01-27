// Constants
const int buttonPin = 2;
const int ledPin = 13;

int buttonState = 0;
int lastButtonState = 0;
int ledState = 0;

void setup() {
  // init led
  pinMode(ledPin, OUTPUT);
  // init button
  pinMode(buttonPin, INPUT);

  buttonState = digitalRead(buttonPin);
}

void loop() {
  // Toggle LED code found from https://www.arduinogetstarted.com/tutorials/arduino-button-toggle-led
  lastButtonState = buttonState; // save current state
  buttonState = digitalRead(buttonPin);

  if(lastButtonState == HIGH && buttonState == LOW){
    printH();
    printE();
    printL();
    printL();
    printO();
  }
  
}
void dot(){
  digitalWrite(ledPin, HIGH);
  delay(200);
  digitalWrite(ledPin, LOW);
  delay(200);
}
void dash(){
  digitalWrite(ledPin, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);
  delay(200);
}
void printH(){
  // Morse: ....
  dot();
  dot();
  dot();
  dot();
  // delay for next letter
  delay(500);
}
void printE(){
  // Morse: .
  dot();
  // delay for next letter
  delay(500);
}
void printL(){
  // Morse: .-..
  dot();
  dash();
  dot();
  dot();
  // delay for next letter
  delay(500);
}
void printO(){
  // Morse: ---
  dash();
  dash();
  dash();
  // delay for next letter
  delay(500);
}
