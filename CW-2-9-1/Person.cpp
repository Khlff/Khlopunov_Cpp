#include "Person.h"

Person::Person(std::string name, int age, char $ex) {
    this->name = name;
    this->$ex = $ex;
    this->age = age;
}

bool Person::compareBy$ex(Person *secondPerson) {
    if (this->$ex == 'M')
        return true;
    else if (secondPerson->$ex == 'M')
        return false;
    else
        return true;
}

bool Person::compareByAge(Person *secondPerson) {
    return this->age < secondPerson->age;
}

bool Person::compareByName(Person *secondPerson) {
    return this->name < secondPerson->name;
}