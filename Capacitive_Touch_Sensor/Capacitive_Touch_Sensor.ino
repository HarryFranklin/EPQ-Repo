// ESP32 Touch Test
// Touch test on Touch0/T0/GPIO 4.

void setup()
{
  Serial.begin(115200);
  delay(1000); 
  Serial.println("ESP32 Touch Test");
}

void loop()
{
  Serial.println(touchRead(T0));
  delay(1000);
}
