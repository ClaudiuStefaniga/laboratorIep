#ifndef SERIAL_H
#define SERIAL_H


class Serial
{
public:
    Serial();
	uint8_t transfer(uint8_t send_data);
};

#endif // SERIAL_H