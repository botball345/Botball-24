#include "missions.h"
#include "Robot.h"
#include <kipr/wombat.h>

extern int left;
  
extern int right;

extern int arm;

extern int claw;

//Adara
void mission_two() {
 //Start
    //move backwards
    drive(-1500,-1500,250);
    
    //wait
    drive (0,0,1000);
    
    //turning right
    drive(1400,0,1600);
    
    //wait
    drive (0,0,1000);
    
    //forward (collecting orange poms);
    drive (1500,1500,2000);
    
    //wait
    drive (0,0,1000);
    
    //turns to area 5 (right)
    drive(1500,0,2500);
    
    //move backwards
    drive(-1500,-1500,250);
    
  
    
}