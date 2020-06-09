#ifndef COUNTRY_H
#define COUNTRY_H
#include <cstring>


class Country
{
private:
    std::string name;
    long population;
    double area;

public:
    Country(){   //Default constructor
        name = "Unknown";
        population = 0;
        area = 0;
    }

    Country(std::string n, long p, double a){    //Constructor with perameters
        name = n;
        population = p;
        area = a;
    }

    void setPopulation(long newPop){    //set population
        population = newPop;
    }

    void setName(std::string newName){   //set name
        name = newName;
    }

    void setArea(double newArea){   //set area
        area = newArea;
    }

    inline long getPopulation(){    //returns population
        return population;
    }

    inline std::string getName(){    //returns name
        return name;
    }

    inline double getArea(){    //returns area
        return area;
    }

    inline double getPopDense(){    //returns the population density
        return population/area;
    }
};

#endif // COUNTRY_H
