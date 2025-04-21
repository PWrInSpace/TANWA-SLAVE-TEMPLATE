#include "freeRTOS/FreeRTOS.h"
#include "freeRTOS/task.h"

#include "config.h"
#include "led_driver.h"

#define TAG "APP"

void app_main(void) {
    
    // CONFIGURE THE MESSAGE

    ESP_LOGI(TAG, "%s TANWA board starting", config.board_name);
    
    run_app_init();

    while(1) {
        led_toggle(&(config.status_led));
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}