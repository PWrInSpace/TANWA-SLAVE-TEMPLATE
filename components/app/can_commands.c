/** CAN Commands
 * This file contains the implementation of CAN commands for the ESP32.
 * It includes functions to parse and handle CAN messages.
 *
 * Author: Szymon Rzewuski
 * Date: 2025-04-21
 */

#include "esp_log.h"

#include "can_commands.h"

void parse_twai_message(twai_message_t *message) {
    // Parse the message here
    ESP_LOGI(TAG, "Received message: ID: 0x%03X, Data: ", message->identifier);
    for (int i = 0; i < message->data_length_code; i++) {
        ESP_LOGI(TAG, "0x%02X ", message->data[i]);
    }
    ESP_LOGI(TAG, "\n");
}