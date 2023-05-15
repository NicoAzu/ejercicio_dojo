// C++ code
//
int led_rojo = 12;
int led_amarillo = 7;
int led_verde = 2;
int buzzer = A0;
  
void setup()
{
  pinMode(led_rojo, OUTPUT);
  pinMode(led_amarillo, OUTPUT);
  pinMode(led_verde, OUTPUT);

  pinMode(buzzer, OUTPUT);
  Serial.print(9600);
}

void loop()
{
  if (led_rojo = HIGH)
  {
    int i = 1;
    for(i = 0; i <= 5; i++)
    {
      tone(buzzer, 200,100);
      delay(500);
      tone(buzzer, 200,100);
      delay(500);
      Serial.println("Paso un segundo");

    }
  }
  digitalWrite(led_rojo, HIGH);
  tone(buzzer, 2000, 100);
  delay(5000); // Wait for 1000 millisecond(s)
  digitalWrite(led_rojo, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(led_amarillo, HIGH);
  delay(3000); // Wait for 1000 millisecond(s)
  digitalWrite(led_amarillo, LOW);
  delay(1000); // Wait for 1000 millisecond(s)

  digitalWrite(led_verde, HIGH);
  delay(5000); // Wait for 1000 millisecond(s)
  digitalWrite(led_verde, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  
   
}

