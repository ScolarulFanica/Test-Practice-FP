#include "service.h"
#include <vector>
#include "domain.h"

class UI{
private:
    Service service;
public:
    UI();
    UI(Service service);
    void start();
    void menu();
    void ShowSchoolsSortedByName(vector<School> schools);
    void removeSchoolUI();
    void markVisitedSchoolsUI();
    void printException(ServiceException& n);
};

class UIException{
private:
    string message;
public:
    UIException(string message);
    string getMessage();
};