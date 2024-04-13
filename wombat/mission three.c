#include "missions.h"
#include "Robot.h"
#include <kipr/wombat.h>

extern int left;
  
extern int right;

extern int arm;

extern int claw;

void mission_three() 
{
//Nataly
    //start
//drive forward
    drive(1500, 10, 1500);
    
//u turn
    drive(1500, 1500, 2000);
    
//drive into corner box
    drive(1500, 1500, 1500);
        
	}