const int kPinLed1=6;
const int kPinLed2=5;


void setup() {
  // put your setup code here, to run once:

    pinMode(kPinLed1,OUTPUT);
    pinMode(kPinLed2,OUTPUT);
    
    }
void loop() {

    digitalWrite(kPinLed1,HIGH);
    delay(5000);
    digitalWrite(kPinLed1,LOW); 
    digitalWrite(kPinLed2,HIGH);
    delay(3000);
    digitalWrite(kPinLed2,LOW);
    delay(3000);

}
