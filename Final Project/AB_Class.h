//
//  AB_Class.h
//  Naval Forces
//
//  Created by Orobosa Ogbeide on 6/7/20.
//  Copyright © 2020 Orobosa Ogbeide. All rights reserved.
//

#ifndef AB_Class_h
#define AB_Class_h
#include "USN_Ship.h"

#include <string>
#include <iostream>


class AB_Class_Destroyer : public USN_Ship{
private:
    int shipPrice = 3;
    int PI = 7;
public:
    void accept(Visitor &v); 
    virtual void ShipName() {std::cout << "- USS Mason\n";}
    virtual void shipHullNumber() {std::cout << "- DDG-87\n";}
    void shipClassName() {std::cout << "- Arleigh Burke Class Destroyer\n";}
    void shipType() {std::cout << "- Destroyer\n";}
    void arament() {std::cout << "- 96 Cell Mk 41 VLS, 1 Phalenx CIWS, 1 SEARAM, 1 Mk 45 5 Inch gun, 1 SH-60 Seahawk\n";}
    int shipCost() {return shipPrice;}
    int powerIndex() {return PI;}
    virtual void assignHomePort() {std::cout << "- Home Port:  \n";}
    virtual void assignAdmiral() {std::cout << "- Commanding Officer:  \n";}
    
};


#endif // AB_Class_h 
