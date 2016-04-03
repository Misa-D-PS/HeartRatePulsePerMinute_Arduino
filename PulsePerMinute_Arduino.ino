unsigned int pulseCount;
unsigned int sensor;
unsigned int pulsePerMinute;
unsigned int threshold = 100;
unsigned int setpoint = 100;

int LED = 13;

void setup() {
  pinMode(A0,INPUT);
  pinMode(LED,OUTPUT);
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
    if(pulsePerMinute<setpoint){
        digitalWrite(LED,HIGH);
    }
    else{
        digitalWrite(LED,LOW);
    }
    Serial.print("Pulse per minute = ");
    Serial.println(pulsePerMinute);
    pulseCount = 0;

}
