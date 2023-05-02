#ifndef _MEDSBOX_H
#define _MEDSBOX_H

#include <Arduino.h>

class MedsBox {
    private: 
        String id;
        String remedy;  
        String description;
        int periodicity;
        int hour;
        int minutes;
        int address;
        bool active;

    public:
        MedsBox(String id, int address);
        MedsBox(String id, String remedy, String description, int periodicity, int hour, int minutes, int address, bool active);
        String getId();
        String getRemedy();
        String getDescription();
        int getPeriodicity();
        int getHour();
        int getMinutes();
        int getAddress();
        bool getActive();
        void setId(String id);
        void setRemedy(String remedy);
        void setDescription(String description);
        void setPeriodicity(int periodicity);
        void setHour(int hour);
        void setMinutes(int minutes);
        void setAddress(int address);
        void setActive(bool active);
        bool compare(int hour, int minutes);
        void on();
        void off();
};

#endif