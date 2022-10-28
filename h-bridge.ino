#define L1 7
#define L2 6
#define R1 5
#define R2 4

void setup() {
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(R1, OUTPUT);
  pinMode(R2, OUTPUT);
}

void loop() {
  forward();
  delay(500);
  left();
  delay(500);
  backward();
  delay(500);
  right();
  delay(500);
}

void forward(){
  digitalWrite(L1,HIGH);
  digitalWrite(R1,LOW);

  digitalWrite(L2,HIGH);
  digitalWrite(R2,LOW);
}

void backward(){
  digitalWrite(L1,LOW);
  digitalWrite(R1,HIGH);

  digitalWrite(L2,LOW);
  digitalWrite(R2,HIGH);
}

void stop(){
  digitalWrite(L1,LOW);
  digitalWrite(L2,LOW);
  digitalWrite(R1,LOW);
  digitalWrite(R2,LOW);
}

void left(){
  digitalWrite(L1,LOW);
  digitalWrite(R1,HIGH);

  digitalWrite(L2,HIGH);
  digitalWrite(R2,LOW);
}

void right(){
  digitalWrite(L1,HIGH);
  digitalWrite(R1,LOW);

  digitalWrite(L2,LOW);
  digitalWrite(R2,HIGH);
}
