#include "repository.h"
#include <assert.h>

using std::vector;

Repo::Repo() {
    // the program must have at startup 5 inputs
    this->schools = vector<School>();
    this->schools.push_back(School("School1", 1, 1, "2024.01.01", true));
    this->schools.push_back(School("School2", 2, 2, "2024.02.02", false));
    this->schools.push_back(School("School3", 3, 3, "2024.03.03", false));
    this->schools.push_back(School("School4", 4, 4, "2024.04.04", true));
    this->schools.push_back(School("School5", 5, 5, "2024.05.05", false));
  
}

vector<School> Repo::getSchools() {
    return this->schools;
}

bool Repo::removeSchool(School school) {
    /*
    * Remove the school with the given name
    * @param school - the school to remove
    * @return true if the school was removed, false otherwise
    */
    for (int i = 0; i < this->schools.size(); i++) {
        if (this->schools[i] == school) {
            this->schools.erase(this->schools.begin() + i);
            return true;
        }
    }
    return false;
}

void Repo::addSchool(School school){
    this->schools.push_back(school);
}

School Repo::findByName(string name) {
    for (int i = 0; i < this->schools.size(); i++) {
        if (this->schools[i].getName() == name) {
            return this->schools[i];
        }
    }
    throw RepoException("School not found!");
}

int Repo::getSize() {
    return this->schools.size();
}

School Repo::getSchool(int index) {
    return this->schools[index];
}

RepoException::RepoException(string message) {
    this->message = message;
}

string RepoException::getMessage() {
    return this->message;
}

//White box tests for remove
void testRemove() {
    Repo repo = Repo();
    School school = School("School4", 1, 1, "2021.01.01", true);
    repo.addSchool(school);
    assert(repo.getSize() == 6);
    assert(repo.removeSchool(school) == true);
    assert(repo.getSize() == 5);
    assert(repo.removeSchool(school) == false);
    assert(repo.getSize() == 5);
}
