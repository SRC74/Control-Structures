
 /*********************************************************************
 **                                                                 **       
 **                          TÏTOL: Math is fun                     ** 
 **                                                                 **
 **                                                                 ** 
 **  Nom: Salva Ramírez                            Data: 10/04/2017 **
 ********************************************************************/
//************************ INCLUDE ***********************************


//*********************** VARIABLES **********************************
int comptar = 11;

//************************* SETUP ************************************

void setup() {      // configura el final de salida
  
  Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);
  for (int i=0; i <= comptar; i++)
  {
    Serial.print(i);
    Serial.print("-");


  }  
}

//************************** LOOP ************************************

void loop() {                    // inicia el bucle del programa


}


//************************ FUNCIONS **********************************
