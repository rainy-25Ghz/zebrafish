int RelayPin = 8; //定义数字接口8 连接三极管基极
int x;
void setup()
{
  pinMode(RelayPin, OUTPUT); //定义RelayPin 接口为输出接口
  Serial.begin(115200);
  Serial.setTimeout(1);
}
void loop()
{
  while (!Serial.available())
    ;
  x = Serial.read();
  switch (x)
  {
  case 'a':
  {
    Serial.print("a received");
    digitalWrite(RelayPin, HIGH); //驱动继电器闭合导通
    delay(5000);                  //延时1 秒钟
    break;
  }
  case 'b':
  {
    Serial.print("b received");
    digitalWrite(RelayPin, LOW); //驱动继电器断开
    delay(5000);                 //延时1 秒钟
    break;
  }
  }
}
