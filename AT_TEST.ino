

#include <SoftwareSerial.h>

SoftwareSerial Sim808(4,5);

//String latt = "";
//String lon = "";

#define enable 6

void setup() {


  Serial.begin(57600);
 // Serial.begin(2400, SERIAL_8E1);delay(100);
 // Serial3.begin(2400, SERIAL_8E1);
  delay(200);

//  delay(1000);

  Sim808.begin(57600);
  delay(200);

pinMode(enable, OUTPUT);
digitalWrite(enable, LOW);
delay(1100);
digitalWrite(enable,HIGH);


 // wdt_enable(WDTO_8S);
//  delay(50);



 // Serial.println("The Code has been started");
  //Sim808.println("AT");
  // Sim808.write(26);
}

void loop() {

/*
while(serial_connection.available())
{
  gps.encode(serial_connection.read());
}
if(gps.location.isUpdated()){


  latt = String(gps.location.lat(), 6);
  lon = String (gps.location.lng(), 6);
   Serial.println(""+latt+" "+lon+"");
 }*/

 while(Sim808.available()){
   Serial.write(Sim808.read());
  }


  while(Serial.available()){
   Sim808.write(Serial.read());
  }

}
