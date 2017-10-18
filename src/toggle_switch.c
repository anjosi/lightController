#include "toggle_switch.h"


void toggle_switch_init(c_toggle_switch *p_switch)
{

    p_switch->state = off;
    
}

void toggle_switch_toggle(c_toggle_switch *p_switch){
    if(p_switch->state == on)
        p_switch->state = off;
    else
        p_switch->state = on;
}

bool toggle_switch_is_on(c_toggle_switch *p_switch){
    
    return(p_switch->state == on)?true:false;
}
