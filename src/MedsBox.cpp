#include <MedsBox.h>
#include <Arduino.h>

MedsBox::MedsBox(int box, int pin){
    this->box = box;
    this->remedy = "sem remedy";
    this->description = "sem remedy";
    this->periodicity = 0;
    this->hour = 0;
    this->minutes = 0;
    this->active = false;
    this->pin = pin;
    pinMode(pin, OUTPUT);
}

MedsBox::MedsBox(String remedy, String description, int periodicity, int hour, int minutes, int box, bool active, int pin){
    this->box = box;
    this->remedy = remedy;
    this->description = description;
    this->periodicity = periodicity;
    this->hour = hour;
    this->minutes = minutes;
    this->active = active;
    this->pin = pin;
    pinMode(pin, OUTPUT);
}

String MedsBox::getBox(){
    return this->box;
}

String MedsBox::getRemedy(){
    return this->remedy;
}

String MedsBox::getDescription(){
    return this->description;
}

int MedsBox::getPeriodicity() {
    return this->periodicity;
}

int MedsBox::getHour() {
    return this->hour;
}

int MedsBox::getMinutes() {
    return this->minutes;
}

bool MedsBox::getActive() {
    return this->active;
}

int MedsBox::getPin() {
    return this->pin;
}

void MedsBox::setBox(int box) {
    this->box = box;
}

void MedsBox::setRemedy(String remedy) {
    this->remedy = remedy;
}

void MedsBox::setDescription(String description) {
    this->description = description;
}

void MedsBox::setPeriodicity(int periodicity) {
    this->periodicity = periodicity;
}

void MedsBox::setHour(int hour) {
    this->hour = hour;
}

void MedsBox::setMinutes(int minutes) {
    this->minutes = minutes;
}

void MedsBox::setActive(bool active) {
    this->active = active;
}

void MedsBox:: setPin(int pin) {
    this->pin = pin;
    pinMode(pin, OUTPUT);
}

bool MedsBox::compare(int hour, int minutes) {
    int medicationMinutes = (this->hour*60) + this->minutes;
    int currentMinutes = (hour*60) + minutes;
    if(medicationMinutes == currentMinutes){
        return true;
    }else {
        return false;
    }
}

void MedsBox::on(){
    digitalWrite(this->address, HIGH);
}

void MedsBox::off(){
    digitalWrite(this->address, LOW);
}


