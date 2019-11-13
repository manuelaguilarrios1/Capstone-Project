int motorPin = 3;
void setup() {
  // put your setup code here, to run once:
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(motorPin, HIGH);
  Serial.print("High"); 
  delay(5000);
  digitalWrite(motorPin, LOW);
  Serial.print("Low"); 
  delay(5000);
}
