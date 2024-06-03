int L1 = 13;
void setup() {
  Serial.begin(9600);
  pinMode(L1,OUTPUT);
}

char c;
String voice;

void loop() {
  if (Serial.available()>0)
  {
    voice="";
    voice=Serial.readString();
    Serial.print(voice+'\n');
  }

  if(voice=="light off")
  {
    digitalWrite(L1,HIGH);
  } else if(voice=="light on")
  {
    digitalWrite(L1,LOW);
  }
}
