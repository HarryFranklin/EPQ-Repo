// ESP32 Touch Detection
// LED bulb turns off or off - dependent on Touchread being below a threshold
// Pump in series with LED, LED on = Pump on

# define led 32

void setup() 
 {
  pinMode(led, OUTPUT); 
  Serial.begin(115200);
  delay(1000); 
  Serial.println("ESP Touch Test");
}

void loop() 
{
  if ((touchRead(T5)) < 60) {
    Serial.print(touchRead(T5));
    Serial.println(" - Touch Detected"); // if T5 drops below 60, print "Touch Detected" and the value
    delay(2500); // pause after detection so user can move hand away from door handle
    digitalWrite(led, HIGH); // power LED and pump on GPIO 32
    delay(1000); // power pump and LED for 1sec
  }
                            
  if ((touchRead(T5)) >= 60) {
    Serial.println(touchRead(T5)); // if T5 is = or > 60, keep printing value of T5
    digitalWrite(led, LOW); // do not power LED or pump on GPIO 32
  }

  delay(750);
}
