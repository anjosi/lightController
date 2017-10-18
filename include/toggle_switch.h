/****************************************************************************
 *                                                                          *
 ****************************************************************************/

/**
 * @file toggle_switch.h
 * @author Antti Siirilä
 * @date 15 Oct 2017
 * @brief Header file for the toggle switch module. 
 * 
 * The module toggles its state between on and off whenever
 * a toggle input is received.
 */

#ifndef TOGGLE_SWITCH_H
#define TOGGLE_SWITCH_H
#include "types.h"


    /**
     * @brief type definition for toggle switch states.
     *
     * Possible state values are off and on
     */
       typedef enum {
            off,
            on
       } States;

    
    /**
     * @brief Toggle switch object has one memeber.
     *
     * @state defines the switch state.
     */
    typedef struct t_toggle_switch {
       States state;

    } c_toggle_switch;
   
    /**
     * @brief Init function must be called right after the object has been created.
     *
     * Once called the switch state is set to off.
     * @param *p_switch toggle switch object
     */
    void toggle_switch_init(c_toggle_switch *p_switch);
     /**
     * @brief Toggle function toggles the switch state between on and off.
     *
     * @param *p_switch toggle switch object
     */
    void toggle_switch_toggle(c_toggle_switch *p_switch);
     /**
     * @brief is on function return the switch state.
     *
     * @param *p_switch toggle switch object
     * @return true <- switch is on, false <- switch is off
     */
    bool toggle_switch_is_on(c_toggle_switch *p_switch);
#endif
