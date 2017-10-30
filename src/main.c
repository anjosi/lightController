

/**
 * @author      : finansi (finanjosi@gmail.com)
 * @file        : main
 * @created     : keskiviikko loka 18, 2017 23:36:26 EEST
 */

#include <stdio.h>
#include "toggle_switch.h"
#include <pthread.h>
#include <unistd.h>

int main(char argc, int argv[1])
{
    char count;
    //pthread_mutex_t count_mutex;
    //pthread_cond_t count_threshold_cv;
    c_toggle_switch lightSwitch;

    toggle_switch_init(&lightSwitch);
    for(count=0;count < 10; count++)
    {
        printf("Light switch state %d [0 = off, 1 = on]\n", toggle_switch_is_on(&lightSwitch));

     sleep(5);
    }

}

