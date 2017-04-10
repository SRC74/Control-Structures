
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
int i = 0;


//************************* SETUP ************************************

void setup() {      // configura el final de salida
  
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);  
   while(i <= comptar)
  {
    Serial.print(i);
    Serial.print("-");
    i++;

    
  }  
}

//************************** LOOP ************************************

void loop() {                    // inicia el bucle del programa


}


//************************ FUNCIONS **********************************
