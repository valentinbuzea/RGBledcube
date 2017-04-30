#include "digitalIOPerformance.h"

#define AchR 0          //defines the "A" (RED)string for the tlc5940 -->OUTPUT 0 first TLC5940
#define BchR 1          //defines the "B" (RED)string for the tlc5940 -->OUTPUT 1
#define CchR 2          //defines the "C" (RED)string for the tlc5940 -->OUTPUT 2
#define DchR 3          //defines the "D" (RED)string for the tlc5940 -->OUTPUT 3
#define EchR 4          //defines the "E" (RED)string for the tlc5940 -->OUTPUT 4
#define FchR 5          //defines the "F" (RED)string for the tlc5940 -->OUTPUT 5
#define GchR 6          //defines the "G" (RED)string for the tlc5940 -->OUTPUT 6
#define HchR 7          //defines the "H" (RED)string for the tlc5940 -->OUTPUT 7
#define IchR 8          //defines the "I" (RED)string for the tlc5940 -->OUTPUT 8
#define AchG 9          //defines the "A" (GREEN)string for the tlc5940 -->OUTPUT 9
#define BchG 10         //defines the "B" (GREEN)string for the tlc5940 -->OUTPUT 10
#define CchG 11         //defines the "C" (GREEN)string for the tlc5940 -->OUTPUT 11
#define DchG 12         //defines the "D" (GREEN)string for the tlc5940 -->OUTPUT 12
#define EchG 13         //defines the "E" (GREEN)string for the tlc5940 -->OUTPUT 13

#define AchB 16         //defines the "A" (BLUE)string for the tlc5940 -->OUTPUT 0 second TLC5940
#define BchB 17         //defines the "B" (BLUE)string for the tlc5940 -->OUTPUT 1
#define CchB 18         //defines the "C" (BLUE)string for the tlc5940 -->OUTPUT 2
#define DchB 19         //defines the "D" (BLUE)string for the tlc5940 -->OUTPUT 3
#define EchB 20         //defines the "E" (BLUE)string for the tlc5940 -->OUTPUT 4
#define FchB 21         //defines the "F" (BLUE)string for the tlc5940 -->OUTPUT 5
#define GchB 22         //defines the "G" (BLUE)string for the tlc5940 -->OUTPUT 6
#define HchB 23         //defines the "H" (BLUE)string for the tlc5940 -->OUTPUT 7
#define IchB 24         //defines the "I" (BLUE)string for the tlc5940 -->OUTPUT 8
#define FchG 25         //defines the "F" (GREEN)string for the tlc5940 -->OUTPUT 9
#define GchG 26         //defines the "G" (GREEN)string for the tlc5940 -->OUTPUT 10
#define HchG 27         //defines the "H" (GREEN)string for the tlc5940 -->OUTPUT 11
#define IchG 28         //defines the "I" (GREEN)string for the tlc5940 -->OUTPUT 12

int AaR = 0;            // set a variable for all LEDs and set the value to 0 for the beginning
int BaR = 0;
int CaR = 0;
int DaR = 0;
int EaR = 0;
int FaR = 0;
int GaR = 0;
int HaR = 0;
int IaR = 0;
int AaG = 0;   
int BaG = 0;
int CaG = 0;
int DaG = 0;
int EaG = 0;
int FaG = 0;
int GaG = 0;
int HaG = 0;
int IaG = 0;
int AaB = 0;   
int BaB = 0;
int CaB = 0;
int DaB = 0;
int EaB = 0;
int FaB = 0;
int GaB = 0;
int HaB = 0;
int IaB = 0;


int AbR = 0;   
int BbR = 0;
int CbR = 0;
int DbR = 0;
int EbR = 0;
int FbR = 0;
int GbR = 0;
int HbR = 0;
int IbR = 0;
int AbG = 0;   
int BbG = 0;
int CbG = 0;
int DbG = 0;
int EbG = 0;
int FbG = 0;
int GbG = 0;
int HbG = 0;
int IbG = 0;
int AbB = 0;   
int BbB = 0;
int CbB = 0;
int DbB = 0;
int EbB = 0;
int FbB = 0;
int GbB = 0;
int HbB = 0;
int IbB = 0;


int AcR = 0;   
int BcR = 0;
int CcR = 0;
int DcR = 0;
int EcR = 0;
int FcR = 0;
int GcR = 0;
int HcR = 0;
int IcR = 0;
int AcG = 0;   
int BcG = 0;
int CcG = 0;
int DcG = 0;
int EcG = 0;
int FcG = 0;
int GcG = 0;
int HcG = 0;
int IcG = 0;
int AcB = 0;   
int BcB = 0;
int CcB = 0;
int DcB = 0;
int EcB = 0;
int FcB = 0;
int GcB = 0;
int HcB = 0;
int IcB = 0;


int REDLEDs[]={AaR,BaR,CaR,DaR,EaR,FaR,GaR,HaR,IaR,
               AbR,BbR,CbR,DbR,EbR,FbR,GbR,HbR,IbR,
               AcR,BcR,CcR,DcR,EcR,FcR,GcR,HcR,IcR};

int GREENLEDs[]={AaG,BaG,CaG,DaG,EaG,FaG,GaG,HaG,IaG,
                 AbG,BbG,CbG,DbG,EbG,FbG,GbG,HbG,IbG,
                 AcG,BcG,CcG,DcG,EcG,FcG,GcG,HcG,IcG};
                 
int BLUELEDs[]={AaB,BaB,CaB,DaB,EaB,FaB,BaB,HaB,IaB,
                AbB,BbB,CbB,DbB,EbB,FbB,BbB,HbB,IbB,  
                AcB,BcB,CcB,DcB,EcB,FcB,BcB,HcB,IcB};
                

