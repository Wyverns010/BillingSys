/* MQ-7 Carbon Monoxide Sensor Circuit with Arduino */

const int AOUTpin=A0;//the AOUT pin of the CO sensor goes into analog pin A0 of the arduino
const int DOUTpin=13;//the DOUT pin of the CO sensor goes into digital pin D8 of the arduino
const int ledPin=13;//the anode of the LED connects to digital pin D13 of the arduino

//int limit;
float value;
float R0;

void setup() {
Serial.begin(9600);//sets the baud rate
pinMode(AOUTpin, INPUT);//sets the pin as an input to the arduino
pinMode(ledPin, OUTPUT);//sets the pin as an output of the arduino
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledPin,HIGH);
delay(60000);
digitalWrite(ledPin,LOW);
delay(90000);
digitalWrite(ledPin,HIGH);
delay(100);
value = analogRead(AOUTpin);
//Serial.print("CO value :");
Serial.println(value);
R0 = 10*(1023-value)/value;
Serial.print("R0=");
Serial.println(R0);
delay(3000);
Serial.println("Data Sent");
}

