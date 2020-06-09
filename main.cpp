/*
Created by Thomas Chase
Created on May 5, 2020
*/

//This program will store countries and there respective elements as an array of objects

#include <iostream>
#include "country.h"
#include <string>

using namespace std;



const int SIZE = 1000;  //Constant array size

int main()
{
    //Variables
    std::string newName, n;
    long newPop, p;
    double newArea, a;
    int winningPop = 0, winningArea = 0, winningDen = 0, filledSize = 0;

    Country countries[SIZE];    //Intialize array of objects

    while(true){
        for(int i = 0; i < SIZE; i++){  //Loop to populate array
            Country country;    //Default object
            cout << "Please enter a country or type quit to end input: ";
            cin >> n;
            if(n != "quit"){   //Looking for the flag to break out of loop or continue with populating the object
                cout << "Please enter the population for the country: ";
                cin >> p;
                cout << "Please enter the area for the country in square kilometers: ";
                cin >> a;
                newName = n;
                newPop = p;
                newArea = a;
                country.setName(newName);
                country.setPopulation(newPop);
                country.setArea(newArea);
                countries[i] = country; //assign fulling filled object to array at desired index
                filledSize++;
            }else{
                break;
            }
        }
        break;
    }

    //Loop for finding highest population
    for(int i = 1; i < filledSize; i++){
        if(countries[i].getPopulation() > countries[winningPop].getPopulation()){
            winningPop = i;
        }
    }
    //Loop for finding largest area
    for(int i = 1; i < filledSize; i++){
        if(countries[i].getArea() > countries[winningArea].getArea()){
            winningArea = i;
        }
    }
    //Loop for finding largest population desnsity
    for(int i = 1; i < filledSize; i++){
        if(countries[i].getPopDense() > countries[winningDen].getPopDense()){
            winningDen = i;
        }
    }

    cout << "Countries entered are: ";
    cout << endl;

    //Loop to print out each country and its data
    for(int i = 0; i < filledSize; i++){
        cout << "Country: " << countries[i].getName() << endl;
        cout << "Population: " << countries[i].getPopulation() << endl;
        cout << "Area: " << countries[i].getArea() << " square kilometers." << endl;
        cout << "Population Density: " << countries[i].getPopDense() << " per square kilometer." << endl;
        cout << endl;
    }
    //Printing the total entries
    cout << "Total number of countries entered: " << filledSize << endl;

    //Printing winner of biggest population
    cout << "The country with the biggest population is: " << countries[winningPop].getName() << " - Population: " << countries[winningPop].getPopulation() << endl;
    //Printing winner of largest area
    cout << "The country with the largest area is: " << countries[winningArea].getName() << " - Area: " << countries[winningArea].getArea() << " square kilometers." << endl;
    //Printing winner of largest population density
    cout << "The country with the largest population density is: " << countries[winningDen].getName() << " -Density: " << countries[winningDen].getPopDense() << " per square kilometer." << endl;

    return 0;
}





