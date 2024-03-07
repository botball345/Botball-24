#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");
   
    
    int left = 0;
    
    int right = 3;
    
    int arm = 0;
    
    int claw = 3;
    
    enable_servos();
    
    set_servo_position(arm, 1069);
    
    msleep(1000);
    
    set_servo_position(arm, 1945);
    
    set_servo_position(claw, 1560);
    
    
    
    //forward
    
    motor(left,100);
    
    motor(right,100);
    
    msleep(3000);
    
    
    //turn
    
    motor(left,0);
    
    motor(right,85);
    
    msleep(785);
    
    
    //forward
    
    motor(left,100);
    
    motor(right,100);
    
    msleep(920);
    
    
    //close claw
    
    set_servo_position(claw, 2047);
    
    msleep(1000);
    
    
    //stop
    
    motor(left, 0);
    
    motor(right, 0);
    
    msleep(500);
    
    
    //backwards
    
    motor(left, -50);
   
    motor(right, -50);
    
    msleep(450);
    
    
    //close claw
   
    set_servo_position(claw,2047);
    
    msleep(1000);
    
    
    
    //open claw
    
    set_servo_position(3,1000);
    
    msleep(1000);
    
    
    
    //turn
    
    motor(left,0);
    
    motor(right,50);
    
    msleep(500);
    
    
    
    //stop
    
     motor(left, 0);
    
     motor(right, 0);
    
     msleep(250);
    
    
    
    //raise arn
    
    set_servo_position(arm,1060);
    
    msleep(1000);
    
    
    
     //close claw
   
    set_servo_position(claw,2047);
    
    msleep(1000);
    
    
    
   //turn
    
     motor(left,100);
    
     motor(right,0);
    
     msleep(1000);
 
    
    
    //forward
    
    motor(left,100);
    
    motor(right,100);
    
    msleep(500);
    
    
    
     //raise arn
    
    set_servo_position(arm,1800);
    
    msleep(1500);
    
    
    
    //turn
    
     motor(left,0);
    
     motor(right,100);
    
     msleep(1000);
    
    
    
    //backwards
    
    motor(left, -50);
   
    motor(right, -50);
    
    msleep(1750);
   
    
    
    //forward
    
	motor(left,10);
    
    motor(right,10);
    
    msleep(650);
    
    
     //turn
    
     motor(left,0);
    
     motor(right,20);
    
     msleep(1295);
    
    
    
    //backwards
    
    motor(left, -50);
   
    motor(right, -50);
    
    msleep(740);
    
    
    
    //forward
    
    motor(left,75);
    
    motor(right,75);
    
    msleep(925);
    
    																	
    return 0;
}
