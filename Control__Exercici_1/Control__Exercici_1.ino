
 /*********************************************************************
 **                                                                 **       
 **                          TÏTOL: Math is fun                     ** 
 **                                                                 **
 **                                                                 ** 
 **  Nom: Salva Ramírez                            Data: 10/04/2017 **
 ********************************************************************/
//************************ INCLUDE ***********************************


//*********************** VARIABLES **********************************
int tempAigua = 99;



//************************* SETUP ************************************

void setup() {      // configura el final de salida
  
Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( tempAigua < 100)
  {
    Serial.print("Aigua no bull!");
  } 
else 
  {
   

Serial.print("Aigua bull!");
  }  
}

//************************** LOOP ************************************

void loop() {                    // inicia el bucle del programa


}


//************************ FUNCIONS **********************************
