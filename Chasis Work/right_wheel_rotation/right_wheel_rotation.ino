//Louie 1015

// define IO pin
#define ENB 6 
#define IN3 9
#define IN4 11

//init the car
void setup() {
  pinMode(IN3, OUTPUT); //set IO pin mode OUTPUT
  pinMode(IN4, OUTPUT);
  pinMode(ENB, OUTPUT);
  digitalWrite(ENB, HIGH);  //Enable right motor       
}

//mian loop
void loop() {
  digitalWrite(IN3, LOW);      
  digitalWrite(IN4, HIGH);//Right wheel turning forwards
  delay(500);             //delay 500ms
  digitalWrite(IN3, LOW);      
  digitalWrite(IN4, LOW); //Right wheel stoped
  delay(500);
  digitalWrite(IN3, HIGH);      
  digitalWrite(IN4, LOW); //Right wheel turning backwards
  delay(500);
  digitalWrite(IN3, HIGH);      
  digitalWrite(IN4, HIGH); //Right wheel stoped
  delay(500);
}
