int AudioPin = 13;
int LEDpin = 3;  // Set pin that will output signals to LED strip
unsigned long previousTime = 0;
unsigned long totalTime;
int ranDel;
int halfPeriod = 11000;
unsigned long time_now = 0;

void setup() {
  // initialize pins as an output. (Light Flicker)
  //Serial.begin(9600);
  pinMode(LEDpin, OUTPUT);
  pinMode(AudioPin, OUTPUT);
}

void loop() {
  unsigned long totalTime = millis();
  time_now = micros();

  if ((unsigned long)(totalTime < 3600000))
  {
  digitalWrite(LEDpin, 1);
  tone(AudioPin, 8000); 
  delayMicroseconds(halfPeriod);  
  digitalWrite(LEDpin, 0); 
  noTone(AudioPin);
  delayMicroseconds(halfPeriod+1500);
  }
}
