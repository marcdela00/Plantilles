void setup () {
  pinMode(13, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(4, INPUT);
  pinMode(7, INPUT);
 }


//*********************loop********************************************
void loop () { 
  if(digitalRead(4)){
  digitalWrite(13, HIGH);
  digitalWrite(2, LOW);  
  delay(500); 
  digitalWrite(13, LOW);
  digitalWrite(2, HIGH);    
  delay(500);
  digitalWrite(13, HIGH);
  digitalWrite(2, LOW);  
  delay(500); 
  digitalWrite(13, LOW);
  digitalWrite(2, HIGH);    
  delay(500);
  digitalWrite(13, HIGH);
  digitalWrite(2, LOW);  
  delay(500); 
  digitalWrite(13, LOW);
  digitalWrite(2, HIGH);    
  delay(500);
  digitalWrite(13, HIGH);
  digitalWrite(2, LOW);  
  delay(500); 
  digitalWrite(13, LOW);
  digitalWrite(2, HIGH);    
  delay(500); }else{
 digitalWrite(13, LOW);
 digitalWrite(2, LOW);
  }
  if(digitalRead(7)){
  digitalWrite(13, HIGH);
  digitalWrite(2, HIGH);  
  delay(300); 
  digitalWrite(13, LOW);
  digitalWrite(2, LOW);    
  delay(300); 
  digitalWrite(13, HIGH);
  digitalWrite(2, HIGH);  
  delay(300); 
  digitalWrite(13, LOW);
  digitalWrite(2, LOW);    
  delay(300);
  digitalWrite(13, HIGH);
  digitalWrite(2, LOW);  
  delay(100); 
  digitalWrite(13, LOW);
  digitalWrite(2, HIGH);    
  delay(100);
  digitalWrite(13, HIGH);
  digitalWrite(2, LOW);  
  delay(100); 
  digitalWrite(13, LOW);
  digitalWrite(2, HIGH);    
  delay(100);
  digitalWrite(13, HIGH);
  digitalWrite(2, LOW);  
  delay(100); 
  digitalWrite(13, LOW);
  digitalWrite(2, HIGH);    
  delay(100);}else{
 digitalWrite(13, LOW);
 digitalWrite(2, LOW);
 }
  
}
