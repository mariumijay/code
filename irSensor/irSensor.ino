
int a,b;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
 pinMode(11,OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  //ON
  digitalWrite(8,HIGH);   //run pin 11
  delay(500);             //wait
  a=analogRead(A3);         //detecting from A3 pin of IR sensor

  //OFF
  digitalWrite(8,LOW);   //run pin 11
  delay(1000);             //wait
  b=analogRead(A3);         //detecting from A3 pin of IR sensor

  
  Serial.println(a);





}
