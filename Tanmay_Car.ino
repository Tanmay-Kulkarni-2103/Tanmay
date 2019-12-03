char command;
String string;

  void setup()
  {
     pinMode(10,OUTPUT);
     pinMode(11,OUTPUT);
     pinMode(12,OUTPUT);
     pinMode(13,OUTPUT);

    Serial.begin(9600);
    
  }

  void loop()
  {
    if (Serial.available() > 0) 
    {string = "";}
    
    while(Serial.available() > 0)
    {
      command = ((byte)Serial.read());
      
      if(command == ':')
      {
        break;
      }
      
      else
      {
        string += command;
      }
      
      delay(1);
    }
    
    if(string == "F")//Forward
    {
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
       Serial.println(string);
    }
    
    if(string =="B")//Back
    {
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
        Serial.println(string);
    }
    
    if(string =="R")//Turn Right
    {
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
        Serial.println(string);
    }
    
    if(string =="L")//Turn Left
    {
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
        Serial.println(string);
    }
    
    if(string =="S")//Stop
    {
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
        Serial.println(string);
    }
    
 }

 

    
