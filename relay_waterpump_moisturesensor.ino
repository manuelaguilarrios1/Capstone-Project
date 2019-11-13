int relayPin1 = 2;  //This is the Arduino Pin that will control Relay #1 which controls Water pump
int relayPin2 = 3;  //This is the Arduino Pin that will control Relay #2
int relayPin3 = 4;  //This is the Arduino Pin that will control Relay #3
int relayPin4 = 5;  //This is the Arduino Pin that will control Relay #4
#define SensorPin A0 //Tells us that A0 on arduino will read take value from moisture sensor
float sensorValue = 0;  //will tell us what are sensor value is 
int SensorVCCPin = 10; // Will tell us which pin powers the Moisture sensor
void setup() {
   // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(relayPin1, OUTPUT);
  pinMode(relayPin2, OUTPUT);
  pinMode(relayPin3, OUTPUT);
  pinMode(relayPin4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(SensorVCCPin, HIGH); //Turns on moisture sensor
 sensorValue = analogRead(SensorPin); //Reads sensor level information
 sensorValue = sensorValue/100.0; // Divides it by 100
 Serial.print("Sensor Value is ");//Tells us what sensor value is
 Serial.print(sensorValue);
 Serial.print("\n");      // New line in serial monitor
 if (sensorValue < 1.00) { //If the sensor value is low (if the plant is dry)
  digitalWrite(relayPin1, HIGH); //Turns water pump on
  Serial.print("Water pump is on\n"); //Prints message that water pump is on
  delay(5000); //will delay for 1000 miliseconds which is = 1 second
  digitalWrite(relayPin1, LOW); //Turns water pump off
  Serial.print("Water pump is off\n"); //Prints message that water pump is off
 }
delay(10000); //Will not check again until after 10 seconds
}
