int toggle  = D2;
int led1    = D1;

int toggleState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(toggle, INPUT);
  pinMode(led1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  toggleState = digitalRead(toggle);

  if(toggleState == HIGH){
    digitalWrite(led1, HIGH);  
  }else{
    digitalWrite(led1, LOW);  
  }
}
