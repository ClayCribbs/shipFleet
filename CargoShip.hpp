//
//  CargoShip.hpp
//  Ship
//
//  Created by Clay Cribbs on 9/12/16.
//  Copyright © 2016 Clay Cribbs. All rights reserved.
//

#ifndef CargoShip_hpp
#define CargoShip_hpp

#include <string>
#include <stdio.h>
#include "Ship.hpp"
using namespace std;

namespace ship
{
    class CargoShip : public Ship
    {
    public:
        //These methods and variables are public
        
        //Constructors
        CargoShip();
        CargoShip(string shipName, int yearBuilt, int maxCargoTons);
        
        //Setters
        void set_maxCargoTons(int new_maxCargoTons);
        //Mutator
        void userInput();
        //Getters
        int get_maxCargoTons() const;
        //Display
        void print() const;
    private:
        //These Variables are private
        int maxCargoTons;
        int newMaxCargoTons;
        string newShipName;
        int newYearBuilt;
    };
    
    
}


#endif /* CargoShip_hpp */
