#ifndef PWRINSPACE_CAN_API_H
#define PWRINSPACE_CAN_API_H

#include "freertos/FreeRTOS.h"
#include "freertos/queue.h"

#include "can_config.h"

xQueueHandle_t tx_queue;

typedef esp_err_t (*can_command_handler_t)(uint8_t *data, uint8_t length);

typedef struct {
    can_message_id_t message_id;
    can_command_handler_t handler;
} can_command_t;


esp_err_t can_init(void);
esp_err_t can_deinit(void);
esp_err_t can_register_commands(can_command_t *commands, size_t num_commands);
esp_err_t can_send_message(uint32_t id, uint8_t *data, uint8_t length);
esp_err_t can_build_message(uint32_t id, uint32_t board_id, uint8_t *data, uint8_t length);

#endif //PWRINSPACE_CAN_API_H