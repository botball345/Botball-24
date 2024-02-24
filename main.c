#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");
   
    enable_servos();
    
    set_servo_position(0, 1085);
    
    msleep(1000);
    
    set_servo_position(0, 1935);
    
    set_servo_position(3, 1562);
    
    //forward
    
    motor(0,100);
    
    motor(3,100);
    
    msleep(2700);
    
    
    //turn
    
    motor(0,0);
    
    motor(3,100);
    
    msleep(800);
    
    
    //forward
    
    motor(0,100);
    
    motor(3,100);
    
    msleep(920);
    
    
    //close claw
    
    set_servo_position(3, 2047);
    
    msleep(1000);
    
    
    //stop
    
    motor(0, 0);
    
    motor(3, 0);
    
    msleep(500);
    
    
    //backwards
    
    motor(0, -50);
   
    motor(3, -50);
    
    msleep(150);
    
    
    //close claw
   
    set_servo_position(3,2047);
    
    msleep(1000);
    
    
    //open claw
    
    set_servo_position(3,1000);
    
    msleep(1000);
    
    
    //turn
    
    motor(0,0);
    
    motor(3,50);
    
    msleep(500);
    
    
    //stop
    
     motor(0, 0);
    
     motor(3, 0);
    
     msleep(250);
    
    
    //raise arn
    
    set_servo_position(0,1085);
    
    msleep(1000);
    
    
     //close claw
   
    set_servo_position(3,2047);
    
    msleep(1000);
    
    
    
   //turn
    
     motor(0,100);
    
     motor(3,0);
    
     msleep(1000);
 
    
    //forward
    
    motor(0,100);
    
    motor(3,100);
    
    msleep(1000);
    
    
    
    
    return 0;
}
