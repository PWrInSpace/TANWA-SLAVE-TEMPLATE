#ifndef PWRINSPACE_CAN_TASK_H
#define PWRINSPACE_CAN_TASK_H

#include "freertos/FreeRTOS.h"
#include "freertos/queue.h"

void can_task(void *arg);
void can_task_init(void);
void can_task_deinit(void);

#endif //PWRINSPACE_CAN_TASK_H