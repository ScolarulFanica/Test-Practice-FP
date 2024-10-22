#include "ui.h"
#include "domain.h"
#include <vector>
#include <iostream>

using std::cin;
using std::cout;
using std::vector;

UI::UI(){
    this->service = Service();
}

UI::UI(Service service){
    this->service = service;
}

void UI::start(){
    while (true){
        this->menu();
        int command;
        cout<<"Enter command: ";
        cin>>command;
        switch(command)
        {
            case 0:
                return;
                break;
            case 1:{
                this->ShowSchoolsSortedByName(this->service.getSchools());
                break;}
            case 2:{
                this->removeSchoolUI();
                break;}
            case 3:
            {
                this->markVisitedSchoolsUI();
                break;
            }

        }
    }
}

void UI::menu(){
    cout << "1. Show schools sorted by name\n";
    cout<< "2. Remove school\n ";
    cout<<"3. Mark visited schools\n";
    cout<<"0.Exit\n";
}
void UI::ShowSchoolsSortedByName(vector<School> schools){
    this->service.sortByName();
    for (int i = 0; i < schools.size(); i++) {
        cout << schools[i].toString() << "\n";
    }
}

void UI::removeSchoolUI(){
    string name;
    cout<<"Enter the name of the school you want to remove: ";
    cin>>name;
    School school = this->service.findByName(name);
    this->service.removeSchool(school);
}

void UI::markVisitedSchoolsUI(){
    string d;
    cout<<"Enter the date: ";
    cin>>d;
    this->service.markDate(d);
}

void UI::printException(ServiceException& n){
    cout<<n.getMessage();
}

UIException::UIException(string message){
    this->message = message;
}

string UIException::getMessage(){
    return this->message;
}