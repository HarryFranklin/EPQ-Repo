// ESP32 Touch Test
// Touch test on Touch0/T0/GPIO 4.
// Writing to Serial Monitor.
// Turning Bulb on or off.

# define led 23

void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(115200);

  delay(1000); 
  Serial.println("ESP32 Touch Test");
}

void loop()
{
   if ((touchRead(T0)) < 60) {
     Serial.print(touchRead(T0));
     Serial.println(" - Touch Detected"); // If T0 drops below 60, print Touch Detected and value
     digitalWrite(led, HIGH);
  }
  if ((touchRead(T0)) >= 60) {
     Serial.println(touchRead(T0)); // If T0 is = to or > 60, keep printing the value of T0 and no Touch Detected
     digitalWrite(led, LOW);
  }

  delay(750);
 
}
