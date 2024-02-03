#include "ldns_function.h"
#include "GSR_function.h"
#include "hrmon_function.h"
#include <Wire.h>
#include "OLED_function.h"
#include <U8g2lib.h>




void setup (){
Serial.begin(9600);
Serial.print ("SM Working");

hrs_setup ();
OLED_setup ();

}

void loop (){
loudness_data ();
GSR_Data ();
hrs_data ();
OLED_data ();
}






  
