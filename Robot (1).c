#include "Robot.h"
#include <kipr/wombat.h>


    int left = 3;
  
    int right = 0;
    
    int arm = 1;
    
    int claw = 0;

void drive(int left_speed, int right_speed, int time) { 
    mav (left,left_speed);
    mav (right, right_speed);
    msleep (time);
}