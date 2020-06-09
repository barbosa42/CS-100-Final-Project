//
//  WH_Class.h
//  Naval Forces
//
//  Created by Orobosa Ogbeide on 6/7/20.
//  Copyright © 2020 Orobosa Ogbeide. All rights reserved.
//

#ifndef WH_Class_h
#define WH_Class_h
#include "USN_Ship.h"

#include <string>
#include <iostream>

class WH_CLass_Frigate : public USN_Ship{
private:
    int shipPrice = 2;
    int PI = 3;
public:
    virtual void ShipName() {std::cout << "- USS John Parker\n";}
    virtual void shipHullNumber() {std::cout << "- FFG-42\n";}
    void shipClassName() {std::cout << "- William Halsey Class Frigate\n";}
    void shipType() {std::cout << "- Destroyer\n";}
    void arament() {std::cout << "- 32 Cell Mk 41 VLS, 1 Phalenx CIWS, 8 Harpoon missiles, 1 57mm gun, 1 SH-60 Seahawk\n";}
    int shipCost() {return shipPrice;}
    int powerIndex() {return PI;}
    virtual void assignHomePort() {std::cout << "- Home Port:  \n";}
    virtual void assignAdmiral() {std::cout << "- Commanding Officer:  \n";}
};

#endif // WH_Class_h
