void setup() {
  pinMode(13, OUTPUT);
}

bool statu = true; //Yanıp Sönme Modu Açılsınmı?
//true evet, false hayır

void loop() {
  //Sadece Yanar
  digitalWrite(13, HIGH);
  
  //Yanıp Sönme Eklentisi
  if (statu == true)
  {
    delay(200);
    digitalWrite(13, LOW);
    delay(200);
  }
}