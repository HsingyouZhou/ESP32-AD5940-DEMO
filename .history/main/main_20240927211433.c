#include "ad5940.h"
#include "AD5940Main.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <string.h>

#include "string.h"

// freeRTOS related includes
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

// driver related includes
#include "driver/uart.h"
#include "driver/spi_master.h"
#include "driver/gpio.h"
#include "esp_timer.h"


void app_main() 
{
  AD5940_Main();
}

