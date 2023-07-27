#define PIN_LED 13

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println("Hola Mundo");
  //delay(1000);

  if (Serial.available()>0){
    int leerCaracter  = Serial.read();

    if(leerCaracter=='E') {
      digitalWrite(PIN_LED, HIGH);
    } else if(leerCaracter=='A') {
      digitalWrite(PIN_LED, LOW);  
    }

/*    digitalWrite(PIN_LED, HIGH);
    delay(1000);
    digitalWrite(PIN_LED, LOW);
    delay(1000);*/

  }

}
