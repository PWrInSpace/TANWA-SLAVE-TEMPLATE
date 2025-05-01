#include "freeRTOS/FreeRTOS.h"
#include "freeRTOS/task.h"

#include "board_config.h"
#include "led_driver.h"
#include "setup_task.h"

#define TAG "APP"

void app_main(void) {
    
    // CONFIGURE THE MESSAGE

    ESP_LOGI(TAG, "%s TANWA board starting", config.board_name);
    
    setup_task_init();

    while(1) {
        led_toggle(&(config.status_led));
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}