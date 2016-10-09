//
//  CargoShip.cpp
//  Ship
//
//  Created by Clay Cribbs on 9/12/16.
//  Copyright © 2016 Clay Cribbs. All rights reserved.
//

#include "CargoShip.hpp"
#include <string>
#include <iostream>
using namespace std;

namespace ship
{
    //Constructor with no arguments
    CargoShip::CargoShip() : Ship(), maxCargoTons(0)
    {
        ///Intentionally Left Blank
    }
    
    //Constructor with arguments
    CargoShip::CargoShip(string shipName, int yearBuilt, int maxCargoTons) : Ship(shipName,yearBuilt), maxCargoTons(maxCargoTons)
    {
        ///Intentionally Left Blank
    }
    
    //Display CargoShips attributes
    void CargoShip::print() const
    {
        cout << "\nShip Name:" << get_shipName();
        cout << "\nCargo Capacity in Tons:" << get_maxCargoTons() << "\n";
    }
    
    //Mutator gathers user input and uses setters
    void CargoShip::userInput()
    {
        string newShipName;
        int newYearBuilt;
        int newMaxCargoTons;
        
        //User input and Setters
        cout << "\nEnter Ship Name: ";
        cin >> newShipName;
        set_shipName(newShipName);
        
        cout << "\nEnter The Year The Ship Was Built: ";
        cin >> newYearBuilt;
        set_yearBuilt(newYearBuilt);
        
        cout << "\nEnter The Maximum Cargo Capacity (Tons):";
        cin >> newMaxCargoTons;
        set_maxCargoTons(newMaxCargoTons);
        
    }
    
    //Setter for maxCargoTons
    void CargoShip::set_maxCargoTons(int new_maxCargoTons)
    {
        maxCargoTons = new_maxCargoTons;
    }
    //Getter for maxCargoTons
    int CargoShip::get_maxCargoTons() const
    {
        return maxCargoTons;
    }
    
    
}
