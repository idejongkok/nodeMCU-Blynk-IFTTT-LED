#include<ESP8266WiFi.h>
#include<BlynkSimpleEsp8266.h>

char auth[] = "TOKEN_BLYNK_INPUT_DISINI";
char ssid[] = "NAMA_WiFi_Hotspot_mu";
char pass[] = "passwordwifi";

void setup (){
    
Serial.begin(9600);
Blynk.begin(auth,ssid,pass);
    
}

void loop(){
   
Blynk.run();
    
}