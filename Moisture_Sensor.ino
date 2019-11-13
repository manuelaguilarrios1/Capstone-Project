#define SensorPin A0 
float sensorValue = 0; 
int SensorVCCPin = 10;
void setup() { 
 Serial.begin(9600); 
 pinMode(SensorVCCPin, OUTPUT) ;
} 
void loop() { 
 digitalWrite(SensorVCCPin, HIGH);

 sensorValue = analogRead(SensorPin); 
 sensorValue = sensorValue/100.0; 
 Serial.println(sensorValue); 
 digitalWrite(SensorVCCPin, LOW);
 delay(5000); 
}
