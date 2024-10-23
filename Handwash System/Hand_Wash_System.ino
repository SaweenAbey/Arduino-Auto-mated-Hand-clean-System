#define trigs 12
#define echos 13
#define sanitizer 2
#define trigw 7
#define echow 8
#define water 4
#define trigh 9
#define echoh 10
#define hotair 6

void setup() {
  pinMode(trigs,OUTPUT);
  pinMode(sanitizer,OUTPUT);
  pinMode(echos,INPUT);
  pinMode(trigw,OUTPUT);
  pinMode(water,OUTPUT);
  pinMode(echow,INPUT);
  pinMode(trigh,OUTPUT);
  pinMode(hotair,OUTPUT);
  pinMode(echoh,INPUT);
  

}

void loop() {
  digitalWrite(trigs,LOW);
  delayMicroseconds(2);
  digitalWrite(trigs,HIGH);
  delayMicroseconds(2);
  digitalWrite(trigs,LOW);

  long s=pulseIn(echos,HIGH);
  long cms=s/29/2;

 

  if(cms<15){
  
    digitalWrite(sanitizer,HIGH);
   
    }
    else{
      digitalWrite(sanitizer,LOW);  
      }
 
  digitalWrite(trigw,LOW);
  delayMicroseconds(2);
  digitalWrite(trigw,HIGH);
  delayMicroseconds(2);
  digitalWrite(trigw,LOW);

  long w=pulseIn(echow,HIGH);
  long cmw=w/29/2;

 

  if(cmw<15){
    digitalWrite(water,HIGH);  
    }
    else{
      digitalWrite(water,LOW);  
      }

  digitalWrite(trigh,LOW);
  delayMicroseconds(2);
  digitalWrite(trigh,HIGH);
  delayMicroseconds(2);
  digitalWrite(trigh,LOW);

  long h=pulseIn(echoh,HIGH);
  long cmh=h/29/2;

 

  if(cmh<15){
    digitalWrite(hotair,HIGH);  
    }
    else{
      digitalWrite(hotair,LOW);  
      }
  }
