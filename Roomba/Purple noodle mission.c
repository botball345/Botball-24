#include "Roomba missions.h"
#include <kipr/wombat.h>

void purple_noodle() {
    
    create3_connect();
    
    enable_servos();
        
    //arm up/starting position
	//set_servo_position(3,460);
    
    //create3_wait();
    
    //forward
    
    create3_drive_straight(0.75,1);
    
    create3_wait();
    
    //turns towards light switch
    create3_rotate_degrees(-30,2);
    
    create3_wait();
    
    
    
    
    
    
    
    //goes forward 
    //create3_drive_straight (0.2,0.2);
    
    //create3_wait();
    
    //turn back around to the purple noodle
    
    //create3_rotate_degrees(-175,5);
    
   // create3_wait();
    
   //goes towards purple noodle ready to grab
    //create3_drive_straight(0.2,1);
    
    //create3_wait();
    
}
