#include "Roomba missions.h"
#include <kipr/wombat.h>
#include "functions.h"
void purple_noodle() {
    
    create_connect();
    printf("Create correctly connected\n");
    enable_servos();
        
    create_drive_direct(150, 150);
    msleep(7500);
    //arm up/starting position
	move_servo(3,460);
   
    
    //turn
    
    create_drive_direct(100,-100);
    
    msleep(1500);
    
    //drive backwards
    create_drive_direct(-100,-100);
    
    msleep(2000);
    
    //goes forward 
    create_drive_direct (50,50);
    
    msleep(800);
    
   //arm goes up for noodle
    move_servo(2,688);
    
    //claw opens
    move_servo(0,1380);
}
