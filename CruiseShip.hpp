//
//  CruiseShip.hpp
//  Ship
//
//  Created by Clay Cribbs on 9/11/16.
//  Copyright © 2016 Clay Cribbs. All rights reserved.
//

#ifndef CruiseShip_hpp
#define CruiseShip_hpp
#include <string>
#include <stdio.h>
#include "Ship.hpp"
using namespace std;

namespace ship
{
    class CruiseShip : public Ship
    {
    public:
        //These methods and variables are public
        
        //Constuctors
        CruiseShip();
        CruiseShip(string shipName, int yearBuilt, int numPassengers);
        //Setters
        void set_numPassengers(int new_numPassengers);
        //Mutator
        void userInput();
        //Getters
        int get_numPassengers() const;
        //Display
        void print() const;
    private:
        //These variables are private
        int numPassengers;
        int newNumPassengers;
        string newShipName;
        int newYearBuilt;

    };
    
    
}




#endif /* CruiseShip_hpp */
