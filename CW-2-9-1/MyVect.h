#ifndef KHLOPUNOV_CPP_MYVECT_H
#define KHLOPUNOV_CPP_MYVECT_H

#include "vector"
#include <algorithm>
#include "Person.h"

template <class T>
class MyVect {
private:
    std::vector<T> vector;
public:
    MyVect() {
        vector = std::vector<T>();
    }

    void push_back(Person person) {
        vector.push_back(person);
    }

    void reverse() {
        std::reverse(vector.begin(), vector.end());
    }

    void sort(bool(*comp)(T, T)) {
        std::sort(this->vect.begin(), this->vect.end(), comp);
    }
};


#endif //KHLOPUNOV_CPP_MYVECT_H
