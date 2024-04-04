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


int main()
{
    printf("Hello World\n");
   
    
    
    enable_servos();
    
    set_servo_position(arm, 223);
    
    msleep(1000);
    
    set_servo_position(arm, 1480);
    
    set_servo_position(claw, 1560);
    
    
    
    //forward
    
    //motor(left,100);
    mav(left, 1500);
    
    mav(right,1500);
    //motor(right,100);
    
    msleep(2300);
    
    
    //turns towards the drawer
    
    motor(left,0);
    
    motor(right,135); //150
    
    msleep(880);
    
    
    //forward
    
    motor(left,100);
    
    motor(right,100);
    
    msleep(2500);
    
    //waits 
    motor(left,0);
    motor (right,0);
    msleep (1000);
    
    
    //close claw
    
    set_servo_position(claw, 2047);
    
    msleep(1000);
    
    
    //stop
    
    motor(left, 0);
    
    motor(right, 0);
    
    msleep(500);
    
    
    //backwards (pulls the drawer)
    
    motor(left, -50);
   
    motor(right, -50);
    
    msleep(1500); 
    
    //waits 
    
    motor(left, 0);
    
    motor (right, 0);
    
    msleep (1000);
    
    //open claw (let's go of drawer)
     
    set_servo_position(claw,840);
    
    //stops
    drive(0,0,1000);
    
    //turns (trying to get rid of drawer)
    drive (0,1000,500);
    
    //stops
    drive(0,0,1000);
    
    //raise arm
    
    set_servo_position(arm,1130);
    
    //stops 
    drive(0,0,1000);
    
    //backwards
    drive(-1500,-1500,1000);
        
    //closes claw
   
    set_servo_position(claw,2047);
    
    
   //turns towards light-switch 
    
     motor(left,100);
    
     motor(right,0);
    
     msleep(1000);
    
    
    //forward
    drive (1500,1500,2000);
    
    //turns to face light-switch
    drive (0,1200,2000);
    
    //backwards
    
    drive (-750,-750,1750);
    
    //forward
    
	motor(left,5);
    
    motor(right,5);
    
    msleep(635);
    
    //turn more
    drive (0,450,500);
    
    //forward
    drive (1500,1500,750);
    
    //stop
    drive (0,0,1000);
    
   //turn lightswitch up (raising arm)
   set_servo_position(arm,450);
    
    
    
    
 
    
    																	
    return 0;
}