
 /*********************************************************************
 **                                                                 **       
 **                          TÏTOL: Math is fun                     ** 
 **                                                                 **
 **                                                                 ** 
 **  Nom: Salva Ramírez                            Data: 10/04/2017 **
 ********************************************************************/
//************************ INCLUDE ***********************************


//*********************** VARIABLES **********************************
int sensorReading = 3;

//************************* SETUP ************************************

void setup() {      // configura el final de salida
  
Serial.begin(9600);
  Serial.print("The day is "); 
   
  switch (sensorReading) {
  case 0:    
    Serial.println("dark");
    break;
  case 1:    
    Serial.println("dim");
    break;
  case 2:    
    Serial.println("medium");
    break;
  case 3:
    Serial.println("bright");
    break;
  default:
    Serial.println("... I don't know!!!");

  }  
}

//************************** LOOP ************************************

void loop() {                    // inicia el bucle del programa


}


//************************ FUNCIONS **********************************
