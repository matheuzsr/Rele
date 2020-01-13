#define pin 7

void setup() {
  pinMode(pin, OUTPUT);
  Serial.begin(9600);
  digitalWrite(pin, HIGH);
}

void loop() {
      char c = Serial.read(); 
      if(c== 'D'){
        digitalWrite(pin, LOW); //DESLIGA PINO
        Serial.print ( 55 );  
      }
      if else(c== 'L'){
          digitalWrite(pin, HIGH); //LIGA PINO
        Serial.print ( 55 );  
      }
      
}
