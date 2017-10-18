#include <stdio.h>
#include "toggle_switch.h"
#include <pthread.h>

int main(char argc, int argv[1])
{
pthread_mutex_t count_mutex;
 pthread_cond_t count_threshold_cv;
    c_toggle_switch lightSwitch;

    toggle_switch_init(&lightSwitch);
for(;;)
{


    printf("Light switch state %d [0 = off, 1 = on]\n", toggle_switch_is_on(&lightSwitch));

}
}
