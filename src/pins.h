#ifndef PINS_H
#define PINS_H

#include <Arduino.h>

#define TEMP_SENSOR_PIN A2
#define ETHERNET_SHIELD_SPI_SWITCH 53
#define BUZZER_PIN 44
#define PKW_PIN 35
#define PCWU_PIN 36
#define PCO_PIN 37
#define ZTC_PIN 33
#define ZTZ_PIN 32
#define FURNACE_SWITCH_PIN A3
#define KO_FURNACE_PIN 26
#define KO_FURNACE_PIN_COPY 30
#define PKO_PIN 34
#define PFA_PIN 27
#define AKO_PIN 33 //

#define MAX_SCK_W 22
#define MAX_CS_W 24
#define MAX_SO_W 23

#define MAX_SCK_O 22
#define MAX_CS_O 25
#define MAX_SO_O 23

#define RS 13
#define RW 12
#define ENABLE 11
#define D0 14
#define D1 9
#define D2 8
#define D3 7
#define D4 6
#define D5 5
#define D6 15
#define D7 3

const uint8_t TZAddress[] = {0x28, 0xFF, 0x11, 0xB1, 0x64, 0x14, 0x02, 0xB7};
const uint8_t TKWAddress[] = {0x28, 0xFF, 0x27, 0x53, 0x6F, 0x14, 0x04, 0xFD};
const uint8_t TCOAddress[] = {0x28, 0xFF, 0x38, 0x0C, 0x01, 0x16, 0x04, 0x6C};
const uint8_t TBAddress[] = {0x28, 0xB9, 0xE9, 0xC6, 0x07, 0x00, 0x00, 0xEC};
const uint8_t TCWUAddress[] = {0x28, 0x06, 0xC0, 0x04, 0x07, 0x00, 0x00, 0xFA};
const uint8_t TPAddress[] = {0x28, 0x38, 0xE7, 0xC6, 0x07, 0x00, 0x00, 0x93};
const uint8_t TWAddress[] = {0x28, 0xFF, 0x48, 0x37, 0x64, 0x14, 0x01, 0xE3};
const uint8_t TKOAddress[] = {0x28, 0xFF, 0x48, 0x81, 0x64, 0x14, 0x01, 0x7B};

#endif
