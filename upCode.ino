#include "SoftwareSerial.h"
String ssid ="TrijalTrips615";

String password="daretodream@124";

SoftwareSerial esp(6, 7);// RX, TX
const int AOUTpin=A0;
//const int DOUTpin=13;
const int ledPin=13;

String data;

String server = "www.pollutiondata.rf.gd"; // www.example.com

String uri = "www.pollutiondata.rf.gd/datasend.php";// our example is /esppost.php

void setup() {

pinMode(AOUTpin, INPUT);//sets the pin as an input to the arduino
pinMode(ledPin, OUTPUT);//sets the pin as an output of the arduino

esp.begin(9600);

Serial.begin(9600);

reset();

connectWifi();

}

//reset the esp8266 module

void reset() {

esp.println("AT+RST");

delay(1000);

if(esp.find("OK") ) Serial.println("Module Reset");

}

//connect to your wifi network

void connectWifi() {

String cmd = "AT+CWJAP=\"" +ssid+"\",\"" + password + "\"";

esp.println(cmd);

delay(4000);

if(esp.find("OK")) {

Serial.println("Connected!");

}

else {

connectWifi();

Serial.println("Cannot connect to wifi"); }

}

String read_data () {

String value;

digitalWrite(ledPin,HIGH);
//delay(60000);
delay(2000);
digitalWrite(ledPin,LOW);
//delay(90000);
delay(3000);
digitalWrite(ledPin,HIGH);
delay(100);
value = analogRead(AOUTpin);
//Serial.print("CO value :");
Serial.println(value);

 return value; 
 }


void loop () {

String val1 = "tom";
//val1=read_data ();

data = "CO_level="+val1;
httppost();

delay(1000);

}

void httppost () {

esp.println("AT+CIPSTART=\"TCP\",\"" + server + "\",80");//start a TCP connection.

if( esp.find("OK")) {

Serial.println("TCP connection ready");

} delay(1000);

String postRequest =

"POST " + uri + " HTTP/1.0\r\n" +

"Host: " + server + "\r\n" +

"Accept: *" + "/" + "*\r\n" +

"Content-Length: " + data.length() + "\r\n" +

"Content-Type: application/x-www-form-urlencoded\r\n" +

"\r\n" + data;

String sendCmd = "AT+CIPSEND=";//determine the number of caracters to be sent.

esp.print(sendCmd);

esp.println(postRequest.length() );

delay(500);

if(esp.find(">")) { Serial.println("Sending.."); esp.print(postRequest);

if( esp.find("SEND OK")) { Serial.println("Packet sent");

while (esp.available()) {

String tmpResp = esp.readString();

Serial.println(tmpResp);

}

// close the connection

esp.println("AT+CIPCLOSE");

}

}
}
