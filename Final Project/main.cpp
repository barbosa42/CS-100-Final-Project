//
//  main.cpp
//  Naval Forces
//
//  Created by Orobosa Ogbeide on 6/7/20.
//  Copyright © 2020 Orobosa Ogbeide. All rights reserved.
//

// C++ program to demonstrate factory method design pattern

#include <iostream>
#include <string>
#include "USN_Fleet_Factory.h"
#include "PLAN_Fleet_Factory.h"



int main()
{
    USN_Fleet_Factory* makeNewShip;
    USN_Ship *make;
    
    makeNewShip = new USN_Ship_Factory;

    
    std::cout << "USN Ships\n";
    std::cout << "-------------------------------------------\n";
    make = makeNewShip->CreateAircraftCarrier("Aircraft Carrier");
    make-> ShipName();
    make-> shipHullNumber();
    make-> shipClassName();
    make-> shipType();
    make-> arament();
    std::cout << "-------------------------------------------\n";
    make = makeNewShip->CreateCruiser("Cruiser");
    make-> ShipName();
    make-> shipHullNumber();
    make-> shipClassName();
    make-> shipType();
    make-> arament();
    std::cout << "-------------------------------------------\n";
    make = makeNewShip->CreateDestroyer("Destroyer");
    make-> ShipName();
    make-> shipHullNumber();
    make-> shipClassName();
    make-> shipType();
    make-> arament();
    std::cout << "-------------------------------------------\n";
    make = makeNewShip->CreateFrigate("Frigate");
    make-> ShipName();
    make-> shipHullNumber();
    make-> shipClassName();
    make-> shipType();
    make-> arament();
    std::cout << "-------------------------------------------\n";
    
    
    PLAN_Fleet_Factory* makeNewVessel;
    PLAN_Ship *construct;
    
    makeNewVessel = new PLAN_Ship_Factory;
    
    std::cout << "\n\nPLAN Vessels\n";
    std::cout << "-------------------------------------------\n";
    construct = makeNewVessel->CreateAircraftCarrier("Aircraft Carrier");
    construct-> ShipName();
    construct-> shipHullNumber();
    construct-> shipClassName();
    construct-> shipType();
    construct-> arament();
    std::cout << "-------------------------------------------\n";
    construct = makeNewVessel->CreateCruiser("Cruiser");
    construct-> ShipName();
    construct-> shipHullNumber();
    construct-> shipClassName();
    construct-> shipType();
    construct-> arament();
    std::cout << "-------------------------------------------\n";
    construct = makeNewVessel->CreateDestroyer("Destroyer");
    construct-> ShipName();
    construct-> shipHullNumber();
    construct-> shipClassName();
    construct-> shipType();
    construct-> arament();
    std::cout << "-------------------------------------------\n";
    construct = makeNewVessel->CreateFrigate("Frigate");
    construct-> ShipName();
    construct-> shipHullNumber();
    construct-> shipClassName();
    construct-> shipType();
    construct-> arament();
    std::cout << "-------------------------------------------\n";
    
    
    return 0;
    
}
