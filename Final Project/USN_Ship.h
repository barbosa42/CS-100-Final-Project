//
//  USN_Ships.h
//  Naval Forces
//
//  Created by Orobosa Ogbeide on 6/7/20.
//  Copyright © 2020 Orobosa Ogbeide. All rights reserved.
//

#ifndef USN_Ship_h
#define USN_Ship_h


#include <string>
#include <iostream>


class USN_Ship {
public:
    virtual ~USN_Ship() {}
    virtual void ShipName() = 0;
    virtual void shipHullNumber() = 0; 
    virtual void shipClassName() = 0;
    virtual void shipType() = 0;
    virtual void arament() = 0;
    virtual int shipCost() = 0;
    virtual int powerIndex() = 0;
    
    virtual void assignHomePort() = 0;
    virtual void assignAdmiral() = 0;
    virtual void accept(class Visitor &v) = 0;

};


#endif //USN_Ship_h
