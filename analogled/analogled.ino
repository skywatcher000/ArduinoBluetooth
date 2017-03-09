 char data; 
 int ledPin=11; 
void setup()
{
Serial.begin(9600);
Serial.print("Initialization");   
}
void loop()
{


if(Serial.available() > 0)      // Send data only when you receive data:
   {
    data = Serial.read();
    Serial.print(data);
   switch(data)
   {

     case '0':
    analogWrite(ledPin,0*20);
    break;
    
    case '1':
    analogWrite(ledPin,1*20);
    break;
    
    case '2':
    analogWrite(ledPin,2*20);
    break;
    
    
    case '3':
    analogWrite(ledPin,3*20);
    break; 
    
    
    case '4':
    analogWrite(ledPin,4*20);
    break;
    
    case '5':
    analogWrite(ledPin,5*20);
    break;

    
    case '6':
    analogWrite(ledPin,6*20);
    break;

    case '7':
    analogWrite(ledPin,7*20);
    break;
    
    case '8':
    analogWrite(ledPin,8*20);
    break;

    
    case '9':
    analogWrite(ledPin,9*20);
    break;



    
     
   }
   }
}
