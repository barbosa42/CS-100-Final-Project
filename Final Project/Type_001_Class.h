//
//  Type_001_Class.h
//  Naval Forces
//
//  Created by Orobosa Ogbeide on 6/7/20.
//  Copyright © 2020 Orobosa Ogbeide. All rights reserved.
//

#ifndef Type_001_Class_h
#define Type_001_Class_h
#include "PLAN_Ship.h"

#include <string>
#include <iostream>


class Type_001_Class_Aircraft_Carrier : public PLAN_Ship{
    private:
    int shipPrice = 8;
    int PI = 8;
public:
    virtual void ShipName() {std::cout << "- PLANN Hong Kong\n";}
    virtual void shipHullNumber() {std::cout << "- CV-001\n";}
    void shipClassName() {std::cout << "- Type 001 Class Aircraft Carrier\n";}
    void shipType() {std::cout << "- Aircraft Carrier\n";}
    void arament() {std::cout << "- 36 J-15 Shenyang's, 8 Z-18 Changhe's, & 4 Z-9 Harbin's\n";}
    int shipCost() {return shipPrice;}
    int powerIndex() {return PI;}
    
};
#endif // Type_001_Class_h 
