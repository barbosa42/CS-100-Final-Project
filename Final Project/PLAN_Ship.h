//
//  PLAN_Ship.h
//  Naval Forces
//
//  Created by Orobosa Ogbeide on 6/7/20.
//  Copyright © 2020 Orobosa Ogbeide. All rights reserved.
//

#ifndef PLAN_Ship_h
#define PLAN_Ship_h

#include <string>
#include <iostream>


class PLAN_Ship {
public:
    virtual ~PLAN_Ship() {}
    virtual void ShipName() = 0;
    virtual void shipHullNumber() = 0; 
    virtual void shipClassName() = 0;
    virtual void shipType() = 0;
    virtual void arament() = 0;
    virtual int shipCost() = 0;
    virtual int powerIndex() = 0;
    
    virtual void assignHomePort() = 0;
    virtual void assignAdmiral() = 0;
    virtual void accept(class Visitory &v) = 0;
};

#endif // PLAN_Ship_h
