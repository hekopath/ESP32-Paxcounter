// clang-format off
// upload_speed 921600
// board esp32dev

#ifndef _TTGOTHIGROW_H
#define _TTGOTHIGROW_H

#include <stdint.h>

/*  Hardware related definitions for TTGO T-Higrow (v1.1) with Lilygo T-Higrow Lora Shield (20191223)
// ATTENTION: check your board version!
// 
*/

#define HAS_LORA         1 // comment out if device shall not send data via LoRa
#define CFG_sx1276_radio 1 // HPD13A LoRa SoC

// enable only if you want to store a local paxcount table on the device
//#define HAS_SDCARD  2      // // this board has a SDMMC card-reader/writer

//#define HAS_DISPLAY 1
#define BAT_MEASURE_ADC ADC1_GPIO33_CHANNEL // battery probe GPIO pin -> ADC1_CHANNEL_7
#define BAT_VOLTAGE_DIVIDER 2 // voltage divider 100k/100k on board
#define HAS_BUTTON GPIO_NUM_35 // on board button
#define HAS_LED NOT_A_PIN

#define EXT_POWER_SW 4 // switches battery power, Vext control 0 = on / 1 = off
#define EXT_POWER_ON    1
#define EXT_POWER_OFF   1

// up to three user defined sensors (if connected)
//#define HAS_SENSOR_1 16 // comment out if device has user defined sensor #1 DHT12
//#define HAS_SENSOR_2 32 // comment out if device has user defined sensor #2 SoilMoisture
//#define HAS_SENSOR_3 35 // comment out if device has user defined sensor #3 Salt

// Pins for I2C interface of OLED Display
//#define MY_DISPLAY_SDA (25)
//#define MY_DISPLAY_SCL (26)
//#define MY_DISPLAY_RST NOT_A_PIN

// Pins for LORA chip SPI interface, reset line and interrupt lines
#define LORA_SCK  (5) //check
#define LORA_CS   (18) //check
#define LORA_MISO (19) //check
#define LORA_MOSI (27) //check
#define LORA_RST  (23) //check
#define LORA_IRQ  (14) //check
#define LORA_IO1  (13) //check?
#define LORA_IO2  (15) //check?

#endif
