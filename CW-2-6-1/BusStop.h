#ifndef KHLOPUNOV_CPP_BUSSTOP_H
#define KHLOPUNOV_CPP_BUSSTOP_H

#include "map"
#include "string"
#include "vector"
#include "iostream"

class BusStop {
private:
    std::vector<std::string> thisBuses;
    std::string nameOfStop;
public:
    std::string returnNameOfStop();

    std::vector<std::string> returnBuses();

    void addNewBus(const std::string &bus);

    BusStop(const std::string &bus, std::string stopName);
};

#endif //KHLOPUNOV_CPP_BUSSTOP_H
