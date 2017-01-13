// constants won't change. They're used here to
// set pin numbers:

#define EARTHLEDFLASHER 13
#define ALARMSOUNDER 5 

const int buttonPin = 2;     // the number of the pushbutton pin
int mode=0;

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {

  Serial.begin(9600);      

  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    
    Serial.print(mode++);
    Serial.print("\n");
    delay(1000);
  }

  if(mode==5)
  mode=0;
  

  if(mode==1)
    simulateEarthquake();
  else if (mode==2)
    simulateBridgeOpening();
  else if (mode==3)
    laneChanging();
    
}

void simulateEarthquake(){
  Serial.print("Earthquake simulating");
  for(j=0;j<2;j++){
        for(i = 0; i < 255; i = i + 2)
        {
            analogWrite(EARTHLEDFLASHER, i);
            analogWrite(ALARMSOUNDER, i);
            delay(10);
        }
        for(i = 255; i > 1; i = i - 2)
        {
            analogWrite(LEDFLASHER, i);
            analogWrite(ALARMSOUNDER, i);
            delay(5);
        }
        for(i = 1; i <= 10; i++)
        {
            analogWrite(LEDFLASHER, 255);
            analogWrite(ALARMSOUNDER, 200);
            delay(100);
            analogWrite(LEDFLASHER, 0);
            analogWrite(ALARMSOUNDER, 25);
            delay(100);
        }
        
  }
}

void simulateBridgeOpening(){
  
}

