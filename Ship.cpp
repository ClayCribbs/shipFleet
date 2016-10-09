//
//  Ship.cpp
//  Ship
//
//  Created by Clay Cribbs on 9/11/16.
//  Copyright © 2016 Clay Cribbs. All rights reserved.
//
#include <string>
#include <cstdlib>
#include <iostream>
#include "Ship.hpp"

namespace ship
{

///Constructor method with no args
Ship::Ship() : name("No Name Yet"), year(0)
    {
        //Intentionally left blank
    }
    
///Constructor with args
Ship::Ship(string shipName,int yearBuilt): name(shipName), year(yearBuilt)
    {
        //Empty
    }
///Setter for shipName
void Ship::set_shipName(string new_shipName)
    {
       name = new_shipName;
    }
///Setter for yearBuilt
void Ship::set_yearBuilt(int new_yearBuilt)
    {
        year = new_yearBuilt;
    }
///Getter for shipName
string Ship::get_shipName() const
    {
        return name;
    }
///Getter for yearBuilt
int Ship::get_yearBuilt() const
    {
        return year;
    }
///Mutator method gets user input for setters.
void Ship::userInput()
    {
        string newShipName;
        int newYearBuilt;
        cout << "\nEnter Ship Name: ";
        cin >> newShipName;
        set_shipName(newShipName);
        cout << "\nEnter The Year The Ship Was Built: ";
        cin >> newYearBuilt;
        set_yearBuilt(newYearBuilt);
        
    }

//Displays ship name and year built to the console
void Ship::print() const
    {
    cout << "\nShip Name: " << get_shipName();
    cout << "\nYear Built: " << get_yearBuilt() << "\n";
}

}//ship
