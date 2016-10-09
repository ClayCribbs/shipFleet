//
//  Ship.hpp
//  Ship
//
//  Created by Clay Cribbs on 9/11/16.
//  Copyright © 2016 Clay Cribbs. All rights reserved.
//

#ifndef Ship_hpp
#define Ship_hpp

#include <stdio.h>
#include <string>
#include "Ship.hpp"
using namespace std;

//Same namespace
namespace ship
{
    
class Ship
{

    public:
    //These are public methods and variables
    
    //Constructors
    Ship();
    Ship(string shipName, int yearBuilt);
    //Setters
    void set_shipName(string new_shipName);
    void set_yearBuilt(int new_yearBuilt);
    //Getters
    string get_shipName() const;
    int get_yearBuilt() const;
    //Display
    void print() const;
    //Mutator
    void userInput();
    
    private:
    //These are private variables
    string name;
    int year;
    int newYearBuilt;
    string newShipName;
    
};
    
}//ship
#endif /* Ship_hpp */

