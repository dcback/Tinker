// https://www.tinkercad.com/things/gNZURO7CrUA
// http://www.hardcopyworld.com/ngine/aduino/index.php/archives/740

void setup(){
  Serial.begin(115200);
}
 
void loop(){
  Serial.print("1");   // LED on
  delay(500);
  Serial.print("0");   // LED off
  delay(500);
}
