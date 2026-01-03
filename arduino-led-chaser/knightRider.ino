void setup() {
pinMode(1, OUTPUT);
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);


}

void loop() {
   int t = 200;

    for(int i = 1; i < 6 ; i++){
      digitalWrite(i, HIGH);
      delay(t);
      digitalWrite(i, LOW);
    }

    for(int q = 5 ; q > 1; q-- ){
      digitalWrite(q, HIGH);
      delay(t);
      digitalWrite(q, LOW);
    }
}
