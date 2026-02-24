int redPin = 9;
int greenPin = 10;
int bluePin = 11;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void setColor(int red, int green, int blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}

void loop() {

  setColor(255, 0, 0);     // Red
  delay(1000);

  setColor(0, 255, 0);     // Green
  delay(1000);

  setColor(0, 0, 255);     // Blue
  delay(1000);

  setColor(255, 255, 0);   // Yellow
  delay(1000);

  setColor(255, 0, 255);   // Purple
  delay(1000);

  setColor(0, 255, 255);   // Cyan
  delay(1000);

  setColor(255, 255, 255); // White
  delay(1000);

  setColor(0, 0, 0);       // Off
  delay(1000);
}
