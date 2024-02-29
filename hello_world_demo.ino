//Code for hello world button press
int buttonPin = 2;    //holds location of button
int buttonState = 0;  //holds value of button, 1 is pressed 0 is not pressed
void setup() {
  Serial.begin(9600);  //start serial monitor with a refresh rate of 9600
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == 1) {
    Serial.println("Hello TCNJ Workshop!");  //print a message
    delay(250);                              //delay for 1/4 second
  }
}