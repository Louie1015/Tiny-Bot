//Louie1015

// define IO pin
#define ENA 5
#define ENB 6
#define IN1 7
#define IN2 8
#define IN3 9
#define IN4 11

//set car speed
#define CAR_SPEED 100
typedef unsigned char u8;  //Change the name of unsigned char to u8

void forward(u8 car_speed)
{

  analogWrite(ENA, car_speed);
  analogWrite(ENB, car_speed);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}


void back(u8 car_speed)
{

  analogWrite(ENA, car_speed);
  analogWrite(ENB, car_speed);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}


void left(u8 car_speed)
{

  analogWrite(ENA, 250);
  analogWrite(ENB, 250);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void right(u8 car_speed)
{
  analogWrite(ENA, 250);
  analogWrite(ENB, 250);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void stop()
{
  digitalWrite(ENA, LOW);
  digitalWrite(ENB, LOW);
}




void setup() {
  pinMode(IN1,OUTPUT);//before useing io pin, pin mode must be set first 
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(ENA,OUTPUT);
  pinMode(ENB,OUTPUT);
}

void loop() {
  forward(CAR_SPEED);  //go forward
  delay(1000);//delay 1000 ms
  back(CAR_SPEED);     //go back
  delay(1000);
  left(CAR_SPEED);     //turning left
  delay(1000);
  right(CAR_SPEED);    //turning right
  delay(1000);
  stop();
  while(1);

}
