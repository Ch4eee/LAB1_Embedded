#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#define BLYNK_AUTH_TOKEN "grjwaYhZ4iBM5yEkv_xBBYZ3v6mEMHXo"

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "adamseif";//Enter your WIFI name
char pass[] = "franasen23";//Enter your WIFI password

//Get the button value
BLYNK_WRITE(V0) {
  digitalWrite(D3, param.asInt());
}
BLYNK_WRITE(V1) {
  digitalWrite(D2, param.asInt());
}
BLYNK_WRITE(V2) {
  digitalWrite(D2, param.asInt());
  digitalWrite(D3, param.asInt());
}
BLYNK_WRITE(V3) {
  digitalWrite(D1, param.asInt());
}
BLYNK_WRITE(V4) {
  digitalWrite(D1, param.asInt());
  digitalWrite(D3, param.asInt());
}
BLYNK_WRITE(V5) {
  digitalWrite(D1, param.asInt());
  digitalWrite(D2, param.asInt());
}
BLYNK_WRITE(V6) {
  digitalWrite(D1, param.asInt());
  digitalWrite(D2, param.asInt());
  digitalWrite(D3, param.asInt());
}
BLYNK_WRITE(V7) {
  digitalWrite(D0, param.asInt());
}
BLYNK_WRITE(V8) {
  digitalWrite(D0, param.asInt());
  digitalWrite(D3, param.asInt());
}
BLYNK_WRITE(V9) {
  digitalWrite(D0, param.asInt());
  digitalWrite(D2, param.asInt());
}

void setup() {
  //Set the LED pin as an output pin
  pinMode(D0, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  //Initialize the Blynk library
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
  //Run the Blynk library
  Blynk.run();
}
