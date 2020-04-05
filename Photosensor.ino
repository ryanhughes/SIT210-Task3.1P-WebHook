int photosensor = A2;
int lightvalue;
int led = D7;

void setup() {
    pinMode(led, OUTPUT);
}

void loop() {
    digitalWrite(led, HIGH); 
    
    lightvalue = analogRead(photosensor);
    
    Particle.publish("light", String::format("%d", lightvalue), PRIVATE);
    
    delay(5000);
    
    digitalWrite(led, LOW);
    
    delay(5000); 
}
