#include "serial.h"
#include <bcm2835.h>
#ifndef SPI_H
#define SPI_H


class spi: public Serial
{
public:
    spi(int order, int mode, int clock_divider, int cs, int cs_polarity);
    uint8_t transfer(uint8_t send_data);
};

#endif // SPI_H
