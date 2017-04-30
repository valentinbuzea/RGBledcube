#include "digitalIOPerformance.h"

void CubeUpdate(int layerno){ 
  
  if(layerno == 1){                 
                                                    // Tlc.set(OUTPUT, BRIGHTNESS VALUE (0-4095)), general use of Tlc.set      
    Tlc.set(AchR, REDLEDs[0]);             
    Tlc.set(BchR, REDLEDs[1]);             
    Tlc.set(CchR, REDLEDs[2]);             
    Tlc.set(DchR, REDLEDs[3]);             
    Tlc.set(EchR, REDLEDs[4]);             
    Tlc.set(FchR, REDLEDs[5]);             
    Tlc.set(GchR, REDLEDs[6]);             
    Tlc.set(HchR, REDLEDs[7]);             
    Tlc.set(IchR, REDLEDs[8]);             
    Tlc.set(AchG, GREENLEDs[0]);              
    Tlc.set(BchG, GREENLEDs[1]);             
    Tlc.set(CchG, GREENLEDs[2]);             
    Tlc.set(DchG, GREENLEDs[3]);             
    Tlc.set(EchG, GREENLEDs[4]);             
    Tlc.set(FchG, GREENLEDs[5]);             
    Tlc.set(GchG, GREENLEDs[6]);             
    Tlc.set(HchG, GREENLEDs[7]);             
    Tlc.set(IchG, GREENLEDs[8]);             
    Tlc.set(AchB, BLUELEDs[0]);             
    Tlc.set(BchB, BLUELEDs[1]);             
    Tlc.set(CchB, BLUELEDs[2]);             
    Tlc.set(DchB, BLUELEDs[3]);             
    Tlc.set(EchB, BLUELEDs[4]);             
    Tlc.set(FchB, BLUELEDs[5]);             
    Tlc.set(GchB, BLUELEDs[6]);             
    Tlc.set(HchB, BLUELEDs[7]);            
    Tlc.set(IchB, BLUELEDs[8]);             
    
    digitalWrite(LayerOne, HIGH);                   // sets LayerOne (pin A0) High (not active)--> Layer one OFF
    digitalWrite(LayerTwo, HIGH);                   // sets LayerTwo (pin A1) High (not active)--> Layer two OFF
    digitalWrite(LayerThree, HIGH);                 // sets LayerThree (pin A2) High (not active)--> Layer three OFF
    Tlc.update();                                   // writes the values for the LEDs brightness to the tlc
    delay(1);                                       // give the tlc some time to let the value settle
    digitalWrite(LayerOne, LOW);                    // sets LayerOne (pin A0) Low (active)--> Layer one ON
    
  }
  
    if(layerno == 2){
    
  
    Tlc.set(AchR, REDLEDs[9]);                      // same as if(layerno == 1) but we use different brightness, so we define LEDs in the second layer
    Tlc.set(BchR, REDLEDs[10]);
    Tlc.set(CchR, REDLEDs[11]);
    Tlc.set(DchR, REDLEDs[12]);    
    Tlc.set(EchR, REDLEDs[13]);
    Tlc.set(FchR, REDLEDs[14]);
    Tlc.set(GchR, REDLEDs[15]);
    Tlc.set(HchR, REDLEDs[16]);    
    Tlc.set(IchR, REDLEDs[17]);
    Tlc.set(AchG, GREENLEDs[9]);            
    Tlc.set(BchG, GREENLEDs[10]);
    Tlc.set(CchG, GREENLEDs[11]);
    Tlc.set(DchG, GREENLEDs[12]);    
    Tlc.set(EchG, GREENLEDs[13]);
    Tlc.set(FchG, GREENLEDs[14]);
    Tlc.set(GchG, GREENLEDs[15]);
    Tlc.set(HchG, GREENLEDs[16]);    
    Tlc.set(IchG, GREENLEDs[17]);
    Tlc.set(AchB, BLUELEDs[9]);             
    Tlc.set(BchB, BLUELEDs[10]);
    Tlc.set(CchB, BLUELEDs[11]);
    Tlc.set(DchB, BLUELEDs[12]);    
    Tlc.set(EchB, BLUELEDs[13]);
    Tlc.set(FchB, BLUELEDs[14]);
    Tlc.set(GchB, BLUELEDs[15]);
    Tlc.set(HchB, BLUELEDs[16]);    
    Tlc.set(IchB, BLUELEDs[17]);
    
    
    digitalWrite(LayerOne, HIGH);                   
    digitalWrite(LayerTwo, HIGH);
    digitalWrite(LayerThree, HIGH);
    Tlc.update();
    delay(1);
    digitalWrite(LayerTwo, LOW);  
    
  }
  
  
  if(layerno == 3){
    
    Tlc.set(AchR, REDLEDs[18]);             
    Tlc.set(BchR, REDLEDs[19]);
    Tlc.set(CchR, REDLEDs[20]);
    Tlc.set(DchR, REDLEDs[21]);    
    Tlc.set(EchR, REDLEDs[22]);
    Tlc.set(FchR, REDLEDs[23]);
    Tlc.set(GchR, REDLEDs[24]);
    Tlc.set(HchR, REDLEDs[25]);    
    Tlc.set(IchR, REDLEDs[26]);
    Tlc.set(AchG, GREENLEDs[18]);            
    Tlc.set(BchG, GREENLEDs[19]);
    Tlc.set(CchG, GREENLEDs[20]);
    Tlc.set(DchG, GREENLEDs[21]);    
    Tlc.set(EchG, GREENLEDs[22]);
    Tlc.set(FchG, GREENLEDs[23]);
    Tlc.set(GchG, GREENLEDs[24]);
    Tlc.set(HchG, GREENLEDs[25]);    
    Tlc.set(IchG, GREENLEDs[26]);
    Tlc.set(AchB, BLUELEDs[18]);             
    Tlc.set(BchB, BLUELEDs[19]);
    Tlc.set(CchB, BLUELEDs[20]);
    Tlc.set(DchB, BLUELEDs[21]);    
    Tlc.set(EchB, BLUELEDs[22]);
    Tlc.set(FchB, BLUELEDs[23]);
    Tlc.set(GchB, BLUELEDs[24]);
    Tlc.set(HchB, BLUELEDs[25]);    
    Tlc.set(IchB, BLUELEDs[26]);
   
    
    digitalWrite(LayerOne, HIGH);   
    digitalWrite(LayerTwo, HIGH);
    digitalWrite(LayerThree, HIGH);
    Tlc.update();
    delay(1);
    digitalWrite(LayerThree, LOW);   
    
  }
  }
      
  void reset(){                 // we set all LEDs to 0 brightness
    for (p = 0;p < 27;p++){
      REDLEDs[p]=0;
      GREENLEDs[p]=0;
      BLUELEDs[p]=0;
    }
  }
  
  void allred(int bright){
    for (int p = 0;p < 27;p++){
      REDLEDs[p]=bright;
    }
  }
  
  void allgreen(int bright){
    for (p = 0;p < 27;p++){
      GREENLEDs[p]=bright;
    }
 }
  
  void allblue(int bright){
    for (p = 0;p < 27;p++){
      BLUELEDs[p]=bright;
    }
  }
      
  void randomRED(int bright){
    for (p = 0;p < 10;p++){
      REDLEDs[random(27)]=random(500, bright);
    }
  }
    
  void randomGREEN(int bright){  
    for (p = 0;p < 10;p++){
      GREENLEDs[random(27)]=random(500,bright);
    }
  }
    
  void randomBLUE(int bright){
    for (p = 0;p < 10;p++){    
      BLUELEDs[random(27)]=random(500,bright);
    }
  }
  
  void test(int bright){
    REDLEDs[q]=bright;
    q=q+1;
    if (q == 27){
      q=0;
    }
  }        
   
   void blue_turnon(int liste[], int anzahl, int bright2){
      for (int i = 0; i < anzahl; i++)
      {
          BLUELEDs[liste[i]]=bright2;
      }
   }
   
   void green_turnon(int liste[], int anzahl, int bright2){
      for (int i = 0; i < anzahl; i++)
      {
          GREENLEDs[liste[i]]=bright2;
      }
   }
    
   void red_turnon(int liste[], int anzahl, int bright2){
      for (int i = 0; i < anzahl; i++)
      {
          REDLEDs[liste[i]]=bright2;
      }
  }
    
  void wall(int bright){
  
    if(q == 0){
      reset();
      int turnonlist[] = {0,1,2,   9,10,11,    18,19,20};
      red_turnon(turnonlist, 9, bright);
    }
             
    if(q == 1){
      reset();
      int turnonlist[] = {1,2,3,   10,11,12,   19,20,21};
      red_turnon(turnonlist, 9, bright);
    }
             
    if(q == 2){
      reset();
      int turnonlist[] = {2,3,8,   11,12,17,   20,21,26};
      red_turnon(turnonlist, 9, bright);
    }
             
    if(q == 3){
      reset();
      int turnonlist[] = {3,8,7,   12,17,16,   21,26,25};
      red_turnon(turnonlist, 9, bright);
    }
             
    if(q == 4){
      reset();
      int turnonlist[] = {8,7,6,   17,16,15,   26,25,24};
      red_turnon(turnonlist, 9, bright);
    }
             
    if(q == 5){
      reset();    
      int turnonlist[] = {7,6,5,   16,15,14,   25,24,23};
      red_turnon(turnonlist, 9, bright);
    }
             
    if(q == 6){
      reset();
      int turnonlist[] = {6,5,0,   15,14,9,   24,23,18};
      red_turnon(turnonlist, 9, bright);
    }
             
    if(q == 7){
      reset();
      int turnonlist[] = {5,0,1,   14,9,10,   23,18,19};
      red_turnon(turnonlist, 9, bright);
    }
             
    if(q == 8){
      reset();
      int turnonlist[] = {0,1,2,   9,10,11,   18,19,20};
      red_turnon(turnonlist, 9, bright);
    }
      
    q = q + 1;
  
    if(q == 9){
      q = 0;
    }
    
  }
    
  void colorchange(){
  
    for (p = 0;p < 27;p++){
      REDLEDs[p] = r1;
      GREENLEDs[p] = g1;
      BLUELEDs[p] = b1;
    }
      
    if(q == 0){
      r1 = c1;
      b1 = 4095-c1;
      c1++;
            
      if(c1 == 4096){
        c1 = 0;
        q = q + 1;
      }
    }
    
    if(q == 1){
      g1 = c1;
      r1 = 4095 - c1;
      c1++;
      
      if(c1 == 4096){
        c1 = 0;
        q = q + 1;
      }
    }
      
    if(q == 2){
      b1 = c1;
      g1 = 4095 - c1;
      c1++;
      
      if( c1 == 4096){
        c1 = 0;
        q = 0;
      }
    }
  }
  


