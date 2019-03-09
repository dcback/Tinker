void setup(){
  Serial.begin(115200);
  pinMode(13, OUTPUT);
}
 
void loop(){
  if(Serial.available()){
   char c = Serial.read();
    if(c == '1') {
      digitalWrite(13, HIGH);
    } else {
      digitalWrite(13, LOW);
    }
  }  
}
