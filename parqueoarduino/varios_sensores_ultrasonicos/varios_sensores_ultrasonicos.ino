
#include <NewPing.h>
// se definen los pines para el sensor 1 
#define TRIGGER_sensor_1  6
#define ECHO_sensor_1     7

// se definen los pines para el sensor 2 
#define TRIGGER_sensor_2  8
#define ECHO_sensor_2     9

// se definen los pines para el sensor 3 
#define TRIGGER_sensor_3  11
#define ECHO_sensor_3     12



#define MAX_DISTANCE 200
 
NewPing sensor_1(TRIGGER_sensor_1, ECHO_sensor_1, MAX_DISTANCE);
NewPing sensor_2(TRIGGER_sensor_2, ECHO_sensor_2, MAX_DISTANCE);
NewPing sensor_3(TRIGGER_sensor_3, ECHO_sensor_3, MAX_DISTANCE);
 
void setup() {
  Serial.begin(9600);
  // mandamos un comando para la hiperterminal limpiar pantalla
Serial.write(12);
}

void loop() {

  if (sensor_1.ping_cm()<=10)
  {
    delay(2000);
    Serial.print(" OCUPADO1  ");  
    Serial.println(sensor_1.ping_cm());  
    
  } 
 else
  {
    delay(2000);
    Serial.print(" LIBRE1  ");  
    Serial.println(sensor_1.ping_cm());  
  } 



   if (sensor_2.ping_cm()<=10)
  {
    delay(2000);
    Serial.print(" OCUPADO2  ");  
    Serial.println(sensor_2.ping_cm());  
    
  } 
 else
  {
    delay(2000);
    Serial.print(" LIBRE2  ");  
    Serial.println(sensor_2.ping_cm());  
  } 


  
    if (sensor_3.ping_cm()<=10)
  {
    delay(2000);
    Serial.print(" OCUPADO3  ");  
    Serial.println(sensor_3.ping_cm());  
    
  } 
 else
  {
    delay(2000);
    Serial.print(" LIBRE3  ");  
    Serial.println(sensor_3.ping_cm());  
  }  

}


/*
delay(2000);
  Serial.print("distancia del sensor 1: ");
  Serial.print(sensor_1.ping_cm());
  Serial.println("cm");


  delay(2000);
  Serial.print("distancia del sensor 2: ");
  Serial.print(sensor_2.ping_cm());
  Serial.println("cm");

  delay(2000);
  Serial.print("distancia del sensor 3: ");
  Serial.print(sensor_3.ping_cm());
  Serial.println("cm");

  */
