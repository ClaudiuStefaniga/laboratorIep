#include "pin.h"

Pin::Pin(int pinNumber,int pinDirection,int pinState)
{
    this -> pinNumber = pinNumber;
    this -> pinDirection =  pinDirection;
    this -> pinState = pinState;
}

int Pin::get()
{
    return pinState;
}

void Pin::set(int value)
{
    if(pinDirection == 1){
        pinState = value;
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
