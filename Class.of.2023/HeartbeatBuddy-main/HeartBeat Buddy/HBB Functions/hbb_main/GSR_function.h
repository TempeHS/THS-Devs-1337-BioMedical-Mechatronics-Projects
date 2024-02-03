  int sensorValue = 0;
  int gsr_average = 0;
 const int GSR = A3;


void GSR_Data() {
  long sum = 0;
  for (int i = 0; i < 10; i++)  //Average the 10 measurements to remove the glitch
  {
    sensorValue = analogRead(GSR);
    sum += sensorValue;
    delay(5);
  }
  gsr_average = sum / 10;
  Serial.println("gsr: ");
  Serial.println(gsr_average);
}