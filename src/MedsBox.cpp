#include <MedsBox.h>
#include <Arduino.h>

MedsBox::MedsBox(String id, int address){
    this->id = id;
    this->remedy = "sem remedy";
    this->description = "sem remedy";
    this->periodicity = 0;
    this->hour = 0;
    this->minutes = 0;
    this->address = address;
    this->active = false;
    pinMode(address, OUTPUT);
}

MedsBox::MedsBox(String id, String remedy, String description, int periodicity, int hour, int minutes, int address, bool active){
    this->id = id;
    this->remedy = remedy;
    this->description = description;
    this->periodicity = periodicity;
    this->hour = hour;
    this->minutes = minutes;
    this->address = address;
    this->active = active;
    pinMode(address, OUTPUT);
}

String MedsBox::getId(){
    return this->id;
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

int MedsBox::getAddress() {
    return this->address;
}

bool MedsBox::getActive() {
    return this->active;
}

void MedsBox::setId(String id) {
    this->id = id;
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

void MedsBox::setAddress(int address) {
    this->address = address;
}

void MedsBox::setActive(bool active) {
    this->active = active;
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


