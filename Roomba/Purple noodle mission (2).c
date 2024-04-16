#include "Roomba missions.h"
#include <kipr/wombat.h>
#include "functions.h"
void purple_noodle() {
    create3_connect();
    
    
    create3_drive_straight(1,0.5);
    
    create3_wait();
    
    enable_servos();
        
	move_servo(2,1000)
    
}
