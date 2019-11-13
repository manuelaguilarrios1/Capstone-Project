#include <DHT.h>;
//Constants
#define DHTPIN 7     // what pin we're connected to
#define DHTTYPE DHT22   // DHT 22  (AM2302)
DHT dht(DHTPIN, DHTTYPE); //// Initialize DHT sensor for normal 16mhz Arduino
//Relay variables
int relayPin1 = 2;  //This is the Arduino Pin that will control Relay #1 which controls Water pump
int relayPin2 = 3;  //This is the Arduino Pin that will control Relay #2
int relayPin3 = 4;  //This is the Arduino Pin that will control Relay #3
int relayPin4 = 5;  //This is the Arduino Pin that will control Relay #4
//DTH Variables
int chk;
float hum;  //Stores humidity value
float temp; //Stores temperature value

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(relayPin1, OUTPUT);
  pinMode(relayPin2, OUTPUT);
  pinMode(relayPin3, OUTPUT);
  pinMode(relayPin4, OUTPUT);
  dht.begin();
}
//Range for celsius 16.5 - 26.5 celsius
void loop() {
  // put your main code here, to run repeatedly:
    delay(5000);
    //Read data and store it to variables hum and temp
    hum = dht.readHumidity();
    temp= dht.readTemperature();
    //Print temp and humidity values to serial monitor
    Serial.print("Humidity: ");
    Serial.print(hum);
    Serial.print(" %, Temp: ");
    Serial.print(temp);
    Serial.println(" Celsius");
    if (temp < 18){
      digitalWrite(relayPin2, HIGH);
      Serial.print("Heat is on\n"); 
    }
    else{
      digitalWrite(relayPin2, LOW);
      Serial.print("Heat is off\n"); 
    }
    if(temp > 26){
      digitalWrite(relayPin,HIGH)
      Serial.print("Fan on high/n")
    }
    delay(10000); //Delay 2 sec.
}
