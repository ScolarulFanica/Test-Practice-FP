#pragma once
#include "string"

using std::string; 

class School{
private:
    string name;
    int longitude;
    int latitude;
    string dateofvisit;
    bool value;//if the school is visited or not
public:
    School();
    School(string name, int longitude, int latitude, string dateofvisit, bool value);
    string getName();
    int getLongitude();
    int getLatitude();
    string getDateofVisit();
    bool getValue();
    void setName(string name);
    void setLongitude(int longitude);
    void setLatitude(int latitude);
    void setDateofVisit(string dateofvisit);
    void setValue(bool value);
    string toString();
    bool operator==(const School& s);
    bool operator!=(const School& s);
};