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

#include "USN_Visitor.h"
#include "PLAN_Visitor.h"


int main()
{
    int choice;
    std::cout << "-------------------------------------------\n";
    std::cout << "Welcome to Naval Power! We are currently in production so the only aspect right now is our view fleets feature.\n";
    std::cout
    << " 1 - [USN] United States Navy\n"
    << " 2 - [PLAN] Peoples Liberation Army Navy\n";
    std::cout << "-------------------------------------------\n";
    std::cout << " Enter your choice below: ";
    std::cin >> choice;
    if (choice == 1) {
    USN_Ship *ships[] =
     {
       new GF_Class_Aircraft_Carrier(), new T_Class_Cruiser(), new AB_Class_Destroyer(), new WH_Class_Frigate()
     };
    USN_Acitivity_Visitor active;
    
    USN_Fleet_Factory* makeNewShip;
    USN_Ship *make;
    
    makeNewShip = new USN_Ship_Factory;

    std::cout << "-------------------------------------------\n";
    std::cout << "[USN] 7th Fleet\n";
    
    USN_Ship* details = new GF_Decorator(new USN_Decorator(new GF_Class_Aircraft_Carrier()));
    details->assignHomePort();
    details->assignAdmiral();
     
    
    std::cout << "-------------------------------------------\n";
    make = makeNewShip->CreateAircraftCarrier("Aircraft Carrier");
    ships[0]->accept(active);
    make-> ShipName();
    make-> shipHullNumber();
    make-> shipClassName();
    make-> shipType();
    make-> arament();
    std::cout << "-------------------------------------------\n";
    make = makeNewShip->CreateCruiser("Cruiser");
    ships[1]->accept(active);
    make-> ShipName();
    make-> shipHullNumber();
    make-> shipClassName();
    make-> shipType();
    make-> arament();
    std::cout << "-------------------------------------------\n";
    make = makeNewShip->CreateDestroyer("Destroyer");
    ships[2]->accept(active);
    make-> ShipName();
    make-> shipHullNumber();
    make-> shipClassName();
    make-> shipType();
    make-> arament();
    std::cout << "-------------------------------------------\n";
    make = makeNewShip->CreateFrigate("Frigate");
    ships[3]->accept(active);
    make-> ShipName();
    make-> shipHullNumber();
    make-> shipClassName();
    make-> shipType();
    make-> arament();
    std::cout << "-------------------------------------------\n";
    }
    if(choice == 2) {
    PLAN_Ship *vessels[] =
     {
         new Type_001_Class_Aircraft_Carrier(), new Type_055_Class_Cruiser(), new Type_052D_Class_Destroyer(), new Type_054A_CLass_Frigate()
     };
    PLAN_Acitivity_Visitor activity;
    
    PLAN_Fleet_Factory* makeNewVessel;
    PLAN_Ship *construct;
    
    makeNewVessel = new PLAN_Ship_Factory;
    std::cout << "-------------------------------------------\n";
    std::cout << "\n\n[PLAN] 5th Fleet\n";
    
    PLAN_Ship* PLAN_details = new Type_001_Decorator(new PLAN_Decorator(new Type_001_Class_Aircraft_Carrier()));
    PLAN_details->assignHomePort();
    PLAN_details->assignAdmiral();
     
    
    std::cout << "-------------------------------------------\n";
    construct = makeNewVessel->CreateAircraftCarrier("Aircraft Carrier");
    vessels[0]->accept(activity);
    construct-> ShipName();
    construct-> shipHullNumber();
    construct-> shipClassName();
    construct-> shipType();
    construct-> arament();
    std::cout << "-------------------------------------------\n";
    construct = makeNewVessel->CreateCruiser("Cruiser");
    vessels[1]->accept(activity);
    construct-> ShipName();
    construct-> shipHullNumber();
    construct-> shipClassName();
    construct-> shipType();
    construct-> arament();
    std::cout << "-------------------------------------------\n";
    construct = makeNewVessel->CreateDestroyer("Destroyer");
    vessels[2]->accept(activity);
    construct-> ShipName();
    construct-> shipHullNumber();
    construct-> shipClassName();
    construct-> shipType();
    construct-> arament();
    std::cout << "-------------------------------------------\n";
    construct = makeNewVessel->CreateFrigate("Frigate");
    vessels[3]->accept(activity);
    construct-> ShipName();
    construct-> shipHullNumber();
    construct-> shipClassName();
    construct-> shipType();
    construct-> arament();
    std::cout << "-------------------------------------------\n";
    }
    
    return 0;
    
}
