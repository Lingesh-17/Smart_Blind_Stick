
int  trigPin = 6;
int  echoPin = 5;
int  buzzPin = 11;

int duration;
int distance;

void setup()
{
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  pinMode(buzzPin, OUTPUT); 
}

void loop()
{
  
  int duration, distance;
  
  digitalWrite(trigPin, HIGH); 
  delay(1);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  
  distance = (duration/2) / 29.1;
  
    if (distance <= 100 && distance >= 0) {
      // Buzz
      digitalWrite(buzzPin, HIGH);
      delay(50);
      digitalWrite(buzzPin, LOW);
      delay(50);
    } else {
      // Don't buzz
      digitalWrite(buzzPin, LOW);
    }
    
    delay(60);
}
