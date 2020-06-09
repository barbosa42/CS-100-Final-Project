//
//  GF_Class.h
//  Naval Forces
//
//  Created by Orobosa Ogbeide on 6/7/20.
//  Copyright © 2020 Orobosa Ogbeide. All rights reserved.
//

#ifndef GF_Class_h
#define GF_Class_h
#include "USN_Ship.h"

#include <string>
#include <iostream>


class GF_Class_Aircraft_Carrier : public USN_Ship{
private:
    int shipPrice = 8;
    int PI = 10;
public:
    void accept(Visitor &v); 
    virtual void ShipName() {std::cout << "- USS Gerald R. Ford\n";}
    virtual void shipHullNumber() {std::cout << "- CVN-75\n";}
    void shipClassName() {std::cout << "- Gerald Ford Class Aircraft Carrier\n";}
    void shipType() {std::cout << "- Aircraft Carrier\n";}
    void arament() {std::cout << "- 40 F-35 Lightning's, 10 E-8 Growler Hornet's, 8 SH-60 Seahawk's\n";}
    int shipCost() {return shipPrice;}
    int powerIndex() {return PI;}
    virtual void assignHomePort() {std::cout << "- Home Port:  \n";}
    virtual void assignAdmiral() {std::cout << "- Commanding Officer:  \n";}

};

#endif // GF_Class_h
