#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_D4  294
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_G4  392
#define NOTE_C5  523
#define MSG(a,b,c,d,e,f) Serial.print("Nota total: ");Serial.print(a);Serial.print(" Figura: ");Serial.print(b);Serial.print(" Duracion: ");Serial.print(c);Serial.print(" Silencio: ");Serial.print(d);Serial.print(" Tone duracion:");Serial.print(e);Serial.print(" Delay: ");Serial.println(f);


#define buzz 6
#define silencio 0
int   nota[] = {NOTE_D4,NOTE_D4,NOTE_E4, 440 , NOTE_E4, NOTE_G4 , NOTE_D4,NOTE_C4,NOTE_C4 ,NOTE_B3 ,  NOTE_D4,  NOTE_E4 ,    NOTE_F4,    NOTE_D4,  NOTE_E4};
int figura[] = {  8    ,    8   ,   8    ,   8  , 16  ,     8   ,   16   ,   16  ,   16   ,  16    ,     8   ,    16    ,       8   ,      8    ,     8   };


float TiempoEnteNota =1.5;
int BPM = 110;

float tiempoSilencio = 1.0;
int duracionTotalNota = (60000 * 4) / BPM;


void setup() {
    pinMode( 6 , OUTPUT);
      Serial.begin(9600);
}


// tone( pin , nota , duracion)  ->  toca una nota durante X tiempo
// delay( duracion  )            -> duracion entre notas
// noTone( pin )                 -> deje de sonar la nota

#define length(vec,tipo) sizeof(vec)/sizeof(tipo)
void loop() {
  //CICLO  FOR
  
  for( int x = 0 ; x < length(nota,int)-1 ; x++ )
  {
    if( figura[x] >= 0 )
    {
        //figura es POSITIVA
          int duracionNota = ( duracionTotalNota / figura[x] )  ;
          tone( 6 , nota[x] , duracionNota * 0.9 ); //el 0.8  no son obligatorio
          delay( duracionNota );  //el 1.3  no son obligatorio
          noTone(6);
        //MSG( duracionTotalNota, figura[i] , duracionNota,  tiempoSilencio, duracionNota*0.8 , duracionNota*1.3 );
    }else{
        //figura es NEGATIVA
            int duracionNota = ( duracionTotalNota / (figura[x]*(-1)) )  ;
            tone( 6 , nota[x] , duracionNota * 0.9 );
              delay( duracionNota  );
              noTone(6);
          //MSG( duracionTotalNota, figura[i] , duracionNota,  tiempoSilencio, duracionNota*0.8 , duracionNota );
    }
    
    
  }
    
 
}

  
  
