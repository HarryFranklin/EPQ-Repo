// ESP32 Touch Test
// Touch test on Touch0/T0/GPIO 4.
// Writing to Serial Monitor
void setup()
{
  Serial.begin(115200);
  delay(1000); 
  Serial.println("ESP32 Touch Test");
}

void loop()
{
   if ((touchRead(T0)) < 60) {
     Serial.print(touchRead(T0));
     Serial.println(" - Touch Detected"); // If T0 drops below 60, print Touch Detected
     
  }
  if ((touchRead(T0)) >= 60) {
     Serial.println(touchRead(T0)); // If T0 is = to or > 60, keep printing the value of T0.
  }
  
  delay(1000);
 
}
