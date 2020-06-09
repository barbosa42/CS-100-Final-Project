//
//  Type_052D_Class.h
//  Naval Forces
//
//  Created by Orobosa Ogbeide on 6/7/20.
//  Copyright © 2020 Orobosa Ogbeide. All rights reserved.
//

#ifndef Type_052D_Class_h
#define Type_052D_Class_h
#include "PLAN_Ship.h"

#include <string>
#include <iostream>


class Type_052D_Class_Destroyer : public PLAN_Ship{
private:
    int shipPrice = 3;
    int PI = 5;
public:
    virtual void ShipName() {std::cout << "- PLANN Beijing\n";}
    virtual void shipHullNumber() {std::cout << "- DDG-65\n";}
    void shipClassName() {std::cout << "- Type 052D Class Destroyer\n";}
    void shipType() {std::cout << "- Destroyer\n";}
    void arament() {std::cout << "- 64 Universal Cell VLS, 1 130mm gun, 1 Type 1130 CIWS, 1 HHQ SAM, 1 Z-9 Harbin\n";}
    int shipCost() {return shipPrice;}
    int powerIndex() {return PI;}
    virtual void assignHomePort() {std::cout << "- Home Port:  \n";}
    virtual void assignAdmiral() {std::cout << "- Commanding Officer:  \n";}
    
};

#endif // Type_052D_Class_h 
