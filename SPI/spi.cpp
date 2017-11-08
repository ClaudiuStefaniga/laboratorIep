#include "spi.h"

spi::spi(int order, int mode, int clock_divider, int cs, int cs_polarity){
    bcm2835_spi_setBitOrder(order);      // The default
    bcm2835_spi_setDataMode(mode);                   // The default
    bcm2835_spi_setClockDivider(clock_divider); // The default
    bcm2835_spi_chipSelect(cs);                      // The default
    bcm2835_spi_setChipSelectPolarity(cs, cs_polarity);      // the default
}

uint8_t spi::transfer(uint8_t send_data){

    uint8_t read_data = bcm2835_spi_transfer(send_data);
    return read_data;
}
