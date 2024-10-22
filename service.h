#pragma once
#include "repository.h"

#include <vector>
#include <iostream>

class Service{
private:
    Repo repo;
public:
    Service();
    Service(Repo repo);
    vector<School> getSchools();
    bool removeSchool(School school);
    School findByName(string name);
    int getSize();
    void addSchool();
    School getSchool(int index);
    void sortByName();
    //given a date(yyyy.mm.dd) mark all schools having the planned date of visit before d as visited
    //and show only the schools that must be visited after that date
    void markDate(string d);
};

class ServiceException{
private:
    string message;
public:
    ServiceException(string message);
    string getMessage();
};
