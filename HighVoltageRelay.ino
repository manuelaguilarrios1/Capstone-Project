int relayPin1 = 2;  //This is the Arduino Pin that will control Relay #1 which controls Water pump
int relayPin2 = 3;  //This is the Arduino Pin that will control Relay #2
int relayPin3 = 4;  //This is the Arduino Pin that will control Relay #3
int relayPin4 = 5;  //This is the Arduino Pin that will control Relay #4
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
  digitalWrite(relayPin2, HIGH);
  Serial.print("Light is on\n"); //Prints message that light is on
  delay(5000);
  digitalWrite(relayPin2, LOW);
  Serial.print("Light is off\n"); //Prints message that light is off
  delay(5000);  
}
