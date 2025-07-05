#ifndef PWRINSPACE_CAN_COMMANDS_H
#define PWRINSPACE_CAN_COMMANDS_H

#include "esp_err.h"

/** PLACE YOUR CAN CALLBACKS AND CAN MESSAGES HERE IN FORMAT*/
typedef enum {
    CAN_TEMPLATE_MESSAGE_ID = 0xFF,
 /*    CAN_MSG_ID_1 = ...,
 *     CAN_MSG_ID_2 = ...,
 *     CAN_MSG_ID_3 = ...,
 *     CAN_MSG_ID_4 = ...,
 *     CAN_MSG_ID_5 = ...,
 */
} can_message_id_t;

/*PLACE YOUR FUNCTIONS ACCORDING TO THE TEMPLATE AND PUT THEIR IMMPLEMENTATION IN can_commands.c FILE
* typedef esp_err_t (*can_command_handler_t)(uint8_t *data, uint8_t length);
* 
* REGISTER THEM IN can_config.c FILE
*/

esp_err_t example_command_handler(uint8_t *data, uint8_t length);

#endif //PWRINSPACE_CAN_COMMANDS_H