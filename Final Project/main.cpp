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
#include "USN_Decorator.h"
#include "PLAN_Decorator.h"

int main()
{

    
    USN_Fleet_Factory* makeNewShip;
    USN_Ship *make;
    
    makeNewShip = new USN_Ship_Factory;

    
    std::cout << "[USN] 7th Fleet\n";
    
    USN_Ship* details = new GF_Decorator(new USN_Decorator(new GF_Class_Aircraft_Carrier()));
    details->assignHomePort();
    details->assignAdmiral();

    
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
    
    std::cout << "\n\n[PLAN] 5th Fleet\n";
    
    PLAN_Ship* PLAN_details = new Type_001_Decorator(new PLAN_Decorator(new Type_001_Class_Aircraft_Carrier()));
    PLAN_details->assignHomePort();
    PLAN_details->assignAdmiral();

    
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
