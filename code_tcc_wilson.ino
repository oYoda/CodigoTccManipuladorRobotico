 // inclui bibilioteca do servomotor
#include <Servo.h> 

// define pinos dos servos
#define pinServ1 2
#define pinServ2 3
#define pinServ3 4
#define pinServ4 5
#define pinServ5 9
#define pinServ6 7

// define as portas dos potenciometros
#define pot1 A1
#define pot2 A2
#define pot3 A3
#define pot4 A4
#define pot5 A5
#define pot6 A6

// nomeia os servos
Servo serv1,serv2,serv3,serv4,serv5,serv6;

// cria as variavies dos angulos de cada motor
int motor1,motor2,motor3,motor4,motor5,motor6;

unsigned long mostradorTimer = 1;
int intervaloMostrador = 5000;

void setup(){

  //inicia o monitor serial
  Serial.begin(9600); 

  // atribui pinos dos servos
  serv1.attach(pinServ1);
  serv2.attach(pinServ2);
  serv3.attach(pinServ3);
  serv4.attach(pinServ4);
  serv5.attach(pinServ5);
  serv6.attach(pinServ6);
    
  }

void serialpot(){
  /*
  Serial.print("Pot1:");
  Serial.println(analogRead(pot1));
  
  Serial.print("Pot2:");
  Serial.println(analogRead(pot2));

  Serial.print("Pot3:");
  Serial.println(analogRead(pot3));
  */
  Serial.print("Pot4:");
  Serial.println(analogRead(pot4));
  /*
  Serial.print("Pot5:");
  Serial.println(analogRead(pot5));

  Serial.print("Pot6:");
  Serial.println(analogRead(pot6));
  */
  Serial.println("+++++++++++++++++++++++++++++++++++");
  delay(400);
  }

void serialservo(){
  /*
  Serial.print("Angulo Motor1:");
  Serial.println(motor1);

  Serial.print("Angulo Motor2:");
  Serial.println(motor2);

  Serial.print("Angulo Motor3:");
  Serial.println(motor3);
  */
  Serial.print("Angulo Motor4:");
  Serial.println(motor4);
  /*
  Serial.print("Angulo Motor5:");
  Serial.println(motor5);

  Serial.print("Angulo Motor6:");
  Serial.println(motor6);
  */
  Serial.println("+++++++++++++++++++++++++++++++++++");
  
  delay(100);

  }



void loop(){
  
  // leitura dos potenciometros
  motor1 = map(analogRead(pot1),0,1023,0,180);
  motor2 = map(analogRead(pot2),0,1023,0,180);
  motor3 = map(analogRead(pot3),0,1023,0,180);
  motor4 = map(analogRead(pot4),0,1023,0,180);
  motor5 = map(analogRead(pot5),0,1023,40,150);
  motor6 = map(analogRead(pot6),0,1023,0,110);
  

  // posicionamento dos potenciometros 
  serv1.write(motor1);
  serv2.write(motor2);
  serv3.write(motor3);
  serv4.write(motor4);
  serv5.write(motor5);
  serv6.write(motor6);
  

  
  //serialpot();
  //serialservo();
}
