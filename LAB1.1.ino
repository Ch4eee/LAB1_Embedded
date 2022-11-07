#define BLYNK_TEMPLATE_ID "TMPLoBTM1oFz"
#define BLYNK_DEVICE_NAME "LAB11"
#define BLYNK_AUTH_TOKEN "PFUCdnfMm1ySvOeML5Lu0a04uABRv3hO"
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "PFUCdnfMm1ySvOeML5Lu0a04uABRv3hO";
char ssid[] = "adamseif";
char pass[] = "franasen23";

int led = 13;
int pinValue;


BLYNK_WRITE(V1){

  int pinValue = param.asInt(); 
  analogWrite(led,pinValue);
  Blynk.virtualWrite(V13, pinValue);
  Serial.print("V13 Slider value is: ");
  Serial.println(pinValue);

}

void setup(){

  pinMode (led,OUTPUT);
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
  
}

void loop(){
  
  Blynk.run();
  
}

