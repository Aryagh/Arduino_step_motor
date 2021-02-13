#define dirPin 3
#define stepPin 4
#define mintime 250
#define stepsPerRevolution 50
void setup() {
  // Declare pins as output:
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
}
void loop() {
  // Set the spinning direction clockwise:
  digitalWrite(dirPin, HIGH);
  // Spin the stepper motor 1 revolution slowly:
  for (int i = 1000; i > mintime; i--){
    for (int j = 0; j < stepsPerRevolution; j++) {
      // These four lines result in 1 step:
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(i);
      digitalWrite(stepPin, LOW);
      delayMicroseconds(i);
    }
  }
  
    for (int j = 0; j < 500; j++) {
      // These four lines result in 1 step:
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(mintime);
      digitalWrite(stepPin, LOW);
      delayMicroseconds(mintime);
    }
    
   for (int i = mintime; i < 1000; i++){
    for (int j = 0; j < stepsPerRevolution; j++) {
      // These four lines result in 1 step:
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(i);
      digitalWrite(stepPin, LOW);
      delayMicroseconds(i);
    }
  }
}
