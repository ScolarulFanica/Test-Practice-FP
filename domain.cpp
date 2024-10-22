#include "domain.h"

using std::to_string;

School::School() {
    this->name = "";
    this->longitude = 0;
    this->latitude = 0;
    this->dateofvisit = "";
    this->value = false;
}

School::School(string name, int longitude, int latitude, string dateofvisit, bool value) {
    this->name = name;
    this->longitude = longitude;
    this->latitude = latitude;
    this->dateofvisit = dateofvisit;
    this->value = value;
}

string School::getName() {
    return this->name;
}

int School::getLongitude() {
    return this->longitude;
}

int School::getLatitude() {
    return this->latitude;
}

string School::getDateofVisit() {
    return this->dateofvisit;
}

bool School::getValue() {
    return this->value;
}

void School::setName(string name) {
    this->name = name;
}

void School::setLongitude(int longitude) {
    this->longitude = longitude;
}

void School::setLatitude(int latitude) {
    this->latitude = latitude;
}

void School::setDateofVisit(string dateofvisit) {
    this->dateofvisit = dateofvisit;
}

void School::setValue(bool value) {
    this->value = value;
}

string School::toString() {
    return this->name + " " + to_string(this->longitude) + " " + to_string(this->latitude) + " " + this->dateofvisit + " " + std::to_string(this->value);
}

bool School::operator==(const School& s) {
    return this->name == s.name && this->longitude == s.longitude && this->latitude == s.latitude && this->dateofvisit == s.dateofvisit && this->value == s.value;
}

bool School::operator!=(const School& s) {
    return this->name != s.name || this->longitude != s.longitude || this->latitude != s.latitude || this->dateofvisit != s.dateofvisit || this->value != s.value;
}