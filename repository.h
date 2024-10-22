#pragma once
#include "domain.h"

#include <vector>
#include <iostream>

using std::vector;

class Repo{
private:
    vector<School> schools;
public:
    Repo();
    vector<School> getSchools();
    void addSchool(School school);
    bool removeSchool(School school);
    School findByName(string name);
    int getSize();
    School getSchool(int index);
};

class RepoException{
private:
    string message;
public:
    RepoException(string message);
    string getMessage();
};
