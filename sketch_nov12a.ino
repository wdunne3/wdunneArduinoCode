
int LEDpin = 2;  // Set pin that will output signals to LED strip
int AudioPin = 12; //Set pin that will output signal to speaker
unsigned long previousTime = 0;
unsigned long totalTime;
int ranDel;


void setup() {
  // initialize pins as an output. (Light Flicker)
  //Serial.begin(9600);
  pinMode(LEDpin, OUTPUT);
  pinMode(AudioPin, OUTPUT);
}

void loop() {
  unsigned long totalTime = millis();

  if ((unsigned long)(totalTime < 3600000))
  {
    //Audio 10KHz tone played at 40Hz for 1 millisecond
    // Speaker should be connected to pin 
    digitalWrite(LEDpin, 1);
    tone(AudioPin, 8000);
    delayMicroseconds(10950);    // Wait 12.5 milliseconds

    digitalWrite(LEDpin, 0);
    noTone(AudioPin);
    delayMicroseconds(10950+1550);
    }
}
