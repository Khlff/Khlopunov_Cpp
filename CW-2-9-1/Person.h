#ifndef KHLOPUNOV_CPP_PERSON_H
#define KHLOPUNOV_CPP_PERSON_H

#include "string"
class Person {
private:
    int age;
    std::string name;
    char $ex;
public:
    Person(std::string name, int age, char $ex);
    bool compareByName(Person* secondPerson);
    bool compareByAge(Person* secondPerson);
    bool compareBy$ex(Person* secondPerson);
};


#endif //KHLOPUNOV_CPP_PERSON_H
