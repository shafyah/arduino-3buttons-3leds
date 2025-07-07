const int buttonPins[3]={2,3,4};  // the number of the pushbutton pin
const int ledPins[3]= {13,12,11};
// variables will change:
int buttonStates[3]= {0,0,0};  // variable for reading the pushbutton status

void setup() {
  for (int i=0; i<3;i++) {
  // initialize the LED pin as an output:
    pinMode(ledPins[i], OUTPUT);
  // initialize the pushbutton pin as an input:
    pinMode(buttonPins[i], INPUT);
  }
}

void loop() {
  for (int i = 0; i<3;i++) {
  // read the state of the pushbutton value:
    buttonStates[i]= digitalRead(buttonPins[i]);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonStates[i] == HIGH) {
    // turn LED on:
    digitalWrite(ledPins[i], HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPins[i], LOW);
  }
}
}