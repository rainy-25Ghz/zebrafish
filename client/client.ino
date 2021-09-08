int x;
void setup() {
 Serial.begin(115200);
 Serial.setTimeout(1);
}
void loop() {
  while (!Serial.available());
  x = Serial.read();
  switch(x){
   case 'a':{
     Serial.print("a received");
     
     break;
   }
   case 'b':{
     Serial.print("b received");
     break;
   }
 }
}
