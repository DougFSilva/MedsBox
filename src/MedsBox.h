#ifndef _MEDSBOX_H
#define _MEDSBOX_H

#include <Arduino.h>

class MedsBox {
    private: 
        int box;
        String remedy;  
        String description;
        int periodicity;
        int hour;
        int minutes;
        bool active;
        int pin;

    public:
        MedsBox(int box, int pin);
        MedsBox(String remedy, String description, int periodicity, int hour, int minutes, int box, bool active, int pin);
        int getBox();
        String getRemedy();
        String getDescription();
        int getPeriodicity();
        int getHour();
        int getMinutes();
        bool getActive();
        int getPin();
        void setBox(int id);
        void setRemedy(String remedy);
        void setDescription(String description);
        void setPeriodicity(int periodicity);
        void setHour(int hour);
        void setMinutes(int minutes);
        void setActive(bool active);
        void setPin(int pin);
        bool compare(int hour, int minutes);
        void on();
        void off();
};

#endif