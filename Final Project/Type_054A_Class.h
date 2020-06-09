//
//  Type_054A_Class.h
//  Naval Forces
//
//  Created by Orobosa Ogbeide on 6/7/20.
//  Copyright © 2020 Orobosa Ogbeide. All rights reserved.
//

#ifndef Type_054A_Class_h
#define Type_054A_Class_h
#include "PLAN_Ship.h"

#include <string>
#include <iostream>

class Type_054A_CLass_Frigate : public PLAN_Ship{
    private:
    int shipPrice = 1;
    int PI = 2;
public:
    void accept(Visitory &v);
    virtual void ShipName() {std::cout << "- PLANN Zheng He\n";}
    virtual void shipHullNumber() {std::cout << "- FFG-15\n";}
    void shipClassName() {std::cout << "- Type 054A Class Frigate\n";}
    void shipType() {std::cout << "- Destroyer\n";}
    void arament() {std::cout << "- 32 Universal Cell VLS, 1 76mm gun, 2 Type 1130 CIWS, 1 Z-9 Harbin\n";}
    int shipCost() {std::cout << "- Ship Cost:$" << shipPrice << " billion\n"; return shipPrice;}
    int powerIndex() {return PI;}
    virtual void assignHomePort() {std::cout << "- Home Port:  \n";}
    virtual void assignAdmiral() {std::cout << "- Commanding Officer:  \n";}
    
};

#endif // Type_054A_Class_h 
