#ifndef MAIN_H
#define MAIN_H

#include <stdint.h>
#include "stm32f401xc.h"


typedef enum {
    EVENT_NONE = 0,
    EVENT_UP,
    EVENT_DOWN,
    EVENT_ENTER,
    EVENT_BACK,
    EVENT_ACTION
} event_t;

extern volatile event_t current_event;


typedef enum {
    MENU,
    OPTIONS,
    UART_OPTIONS,
    RGB_OPTIONS,
    WORK
} state_name_t;


typedef struct {
    state_name_t state;
    void (*processor)(event_t ev);
} state_t;

extern state_t states[5];
extern state_t current_state;

#endif
