// C++ code
//

//# define apagad 	LOW

using namespace std;

/* void setLED(String &pin2 ,String &pin3 ,String &pin4 ,String &pin5)
{
  digitalWrite(5, &pin5);
  digitalWrite(4, &pin4);
  digitalWrite(3, &pin3);
  digitalWrite(2, &pin2);   
} */


void setup()
{
// LED Pin
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
// Buttons Pin

  pinMode(8 , INPUT);
  pinMode(9 , INPUT);
  pinMode(10, INPUT);

// Potenciometer Analog Pin

  pinMode(A0 , INPUT);
  pinMode(A1 , INPUT);
  pinMode(A2 , INPUT);
  Serial.begin(9600);

}


void loop()
{

  int pote1=analogRead(A0);
  int pote2=analogRead(A1);
  int pote3=analogRead(A2);
  
  if (digitalRead(10)==HIGH){
   
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
 
  }
  
  if (digitalRead(9)==HIGH){
    
    Serial.println(pote2);
    switch (res){
      case 0 ... 256:
        digitalWrite(5, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(3, LOW);
        digitalWrite(2, LOW);
      break;
      case 257 ... 512:
        digitalWrite(5, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(3, LOW);
        digitalWrite(2, LOW);
      break;
      case 513 ... 768:
        digitalWrite(5, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(2, LOW);
      break;
      case 769 ... 1023:
        digitalWrite(5, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(2, HIGH);
      break;	
      default:
        printf("Do Noting lul");
        } 
    
  }

  if (digitalRead(8)==HIGH){
    int res=(pote1+pote2)-pote3;
 	Serial.println(res);
   switch (res){
      case 0 ... 512:
        digitalWrite(5, HIGH);
        digitalWrite(4, LOW);
        digitalWrite(3, LOW);
        digitalWrite(2, LOW);
      break;
      case 513 ... 1024:
        digitalWrite(5, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(3, LOW);
        digitalWrite(2, LOW);
      break;
      case 1025 ... 1536:
        digitalWrite(5, LOW);
        digitalWrite(4, LOW);
        digitalWrite(3, HIGH);
        digitalWrite(2, LOW);
      break;
      case 1537 ... 2050:
        digitalWrite(5, LOW);
        digitalWrite(4, LOW);
        digitalWrite(3, LOW);
        digitalWrite(2, HIGH);
      break;	
      default:
        printf("Do Noting lul");
        } 
    
  
  }

}
