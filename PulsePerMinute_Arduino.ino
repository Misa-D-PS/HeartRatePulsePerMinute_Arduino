unsigned int pulseCount;
unsigned int sensor;
unsigned int pulsePerMinute;
unsigned int threshold = 100;

void setup() {
  pinMode(A0,INPUT);
  Serial.begin(57600);
}

void loop() {
  sensor = analogRead(A0);
    while((millis()%1000) != 0){
      if(sensor>treshold){
        pulseCount++;
      }
    }

    pulsePerMinute = pulseCount*60;
    Serial.print("Pulse per minute = ");
    Serial.println(pulsePerMinute);
    pulseCount = 0;

}
