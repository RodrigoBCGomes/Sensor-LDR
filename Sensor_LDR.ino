const int pinoLed = 12;
const int pinoLDR = 8;

void setup() {
  Serial.begin(9600);
  pinMode(pinoLed,OUTPUT);
  pinMode(pinoLDR,INPUT);
}

void loop() {
  if(digitalRead(pinoLDR)==LOW){
    digitalWrite(pinoLed,HIGH);
  }else{
    digitalWrite(pinoLed,LOW);
  }
  Serial.print(analogRead(pinoLDR));
  Serial.print("\t");
  Serial.println(digitalRead(pinoLed));
} 
