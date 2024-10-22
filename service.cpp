#include "service.h"
#include <vector>

Service::Service() {
    this->repo = Repo();
}

Service::Service(Repo repo) {
    this->repo = repo;
}

vector<School> Service::getSchools() {
    return this->repo.getSchools();
}

bool Service::removeSchool(School school) {
    return this->repo.removeSchool(school);
}

School Service::findByName(string name) {
    return this->repo.findByName(name);
}

int Service::getSize() {
    return this->repo.getSize();
}

School Service::getSchool(int index) {
    return this->repo.getSchool(index);
}

void Service::sortByName() {
    vector<School> schools = this->getSchools();
    for (int i = 0; i < schools.size(); i++) {
        for (int j = i + 1; j < schools.size(); j++) {
            if (schools[i].getName() > schools[j].getName()) {
                School aux = schools[i];
                schools[i] = schools[j];
                schools[j] = aux;
            }
        }
    }
    this->repo = Repo();
    for (int i = 0; i < schools.size(); i++) {
        this->repo.addSchool(schools[i]);
    }
}

void Service::markDate(string d) {
    /*
     Given a date(yyyy.mm.dd) mark all schools having the planned date of visit before d as visited
     and show only the schools that must be visited after that date
     @param d - the date
     @return - all the schools that must be visited after that date
    */
    vector<School> schools = this->getSchools();
    for (int i = 0; i < schools.size(); i++) {
        if (schools[i].getDateofVisit() < d) {
            schools[i].setValue(true);
        }
    }
    this->repo = Repo();
    for (int i = 0; i < schools.size(); i++) {
        this->repo.addSchool(schools[i]);
    }
}

ServiceException::ServiceException(string message) {
    this->message = message;
}

string ServiceException::getMessage() {
    return this->message;
}

// void Service::addSchool(str){

// }