void setup () {
   pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);  
  pinMode(10, OUTPUT);    
  pinMode(9, OUTPUT);   
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  
  pinMode(2, INPUT);
   Serial.begin(9600);
 }


//*********************loop********************************************
void loop () { 
  if(digitalRead(2)){
  digitalWrite(12, HIGH);
    delay(50); 
  digitalWrite(11, HIGH);    
  delay(50);
  digitalWrite(10, HIGH);
  digitalWrite(12, LOW);  
  delay(50); 
  digitalWrite(11, LOW);
  digitalWrite(9, HIGH);    
  delay(50);
  digitalWrite(10, LOW);
  digitalWrite(8, HIGH);   
  delay(50); 
  digitalWrite(9, LOW);
  digitalWrite(7, HIGH);     
  delay(50);
  digitalWrite(8, LOW);
  digitalWrite(6, HIGH); 
  delay(50); 
  digitalWrite(7, LOW);
  digitalWrite(5, HIGH);  
  delay(50); 
  digitalWrite(6, LOW);  
  delay(50); 
  digitalWrite(5, LOW);  
  delay(200);

  digitalWrite(5, HIGH);
    delay(50); 
  digitalWrite(6, HIGH);    
  delay(50);
  digitalWrite(7, HIGH);
  digitalWrite(5, LOW);  
  delay(50); 
  digitalWrite(6, LOW);
  digitalWrite(8, HIGH);    
  delay(50);
  digitalWrite(7, LOW);
  digitalWrite(9, HIGH);   
  delay(50); 
  digitalWrite(8, LOW);
  digitalWrite(10, HIGH);     
  delay(50);
  digitalWrite(9, LOW);
  digitalWrite(11, HIGH); 
  delay(50); 
  digitalWrite(10, LOW);
  digitalWrite(12, HIGH);  
  delay(50); 
  digitalWrite(11, LOW);  
  delay(50); 
  digitalWrite(12, LOW);  
  delay(50);
//PRIMER
 digitalWrite(12, HIGH);
    delay(50); 
  digitalWrite(11, HIGH);    
  delay(50);
  digitalWrite(10, HIGH);
  digitalWrite(12, LOW);  
  delay(50); 
  digitalWrite(11, LOW);
  digitalWrite(9, HIGH);    
  delay(50);
  digitalWrite(10, LOW);
  digitalWrite(8, HIGH); 
   Serial.println("Michel?");  
  delay(1000); 
  digitalWrite(9, LOW);
  digitalWrite(7, HIGH);     
  delay(50);
  digitalWrite(8, LOW);
  digitalWrite(6, HIGH); 
  delay(50); 
  digitalWrite(7, LOW);
  digitalWrite(5, HIGH);  
  delay(50); 
  digitalWrite(6, LOW);  
  delay(50); 
  digitalWrite(5, LOW);  
  delay(200);

  digitalWrite(5, HIGH);
    delay(50); 
  digitalWrite(6, HIGH);    
  delay(50);
  digitalWrite(7, HIGH);
  digitalWrite(5, LOW);  
  delay(50); 
  digitalWrite(6, LOW);
  digitalWrite(8, HIGH);    
  delay(50);
  digitalWrite(7, LOW);
  digitalWrite(9, HIGH);   
  delay(50); 
  digitalWrite(8, LOW);
  digitalWrite(10, HIGH);     
  delay(50);
  digitalWrite(9, LOW);
  digitalWrite(11, HIGH); 
  delay(50); 
  digitalWrite(10, LOW);
  digitalWrite(12, HIGH);  
  delay(50); 
  digitalWrite(11, LOW);  
  delay(50); 
  digitalWrite(12, LOW);  
  delay(50);
  delay(50); }else{
   digitalWrite(12, LOW);
  digitalWrite(10, LOW);
  digitalWrite(8, LOW);
  digitalWrite(6, LOW);
  
  digitalWrite(11, LOW); 
  digitalWrite(9, LOW); 
  digitalWrite(7, LOW); 
  digitalWrite(5, LOW); 
  }
   //segon botó
   if(digitalRead(3)){
  digitalWrite(12, HIGH);
    delay(20); 
  digitalWrite(11, HIGH);    
  delay(20);
  digitalWrite(10, HIGH);
  digitalWrite(12, LOW);  
  delay(20); 
  digitalWrite(11, LOW);
  digitalWrite(9, HIGH);    
  delay(20);
  digitalWrite(10, LOW);
  digitalWrite(8, HIGH);   
  delay(20); 
  digitalWrite(9, LOW);
  digitalWrite(7, HIGH);     
  delay(20);
  digitalWrite(8, LOW);
  digitalWrite(6, HIGH); 
  delay(20); 
  digitalWrite(7, LOW);
  digitalWrite(5, HIGH);  
  delay(20); 
  digitalWrite(6, LOW);  
  delay(20); 
  digitalWrite(5, LOW);  
  delay(80);
//1/2
  digitalWrite(5, HIGH);
    delay(20); 
  digitalWrite(6, HIGH);    
  delay(20);
  digitalWrite(7, HIGH);
  digitalWrite(5, LOW);  
  delay(20); 
  digitalWrite(6, LOW);
  digitalWrite(8, HIGH);    
  delay(20);
  digitalWrite(7, LOW);
  digitalWrite(9, HIGH);   
  delay(20); 
  digitalWrite(8, LOW);
  digitalWrite(10, HIGH);     
  delay(20);
  digitalWrite(9, LOW);
  digitalWrite(11, HIGH); 
  delay(20); 
  digitalWrite(10, LOW);
  digitalWrite(12, HIGH);  
  delay(20); 
  digitalWrite(11, LOW);  
  delay(20); 
  digitalWrite(12, LOW);  
  delay(80);

} else{
   digitalWrite(12, LOW);
  digitalWrite(10, LOW);
  digitalWrite(8, LOW);
  digitalWrite(6, LOW);
  
  digitalWrite(11, LOW); 
  digitalWrite(9, LOW); 
  digitalWrite(7, LOW); 
  digitalWrite(5, LOW); 
  }
 
  
}
