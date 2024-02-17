//
// Created by root on 2022/11/13.
//


#include <Arduino.h>
#include "SPI.h"
#include "SD.h"
#include "FS.h"

#define SD_CS         42
#define SPI_MOSI      47
#define SPI_MISO      41
#define SPI_SCK       48




bool sdcard_init();
