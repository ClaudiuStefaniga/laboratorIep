#include "pin.h"


Pin::Pin(int pinNumber,int pinDirection,int pinState)
{
    this -> pinNumber = pinNumber;
    this -> pinDirection =  pinDirection;
    this -> pinState = pinState; // pull-up state
}

int Pin::get()
{
    //return pinState;
    return bcm2835_gpio_lev(pinNumber);	
}

void Pin::set(int value)
{
    if(pinDirection == 1){ // if output
        if(value == 0)
            bcm2835_gpio_clr(pinNumber);	// set pin to LOW
        else    
            bcm2835_gpio_set(pinNumber);	 // set pin to HIGH
    }else{

    }
}

void Pin::change(){
    if(pinDirection == 1){
        pinDirection = 0;
    }else{
        pinDirection = 1;
    }
}
