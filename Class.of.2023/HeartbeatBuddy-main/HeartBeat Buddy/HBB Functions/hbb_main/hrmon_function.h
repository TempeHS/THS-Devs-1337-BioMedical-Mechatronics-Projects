#include <Wire.h>
static unsigned int myBuzzer = 3;

void hrs_setup () {
    Wire.begin();
    pinMode(myBuzzer, OUTPUT);
}
  
void hrs_data() {
    Wire.requestFrom(0xA0 >> 1, 1);    // request 1 bytes from slave device
    while(Wire.available()) {          // slave may send less than requested
        unsigned char c = Wire.read();   // receive heart rate value (a byte)
            Serial.println("heart rate sensor: ");
        Serial.println(c, DEC);         // print heart rate value
        while ( c > 90 ) {
          digitalWrite(myBuzzer, HIGH);
          delay(100);
          digitalWrite(myBuzzer,LOW);
        }
    delay(500);
}
}