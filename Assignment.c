// pre-processor directives

// include needed header file
#include "./headers./Assignment.h"

// write code for functions declared in header file
void heartRate (int, int){
    float targetHeartRate;
    float intensity = START;
    do{
        targetHeartRate = ((220 - age)- restingPulse) * (intensity) + restingPulse;
        printf("%.0f  \t         %.0f bpm\n",intensity*100,targetHeartRate);
        
        intensity += .05;
    }while(STOP(intensity));

}

void heartRateReference (int *age, int*restingPulse){
    float targetHeartRate;
    float intensity = START;
    
    do{
        targetHeartRate = ((220 - *age)- *restingPulse) * (intensity) + *restingPulse;
        printf("%.0f   \t         %.0f bpm\n",intensity*100,targetHeartRate);
        
        intensity += .05;
    }while(STOP(intensity));

}
   
   