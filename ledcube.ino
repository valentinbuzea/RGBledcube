#include "Tlc5940.h"                
#include "digitalIOPerformance.h"   
#define LayerOne 14                 // Gate of 1.MOSFET which connects to Layer "a" (anodes of all Strings in Layer "a")
#define LayerTwo 15                 // Gate of 2.MOSFET which connects to Layer "b" (anodes of all StringS in Layer "b")
#define LayerThree 16               // Gate of 3.MOSFET which connects to Layer "c" (anodes of all Strings in Layer "c")


                   
int LayerDuration = 4000;           // ON time of each Layer in microseconds      
int layer = 1;                      // starting with Layer 1 (Layer "a")
unsigned long oldMicros = 0;        // starting counter to decide when if(micros()>=oldMicros)is true to change active layer, count++1, MatrixUpdate(); don't know what micros() is? Look here: http://arduino.cc/de/Reference/Micros#.UygzAIWmWd4
int count=0;                        // starting counter which is included in if() statement to change the shown picture, not necessary when using a static picture
int stretch=25;                     // set timer for the change of the shown picture, if animation should move really fast then low stretch value, if animation should move really slow than big stretch value
int bright = 3500;                  // set brightness for all Strings(4095=20mA, 0=0ma, 1000=4.88mA,....). If you want individually brightness for a String you have to change the value in tab "function"
int p;                              // used in functions for-loop
int q;                              // used in functions for-loop
int x;                              // used in functions for-loop, does not work yet
int r1;int r2;int r3;int r4;        // variables for RED colour values between (0-4095)
int g1;int g2;int g3;int g4;        // variables for GREEN colour values between (0-4095)
int b1;int b2;int b3;int b4;        // variables for BLUE colour values between (0-4095)
int c1;                             // used in functions as counter


void setup()    
{
  pinMode(LayerOne, OUTPUT);                   // declare arduino nano pin A0(LayerOne) as OUTPUT
  pinMode(LayerTwo, OUTPUT);                   // declare arduino nano pin A1(LayerTwo) as OUTPUT
  pinMode(LayerThree, OUTPUT);                 // declare arduino nano pin A2(LayerThree) as OUTPUT
  
  Tlc.init();                                  // configures the arduino to use the tlc5940, be sure to connect the arduino correctly to the tlc 
  
  c1=r1=r2=r3=r4=g1=g2=g3=g4=b1=b2=b3=b4=p=q=0;

}

void loop(){
  
  if(micros() >= oldMicros){                                              // waits until LayerDuration is reached and than goes through cycle
    
    oldMicros= micros() + LayerDuration;                                 // updates oldMicros value by adding the micros() with LayerDuration
    
    if(count==0){reset();randomRED(bright); randomGREEN(bright); randomBLUE(bright);}                           
    if(count==stretch){ reset(); allgreen(bright); }                         
    if(count==2*stretch){ reset(); allblue(bright); } 
    if(count==3*stretch){ reset(); allred(bright); allgreen(bright); }    
    if(count==4*stretch){ reset(); allred(bright); allblue(bright); }     
    if(count==5*stretch){ reset(); allgreen(bright); allblue(bright); }        
    if(count==6*stretch){ reset(); allred(bright); allgreen(bright); allblue(bright); } 
    if(count==7*stretch){ reset(); randomRED(bright); randomGREEN(bright); }
    if(count==8*stretch){ reset(); randomBLUE(bright); randomGREEN(bright); }
    if(count==9*stretch){ reset(); randomRED(bright); randomBLUE(bright); }
    if(count==10*stretch){ reset(); randomRED(bright); }         
    if(count==11*stretch){ reset(); randomGREEN(bright); } 
    if(count==12*stretch){ reset(); randomBLUE(bright); } 
                              
    CubeUpdate(layer);                                                 // sets the values for the tlc5940 Outputs and puts all MOSFET Gates HIGH (not active) except for one MOSFET Low (active) -->this layer is ON, also look under tab "function"  
    
    layer++;                                                           
    count++;                                                           
    
    delay(125);
    
    if(layer==4){ layer = 1; }                                          // we only have 4 layers, so we start with layer 1 again if layer counter goes to 6                                          
    if (count==13*stretch){ count=0; }                                    
  
  }
    
}
