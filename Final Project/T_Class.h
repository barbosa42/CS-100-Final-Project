//
//  T_Class.h
//  Naval Forces
//
//  Created by Orobosa Ogbeide on 6/7/20.
//  Copyright © 2020 Orobosa Ogbeide. All rights reserved.
//

#ifndef T_Class_h
#define T_Class_h
#include "USN_Ship.h"

#include <string>
#include <iostream>


class T_Class_Cruiser : public USN_Ship{
private:
    int shipPrice = 5;
    int PI = 6;
public:
    virtual void ShipName() {std::cout << "- USS Monterey\n";}
    virtual void shipHullNumber() {std::cout << "- CCG-61\n";}
    void shipClassName() {std::cout << "- Ticonderoga Class Cruiser\n";}
    void shipType() {std::cout << "- Cruiser";}
    void arament() {std::cout << "- 121 Cell Mk 41 VLS, 2 Phalenx CIWS, 2 Mk 45 5 Inch guns, 1 SH-60 Seahawk\n";}
    int shipCost() {return shipPrice;}
    int powerIndex() {return PI;}
    
};

#endif // T_Class_h