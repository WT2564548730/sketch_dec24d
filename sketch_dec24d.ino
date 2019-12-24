#include <String.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void Point(){
  digitalWrite(13,HIGH);
  delay(100);
  digitalWrite(13,LOW);
  delay(100);
}

void Straw(){
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(100);
}

void A(){
  Point();
  Straw();
  Serial.println("A");
}

void B(){
  Straw();
  for(int i=0;i<3;i++){
    Point();
  }
  Serial.println("B");
}

void C(){
  for(int i=0;i<2;i++){
    Straw();
    Point();
  }
  Serial.println("C");
}

void D(){
  Straw();
  for(int i=0;i<2;i++){
    Point();
  }
  Serial.println("D");
}

void E(){
  Point();
  Serial.println("E");
}

void f(){
  for(int i=0;i<2;i++){
    Point();
  }
  Straw();
  Point();
  Serial.println("F");
}

void G(){
  for(int i=0;i<2;i++){
    Straw();
  }
  Point();
  Serial.println("G");
}

void H(){
  for(int i=0;i<4;i++){
    Point();
  }
  Serial.println("H");
}

void I(){
  for(int i=0;i<2;i++){
    Point();
  }
  Serial.println("I");
}

void J(){
  Point();
  for(int i=0;i<3;i++){
    Straw();
  }
  Serial.println("J");
}

void K(){
  Straw();
  Point();
  Straw();
  Serial.println("K");
}

void L(){
  Point();
  Straw();
  Point();
  Point();
  Serial.println("L");
}

void M(){
  Straw();
  Straw();
  Serial.println("M");
}

void N(){
  Straw();
  Point();
  Serial.println("N");
}

void O(){
for(int i=0;i<3;i++){
    Straw();
  }
  Serial.println("O");
}

void P(){
  Point();
  Straw();
  Straw();
  Point();
  Serial.println("P");
}

void Q(){
  Straw();
  Straw();
  Point();
  Straw();
  Serial.println("Q");
}

void R(){
  Point();
  Straw();
  Point();
  Serial.println("R");
}

void S(){
  for(int i=0;i<3;i++){
    Point();
  }
  Serial.println("S");
}

void T(){
  Straw();
  Serial.println("T");
}

void U(){
  Point();
  Point();
  Straw();
  Serial.println("U");
}

void V(){
  for(int i=0;i<3;i++){
    Point();
  }
  Straw();
  Serial.println("V");
}

void W(){
  Point();
  Straw();
  Straw();
  Serial.println("W");
}

void X(){
  Straw();
  Point();
  Straw();
  Point();
  Serial.println("X");
}

void Y(){
  Straw();
  Point();
  Straw();
  Straw();
  Serial.println("Y");
}

void Z(){
  Straw();
  Straw();
  Point();
  Point();
  Serial.println("Z");
}

void One(){
  Point();
  for(int i=0;i<4;i++){
    Straw();
  }
  Serial.println("1");
}

void Two(){
  Point();
  Point();
  for(int i=0;i<3;i++){
    Straw();
  }
  Serial.println("2");
}

void Three(){
  for(int i=0;i<3;i++){
    Point();
  }
  Straw();
  Straw();
  Serial.println("3");
}

void Four(){
  for(int i=0;i<4;i++){
    Point();
  }
  Straw();
  Serial.println("4");
}

void Five(){
  for(int i=0;i<5;i++){
    Point();
  }
  Serial.println("5");
}

void Six(){
  Straw();
  for(int i=0;i<4;i++){
    Point();
  }
  Serial.println("6");
}

void Seven(){
  Straw();
  Straw();
  for(int i=0;i<3;i++){
    Point();
  }
  Serial.println("7");
}

void Eight(){
  for(int i=0;i<3;i++){
    Straw();
  }
  Point();
  Point();
  Serial.println("8");
}

void Nine(){
  for(int i=0;i<4;i++){
    Straw();
  }
  Point();
  Serial.println("9");
}

void Zero(){
  for(int i=0;i<5;i++){
    Straw();
  }
  Serial.println("0");
}

void loop() {
  // put your main code here, to run repeatedly:
  String x="SOS";
  String y="Hello";
  for(int i=0;i<x.length();i++){
    if(x[i]=='A'||x[i]=='a'){
      A();
    }
    if(x[i]=='S'||x[i]=='s'){
      S();
    }
    if(x[i]=='O'||x[i]=='o'){
      O();
    }
    delay(300);
  }
  delay(1000);
  for(int i=0;i<y.length();i++){
    if(y[i]=='B'||y[i]=='b'){
      B();
    }
    if(y[i]=='H'||y[i]=='h'){
      H();
    }
    if(y[i]=='E'||y[i]=='e'){
      E();
    }
    if(y[i]=='L'||y[i]=='l'){
      L();
    }
    if(y[i]=='O'||y[i]=='o'){
      O();
    }
    delay(300);
  }
  delay(1000);
}
