#ifndef PIN_H
#define PIN_H


class Pin
{
    private:
        int pinNumber;
        int pinDirection;
        int pinState;

    public:
        Pin(int pinNumber,int pinDirection,int pinState);
        void set(int value);
        int get();
        void change();
};

#endif // PIN_H
