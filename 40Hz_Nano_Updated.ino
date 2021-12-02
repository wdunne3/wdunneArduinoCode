


int LEDpin = 3;  // Set pin that will output signals to LED strip
int AudioPin = 13; //Set pin that will output signal to speaker
unsigned long previousTime = 0;
unsigned long totalTime;
int ranDel;
int halfPeriod = 10925;


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
    //Audio 10KHz tone played at 40Hz for 12.5 millisecond
    // Speaker should be connected to pin 12
    tone(AudioPin, 8000, 12.5);

    digitalWrite(LEDpin, 1);         //Sned signal to turn on LED
   // Serial.println("Light ON");
    delayMicroseconds(halfPeriod);        // Wait 12.5 milliseconds

    digitalWrite(LEDpin, 0);         // Turns Relay Off
   // Serial.println("Light OFF");
    delayMicroseconds(halfPeriod+1500);        // Wait 12.5 milliseconds
  }
}
