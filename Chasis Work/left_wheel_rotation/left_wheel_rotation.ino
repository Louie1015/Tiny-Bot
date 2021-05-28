//Louie 1015

// define IO pin
#define ENA 5 
#define IN1 7
#define IN2 8

//init the car
void setup() {
  pinMode(IN1, OUTPUT);   //set IO pin mode OUTPUT
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);
  digitalWrite(ENA, HIGH);//Enable left motor       
}

//mian loop
void loop() {
  digitalWrite(IN1, HIGH);      
  digitalWrite(IN2, LOW); //Right wheel turning forwards
  delay(500);             //delay 500ms
  digitalWrite(IN1, LOW);      
  digitalWrite(IN2, LOW); //Right wheel stoped
  delay(500);
  digitalWrite(IN1, LOW);      
  digitalWrite(IN2, HIGH);//Right wheel turning backwards
  delay(500);
  digitalWrite(IN1, HIGH);      
  digitalWrite(IN2, HIGH); //Right wheel stoped
  delay(500);
}
