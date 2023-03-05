int led1 = 1; 
int led2 = 2; 
int led3 = 3;
int led4 = 4;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}


// the loop function runs over and over again forever
void loop() {
  //led racer 
  for (size_t i = 0; i < 5; i++)
  {
    closeAllLED();    
    digitalWrite(whatLedTurnON(i), HIGH);
    delay(250);
  }
}

int whatLedTurnON(int i){
  switch (i)
  {
  case 1:
    return led1;
    break;
  case 2:
    return led2;
    break;
  case 3:
    return led3;
    break;
  case 4:
    return led4;
    break;
  default:
    return led1;
    break;
  }
}

void closeAllLED(){
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
}
