#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");
   
    
    int left = 3;
    
    int right = 0;
    
    int arm = 1;
    
    int claw = 0;
    
    enable_servos();
    
    set_servo_position(arm, 223);
    
    msleep(1000);
    
    set_servo_position(arm, 1435);
    
    set_servo_position(claw, 1560);
    
    
    
    //forward
    
    motor(left,100);
    
    motor(right,100);
    
    msleep(3000);
    
    
    //turn
    
    motor(left,0);
    
    motor(right,110);
    
    msleep(840);
    
    
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
    
    msleep(1100);
    
    
    
    //turn
    
    motor(left,0);
    
    motor(right,50);
    
    msleep(515);
    
    
    
    //stop
    
     motor(left, 0);
    
     motor(right, 0);
    
     msleep(250);
    
    
    
    //raise arn
    
    set_servo_position(arm,1070);
    
    msleep(1000);
    
    
    
     //close claw
   
    set_servo_position(claw,2047);
    
    msleep(1000);
    
    
    
   //turn
    
     motor(left,105);
    
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
    
     motor(right,95);
    
     msleep(1000);
    
    
    
    //backwards
    
    motor(left, -50);
   
    motor(right, -50);
    
    msleep(1750);
   
    
    
    //forward
    
	motor(left,5);
    
    motor(right,5);
    
    msleep(635);
    
    
     //turn
    
     motor(left,0);
    
     motor(right,30);
    
     msleep(1340);
    
    //forward
    
    motor(left,30);
   
    motor(right,30);
    
    msleep(1000);
    
    
    
 
    
    
    
 
    
    																	
    return 0;
}