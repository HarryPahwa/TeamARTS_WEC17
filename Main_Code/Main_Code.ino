//MARIO

#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978
 
//#define melodyPin 8
//Mario main theme melody
int melody[] = {
  NOTE_E7, NOTE_E7, 0, NOTE_E7,
  0, NOTE_C7, NOTE_E7, 0,
  NOTE_G7, 0, 0,  0,
  NOTE_G6, 0, 0, 0,
 
  NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0,
 
  NOTE_G6, NOTE_E7, NOTE_G7,
  NOTE_A7, 0, NOTE_F7, NOTE_G7,
  0, NOTE_E7, 0, NOTE_C7,
  NOTE_D7, NOTE_B6, 0, 0,
 
  NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0,
 
  NOTE_G6, NOTE_E7, NOTE_G7,
  NOTE_A7, 0, NOTE_F7, NOTE_G7,
  0, NOTE_E7, 0, NOTE_C7,
  NOTE_D7, NOTE_B6, 0, 0
};
//Mario main them tempo
int tempo[] = {
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
 
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
 
  9, 9, 9,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
 
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
 
  9, 9, 9,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
};
int underworld_melody[] = {
  NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4,
  NOTE_AS3, NOTE_AS4, 0,
  0,
  NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4,
  NOTE_AS3, NOTE_AS4, 0,
  0,
  NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,
  NOTE_DS3, NOTE_DS4, 0,
  0,
  NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,
  NOTE_DS3, NOTE_DS4, 0,
  0, NOTE_DS4, NOTE_CS4, NOTE_D4,
  NOTE_CS4, NOTE_DS4,
  NOTE_DS4, NOTE_GS3,
  NOTE_G3, NOTE_CS4,
  NOTE_C4, NOTE_FS4, NOTE_F4, NOTE_E3, NOTE_AS4, NOTE_A4,
  NOTE_GS4, NOTE_DS4, NOTE_B3,
  NOTE_AS3, NOTE_A3, NOTE_GS3,
  0, 0, 0
};
//Underwolrd tempo
int underworld_tempo[] = {
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
  6, 18, 18, 18,
  6, 6,
  6, 6,
  6, 6,
  18, 18, 18, 18, 18, 18,
  10, 10, 10,
  10, 10, 10,
  3, 3, 3
};


// constants won't change. They're used here to
// set pin numbers:

#define EARTHLEDFLASHER 13
#define ALARMSOUNDER 5 
#define OPENLEDFLASHER 9
#define LANELEDLEFT1 12
#define LANELEDLEFT2 11
#define LANELEDRIGHT1 10
#define LANELEDRIGHT2 8
#define BLUELED 7
#define melodyPin 5


#include <Servo.h>
Servo Motor; 
const int MF = 20;  // angle that moves motor forward
const int MB = 138; // angle that moves motor backward
const int MS = 91; // angle that stops the motor
unsigned long previousMillis = 0; 
unsigned long previousMillis2 = 0; 
unsigned long previousMillis3 = 0;       
const long interval = 500;            
const int buttonPin = 2;     // the number of the pushbutton pin
int mode=0;
boolean flagio=false;
// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {

  Serial.begin(9600);      

  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  pinMode(OPENLEDFLASHER, OUTPUT);
  pinMode(EARTHLEDFLASHER, OUTPUT);
  pinMode(ALARMSOUNDER, OUTPUT);
  pinMode(LANELEDLEFT1, OUTPUT);
  pinMode(LANELEDLEFT2, OUTPUT);
  pinMode(LANELEDRIGHT1, OUTPUT);
  pinMode(LANELEDRIGHT2, OUTPUT);
  pinMode(BLUELED, OUTPUT);
 Motor.attach(3);
}

void loop() {
  //SET LEDS

  digitalWrite(OPENLEDFLASHER, LOW);
  digitalWrite(EARTHLEDFLASHER, LOW);
  digitalWrite(LANELEDLEFT1, HIGH);
  digitalWrite(LANELEDLEFT2,LOW);
  digitalWrite(LANELEDRIGHT1, LOW);
  digitalWrite(LANELEDRIGHT2,HIGH);
  
  
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  
  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    
    Serial.print(mode++);
    flagio=false;
    Serial.print("\n");
    delay(1000);
  }

  if(mode==5)
  mode=0;
  

  if(mode==1&&flagio==false){
    flagio=true;
    simulateEarthquake();
  }
  else if (mode==2&&flagio==false){
    flagio=true;
    simulateBridgeOpening();
}
  else if (mode==3&&flagio==false){
    flagio=true;
    laneChanging();
    }
    else if(mode==4&&flagio==false){
      flagio=true;
      blueLane();
    }
    
}

void simulateEarthquake(){
  Serial.print("Earthquake simulating");
  for(int j=0;j<2;j++){
        for(int i = 0; i < 255; i = i + 2)
        {
            analogWrite(EARTHLEDFLASHER, i);
            analogWrite(ALARMSOUNDER, i);
            delay(10);
        }
        for(int i = 255; i > 1; i = i - 2)
        {
            analogWrite(EARTHLEDFLASHER, i);
            analogWrite(ALARMSOUNDER, i);
            delay(5);
        }
        for(int i = 1; i <= 10; i++)
        {
            analogWrite(EARTHLEDFLASHER, 255);
            analogWrite(ALARMSOUNDER, 200);
            delay(100);
            analogWrite(EARTHLEDFLASHER, 0);
            analogWrite(ALARMSOUNDER, 25);
            delay(100);
        }
        
  }
  analogWrite(ALARMSOUNDER, 0);
}

void simulateBridgeOpening(){
  Serial.write("LEDS flashing\n");
  
  for(int i=0;i<5;i++)
  {
    digitalWrite(OPENLEDFLASHER,HIGH);
    delay(500);
    digitalWrite(OPENLEDFLASHER,LOW);
    delay(500);
  }
  int flag=0;
  boolean play=false;
  sing(1);
  delay(2000);
  Serial.print("MOTOR MOVE \n");
  Motor.write(MF); // move forward
  analogWrite(ALARMSOUNDER, 200);
  delay(1000);     
  Serial.print("MOTOR STOP \n");
  Motor.write(MS); // stop motor
  analogWrite(ALARMSOUNDER, 0);
  delay(20000);  

Serial.print("MOTOR MOVE BACK \n");
  Motor.write(MB); // move backward
  analogWrite(ALARMSOUNDER, 100);
  delay(1000);
Serial.print("MOTOR MOVE BACK STOP \n");
  Motor.write(MS); // stop motor
  delay(1000);
  analogWrite(ALARMSOUNDER, 0);
  
}

int song = 0;
void sing(int s) {
  // iterate over the notes of the melody:
  song = s;
  if (song == 2) {
    Serial.println(" 'Underworld Theme'");
    int size = sizeof(underworld_melody) / sizeof(int);
    for (int thisNote = 0; thisNote < size; thisNote++) {
 
      // to calculate the note duration, take one second
      // divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
      int noteDuration = 1000 / underworld_tempo[thisNote];
      digitalWrite(OPENLEDFLASHER,HIGH);
      buzz(melodyPin, underworld_melody[thisNote], noteDuration);
 
      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
     
   
    
    
      // stop the tone playing:
      buzz(melodyPin, 0, noteDuration);
 digitalWrite(OPENLEDFLASHER,LOW);
    }
 
  } else {
 
    Serial.println(" 'Mario Theme'");
    int size = sizeof(melody) / sizeof(int);
    for (int thisNote = 0; thisNote < size; thisNote++) {
 
      // to calculate the note duration, take one second
      // divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
      int noteDuration = 1000 / tempo[thisNote];
      digitalWrite(OPENLEDFLASHER,HIGH);
      buzz(melodyPin, melody[thisNote], noteDuration);
 
      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
 
      // stop the tone playing:
      buzz(melodyPin, 0, noteDuration);
    digitalWrite(OPENLEDFLASHER,LOW);
    }
  }
}
void buzz(int targetPin, long frequency, long length) {
  digitalWrite(13, HIGH);
  long delayValue = 1000000 / frequency / 2; // calculate the delay value between transitions
  //// 1 second's worth of microseconds, divided by the frequency, then split in half since
  //// there are two phases to each cycle
  long numCycles = frequency * length / 1000; // calculate the number of cycles for proper timing
  //// multiply frequency, which is really cycles per second, by the number of seconds to
  //// get the total number of cycles to produce
  for (long i = 0; i < numCycles; i++) { // for the calculated length of time...
    digitalWrite(targetPin, HIGH); // write the buzzer pin high to push out the diaphram
    delayMicroseconds(delayValue); // wait for the calculated delay value
    digitalWrite(targetPin, LOW); // write the buzzer pin low to pull back the diaphram
    delayMicroseconds(delayValue); // wait again or the calculated delay value
  }
  digitalWrite(13, LOW);
 
}

void laneChanging(){
  Serial.write("LANE CHANGING\n");
  for(int i=0;i<10;i++){
  
  digitalWrite(LANELEDLEFT1, HIGH);
  digitalWrite(LANELEDLEFT2,LOW);
  digitalWrite(LANELEDRIGHT1, LOW);
  digitalWrite(LANELEDRIGHT2,HIGH);

  delay(250);

  digitalWrite(LANELEDLEFT1, LOW);
  digitalWrite(LANELEDLEFT2,HIGH);
  digitalWrite(LANELEDRIGHT1, HIGH);
  digitalWrite(LANELEDRIGHT2,LOW);

  delay(250);
}
  digitalWrite(LANELEDLEFT1, HIGH);
  digitalWrite(LANELEDLEFT2,HIGH);
  digitalWrite(LANELEDRIGHT1, LOW);
  digitalWrite(LANELEDRIGHT2,LOW);

  delay(10000);

  digitalWrite(LANELEDLEFT1, HIGH);
  digitalWrite(LANELEDLEFT2,LOW);
  digitalWrite(LANELEDRIGHT1, LOW);
  digitalWrite(LANELEDRIGHT2,HIGH);
}

void blueLane(){
  digitalWrite(BLUELED,HIGH);
  delay(10000);
  digitalWrite(BLUELED,LOW);
}

