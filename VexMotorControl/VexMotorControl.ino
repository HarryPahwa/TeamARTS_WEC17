// **************************************
// ArduMotoVEXRobotControl.ino
//
// Ardumoto / Robot Shield Test Code
// **************************************
//
// Arduino servo library varies from 0.545 mS to 2.4 mS
// The VEX Motor Controller 29 is looking for a pulse between
// 1 mS and 2 mS with 1.5 mS being the zero point.
// 
// This code uses both the vSync and the Servo library.




#include <VSync.h> 
#include <Servo.h>  

/*******************************************
/ Pin definitions for the ArduMoto Shield
/ MOTOR A
/*******************************************/
const int DIR_A = 12;
const int PWM_A = 3;

// MOTOR B
const int DIR_B = 13;
const int PWM_B = 11;

ValueReceiver<17> receiver; // set # to num items received from Processing 
                            // using vSync library.
ValueSender<4> sender;

// Joystick input variables -- received from the vSync library object
int hatPosition, leftX, leftY, rightX, rightY;
int button[13];

// Debug variables to pass back to processing using vSync.
int debugVal0, debugVal1, debugVal2, debugVal3; 

Servo motorC;  // Additional motors are setup using the Servo Library 
Servo motorD;  // and the VEX Motor Controller 29 PWM to MotorOut
               // device.

const int deadBand = 5;  // Deadband is used to give a tolerance around the 
                         // zero point of the analog joystick control

/*******************
/ setup function 
/*******************/
void setup()
{
  Serial.begin(9600);

  pinMode(PWM_A, OUTPUT);
  pinMode(DIR_A, OUTPUT);
  pinMode(PWM_B, OUTPUT);
  pinMode(DIR_B, OUTPUT); 
  pinMode(10, OUTPUT);  // used as a debug pin for an LED.

  // setup for vSync contorl. Order of these must correspond with
  // the order of the sender in Processing.  
  receiver.observe(hatPosition);
  receiver.observe(leftX);
  receiver.observe(leftY);
  receiver.observe(rightX);
  receiver.observe(rightY);

  for(int x = 0; x < 13; x++)
    receiver.observe(button[x]);

  motorC.attach(9);    // Signal pin connected to pin 9
  motorD.attach(6);    // Signal pin connected to pin 6

  sender.observe(debugVal0);
  sender.observe(debugVal1);
  sender.observe(debugVal2);
  sender.observe(debugVal3);

}

/*******************
/ loop function 
/*******************/
void loop()
{ 
  receiver.sync();     // vSync sync variables between arduino / processing
  sender.sync();
  // Drive right motors
  if(abs(rightY) > deadBand)
    setMotorA(rightY);
  else
    setMotorA(0);

  // Drive left motors   
  if(abs(leftY) > deadBand)
    setMotorB(leftY);
  else
    setMotorB(0);

  // debug LED on pin 10
  digitalWrite(10, button[1]);

  // Drive Claw
  if (button[2] == HIGH)
    vexMotorWrite(motorC, 255);
  else if (button[4] == HIGH)
    vexMotorWrite(motorC, -255);
  else
    vexMotorWrite(motorC, 0);

  // Drive Arm
  if (button[5] == HIGH)
    vexMotorWrite(motorD, 255);
  else if (button[7] == HIGH)
    vexMotorWrite(motorD, -255);
  else
    vexMotorWrite(motorD, 0);
}

/*************************************
/ User functions for motor control.
/*************************************/
void setMotorA(int speed)
{
  int motorSpeed = constrain(abs(speed), 0, 255);
  if(speed > 0)
    digitalWrite(DIR_A, HIGH);
  else
    digitalWrite(DIR_A, LOW);
  analogWrite(PWM_A, motorSpeed);
}

void setMotorB(int speed)
{
  int motorSpeed = constrain(abs(speed), 0, 255);
  if(speed > 0)
    digitalWrite(DIR_B, HIGH);
  else
    digitalWrite(DIR_B, LOW);
  analogWrite(PWM_B, motorSpeed);
}

void vexMotorWrite(Servo motorObj, int speed)
{ 
  motorObj.write(map(speed, -255, 255, 1000, 2000));
}


