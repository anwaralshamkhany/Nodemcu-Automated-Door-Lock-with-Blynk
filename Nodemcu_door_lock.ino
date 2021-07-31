#define BLYNK_PRINT Serial
#define LED D4
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>
char pass[] = "Wifi password";
char auth[] = "Your Auth token";
char ssid[] = "Wifi SSID";
Servo servo;

uint8_t BUTTON=D1;
bool door;
int pos;

BLYNK_WRITE(V2)
{
  int pinValue=param.asInt();
  if(pinValue==1)
  {
      for (pos = 0; pos <= 180; pos += 4) { 
        servo.write(pos);              
        delay(15);
      }
      digitalWrite(LED,HIGH);                                                       
      door=true;
      Blynk.email("insert email","Door_Status","Door is closed");
  }
  else
  {
    for (pos = 180; pos >= 0; pos -= 5) { 
      servo.write(pos);              
      delay(15);
    }
    digitalWrite(LED,LOW);                                                     
    door=false;
    Blynk.email("insert email","door_lock_unlock status","Door is open");
  }
}

void IntCallback()
{
  if(door==false)
  {
      for (pos = 0; pos <= 180; pos += 5) { 
        servo.write(pos);              
        delay(15);
      }
      digitalWrite(LED,HIGH);                                                           
      door=true;
  }
  else
  {
    return;
  }
}

void setup()
{
  // Debug console
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  servo.attach(15); 
  pinMode(LED,OUTPUT);
  attachInterrupt(digitalPinToInterrupt(BUTTON),IntCallback,RISING);
}

void loop()
{
  Blynk.run();
 //You can pass in a 3rd virtual button to make it a slider and open the door that way
}
