const int trigPin = 9;
const int echoPin = 10;
const int buzzer = 13;

int distance;
long duration;


void setup(){
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600); 
}


void loop() {
  digitalWrite(trigPin , HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin , LOW);

  duration = pulseIn(echoPin , HIGH); //pulseIN function to read the travel time
  //echo Pin goes High-timing starts, as soon as it goes low-timing stops
  distance = duration*0.034/2;

  


  Serial.print("Distance: ");//to print the result on serial monitor___EXTRA WORK FOR WORKING CONFIRMATION
  Serial.println(distance);
  
  if(distance<=100 )//in cm
  {
    digitalWrite(buzzer, HIGH);

  }
    else{
    digitalWrite(buzzer, LOW);

  }



  }