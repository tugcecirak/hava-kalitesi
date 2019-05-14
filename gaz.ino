
int buzzer = 9;
int smokeA0 = A0;

int sensorThres = 150;

void setup() {
 
  pinMode(buzzer, OUTPUT);
  pinMode(smokeA0, INPUT);
  Serial.begin(9600);
  
}

void loop() {
  int analogSensor = analogRead(smokeA0);

  Serial.println(analogSensor);
 
  
  if (analogSensor-50 > sensorThres)
  {
    
    
    tone(buzzer, 1000, 450);
  }
  else
  {
    
    noTone(buzzer);
  }
  delay(500);
  
}
