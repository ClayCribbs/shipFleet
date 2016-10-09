//
//  CruiseShip.cpp
//  Ship
//
//  Created by Clay Cribbs on 9/11/16.
//  Copyright © 2016 Clay Cribbs. All rights reserved.
//
#include <string>
#include <iostream>
#include "CruiseShip.hpp"
using namespace std;

namespace ship
{
    
    //Constructor with no arguments
    CruiseShip::CruiseShip() : Ship(), numPassengers(0)
    {
        ///Intentionally Left Blank
    }
    
    //Consructor with arguments
    CruiseShip::CruiseShip(string shipName, int yearBuilt, int numPassengers) : Ship(shipName,yearBuilt), numPassengers(numPassengers)
    {
        ///Intentionally Left Blank
    }
    
    //Displays ship name and number of passengers
    void CruiseShip::print() const
    {
        cout << "\nShip Name: " << get_shipName();
        cout << "\nNumber of Passengers: " << get_numPassengers() << "\n";
    }
    
    //Mutator gathers user input and uses setters
    void CruiseShip::userInput()
    {
        string newShipName;
        int newYearBuilt;
        int newNumPassengers;
        
        cout << "\nEnter Ship Name: ";
        cin >> newShipName;
        set_shipName(newShipName);
        
        cout << "\nEnter The Year The Ship Was Built: ";
        cin >> newYearBuilt;
        set_yearBuilt(newYearBuilt);
        
        cout << "\nEnter The Number of Passengers: ";
        cin >> newNumPassengers;
        set_numPassengers(newNumPassengers);
        
    }

    //Setter for numPassengers
    void CruiseShip::set_numPassengers(int new_numPassengers)
    {
        numPassengers = new_numPassengers;
    }
    
    //Getter for numPassengers
    int CruiseShip::get_numPassengers() const
    {
        return numPassengers;
    }
    
    
}
