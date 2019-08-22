
//* The capacitance time base measurement by: s.r.marashi 
//* the Capacitor will be charge and Turn on the LED, as soon as pin11 Status Change from LOW to high
//* this time will be measure by variable J and will print over serial port
//* Let me know your idea srmarashi@yahoo.com
//* Written by: seyed roohollah marashi - Iran, Tehran 2018
int i= 0;        
float j= 0; 
float k= 0; 

void setup() {
// pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, INPUT);
    Serial.begin(9600);
 
  
  
}
void loop() {
  digitalWrite(10,HIGH);
  digitalWrite(9,0);
  i = digitalRead(11);
  j = millis();
  if (i == HIGH)
    {
    Serial.println(i);
    Serial.println(j);
     digitalWrite(10,0);
     digitalWrite(9,HIGH);
    delay(5000);
    asm volatile ("  jmp 0"); 
    
    }
   
}
  
