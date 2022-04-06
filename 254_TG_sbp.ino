 #define  C     2109.89
 #define  D     1879.69 
 #define  E     1674.62
 #define  f     1580.63
 #define  G     1408.18 
 #define  R     0
 // define pin
 int speakerOut = 26;
 int DEBUG = 1;
 void setup() {
   pinMode(speakerOut, OUTPUT);
   if (DEBUG) {
     Serial.begin(9600); 
   }
 }
 
 double melody[] = {E, E, E,R,
 E, E, E,R,
 E, G, C, D, E, R,
 f, f, f,f, f, E, E,E, E, D ,D,E, D, R, G ,R,
 E, E, E,R,
 E, E, E,R,
 E, G, C, D, E, R,
 f, f, f,f, f, E, E, E,  G,G, f, D, C,R};
 int MAX_COUNT = sizeof(melody) / 2; 
 
 long tempo = 10000;
 
 int paaus = 1000;

 int rest_count = 2; 
 
 int tone_ = 0;
 int beat = 0;
 long duration  = 0;

 void playTone() {










   
   }
   else { 
     for (int j = 0; j < rest_count; j++) { 
       delayMicroseconds(duration); 
     } 
   }                                
 }

 void loop() {







  
 }
