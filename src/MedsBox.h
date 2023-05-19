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
        int output;
        int microSwitch;
        bool selected;

    public:
        MedsBox(int box, int output, int microSwitch);
        MedsBox(String remedy, String description, int periodicity, int hour, int minutes, int box, bool active, int output, int microSwitch, bool selected);
        int getBox();
        String getRemedy();
        String getDescription();
        int getPeriodicity();
        int getHour();
        int getMinutes();
        bool getActive();
        int getOutput();
        int getMicroSwitch();
        bool getSelected();
        void setBox(int id);
        void setRemedy(String remedy);
        void setDescription(String description);
        void setPeriodicity(int periodicity);
        void setHour(int hour);
        void setMinutes(int minutes);
        void setActive(bool active);
        void setOutput(int pin);
        void setMicroSwitch(int microSwitch);
        void setSelected(bool selected);
        bool compare(int hour, int minutes);
        void on();
        void off();
};

#endif