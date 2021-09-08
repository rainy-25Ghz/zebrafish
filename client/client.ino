int RelayPin = 13; //定义数字接口8 连接三极管基极
int x;
enum State{
  OPEN,CLOSE
} ;
State state=CLOSE;
void setup()
{
  pinMode(RelayPin, OUTPUT); //定义RelayPin 接口为输出接口
  Serial.begin(115200);
  Serial.setTimeout(1);
}
void loop()
{
  while (!Serial.available());

  x = Serial.read();
  switch (x)
  {
    case 'a':
    {
      Serial.print("a received");
      state=OPEN;
      break;
    }
    case 'b':
    {
      Serial.print("b received");
      state=CLOSE;
      break;
    }
  }
  switch (state){
    case CLOSE:{
      digitalWrite(RelayPin, LOW); //驱动继电器断开
      break;
    }
    case OPEN:{
      digitalWrite(RelayPin, HIGH);
      break;
    }
  }
}
