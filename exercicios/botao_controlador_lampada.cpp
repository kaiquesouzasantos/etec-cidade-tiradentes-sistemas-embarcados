int LAMPADA = 0;

void setup() {
    pinMode(2, INPUT); // BOTAO
    pinMode(4, OUTPUT); // LAMPADA
}

void loop() {  
    if (digitalRead(2) == 1) {
        if (LAMPADA == 0){
    	    digitalWrite(4, HIGH);
      	    LAMPADA = 1;
        } else if (LAMPADA == 1) {
      	    digitalWrite(4, LOW);
      	    LAMPADA = 0;
        }
    }
}