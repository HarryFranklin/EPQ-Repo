// ESP32 Touch Detection
// LED bulb turns off or off - dependent on Touchread being below a threshold

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
    digitalWrite(led, HIGH); // power LED on GPIO 32
  }
                            
  if ((touchRead(T5)) >= 60) {
    Serial.println(touchRead(T5)); // if T5 is = or > 60, keep printing value of T5
    digitalWrite(led, LOW); // do not power LED on GPIO 32
  }

  delay(750);
}
