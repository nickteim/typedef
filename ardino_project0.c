/*
 project 0
  
*/

const int trigPin =9;
const int echoPin=10;

long duration;
long distance;


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  
}



// the loop function runs over and over again forever
void loop() {
  digitalWrite(trigPin, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  
  digitalWrite(trigPin, HIGH);   
  delay(1000);      
  
  digitalWrite(trigPin, LOW);    
  delay(1000);                       // wait for a second
  
  
  duration = pulseIn(echoPin, HIGH);
  
  distance=duration*0.034/2;
  
  Serial.print("duration: ");
  Serial.print(distance);
  
  
}
