//
//  Type_055_Class.h
//  Naval Forces
//
//  Created by Orobosa Ogbeide on 6/7/20.
//  Copyright © 2020 Orobosa Ogbeide. All rights reserved.
//

#ifndef Type_055_Class_h
#define Type_055_Class_h
#include "PLAN_Ship.h"

#include <string>
#include <iostream>


class Type_055_Class_Cruiser : public PLAN_Ship{
private:
    int shipPrice = 4;
    int PI = 8;
public:
    void accept(Visitory &v);
    virtual void ShipName() {std::cout << "- PLANN Shanghai\n";}
    virtual void shipHullNumber() {std::cout << "- CCG-60\n";}
    void shipClassName() {std::cout << "- ype 055 Class Cruisers\n";}
    void shipType() {std::cout << "- Cruiser\n";}
    void arament() {std::cout << "- 112 Universal Cell VLS, 1 130mm gun, 1 HP CIWS, 1 HHQ SAM, 1 Z-9 Harbin\n";}
    int shipCost() {std::cout << "- Ship Cost:$" << shipPrice << " billion\n"; return shipPrice;}
    int powerIndex() {return PI;}
    virtual void assignHomePort() {std::cout << "- Home Port:  \n";}
    virtual void assignAdmiral() {std::cout << "- Commanding Officer:  \n";}
    
};

#endif // Type_055_Class_h 
