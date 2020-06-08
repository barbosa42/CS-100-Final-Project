//
//  PLAN_Fleet_Factory.h
//  Naval Forces
//
//  Created by Orobosa Ogbeide on 6/7/20.
//  Copyright © 2020 Orobosa Ogbeide. All rights reserved.
//

#ifndef PLAN_Fleet_Factory_h
#define PLAN_Fleet_Factory_h
#include <iostream>
#include <string>
#include "PLAN_Ship.h"
#include "Type_001_Class.h"
#include "Type_055_Class.h"
#include "Type_052D_Class.h"
#include "Type_054A_Class.h"


class PLAN_Fleet_Factory {
public:
    PLAN_Fleet_Factory() {}
    virtual PLAN_Ship* CreateAircraftCarrier(std::string input) = 0;
    virtual PLAN_Ship* CreateCruiser(std::string input) = 0;
    virtual PLAN_Ship* CreateDestroyer(std::string input) = 0;
    virtual PLAN_Ship* CreateFrigate(std::string input) = 0;
    
};

class PLAN_Ship_Factory : public PLAN_Fleet_Factory
{
public:
    PLAN_Ship* CreateAircraftCarrier(std::string input)
    {
        if(input == "Aircraft Carrier")
        {
            return new Type_001_Class_Aircraft_Carrier();
        }
        return NULL;
    }
    PLAN_Ship* CreateCruiser(std::string input)
    {
        if(input == "Cruiser")
        {
            return new Type_055_Class_Cruiser();
        }
        return NULL;
    }

    PLAN_Ship* CreateDestroyer(std::string input)
    {
        if(input == "Destroyer")
        {
            return new Type_052D_Class_Destroyer();
        }
        return NULL;
    }
    PLAN_Ship* CreateFrigate(std::string input)
    {
        if(input == "Frigate")
        {
            return new Type_054A_CLass_Frigate();
        }
        return NULL;
    }
};
/*
class PLANN_HK : public PLAN_Fleet_Factory
{
public:
    PLAN_Ship* CreateAircraftCarrier()
    {
        return new Type_001_Class_Aircraft_Carrier;
        
    }
};

class PLANN_S : public PLAN_Fleet_Factory
{
public:
    PLAN_Ship* CreateCruiser()
    {
        return new Type_055_Class_Cruiser;
        
    }
};

class PLANN_B : public PLAN_Fleet_Factory
{
public:
    PLAN_Ship* CreateDestroyer()
    {
        return new Type_052D_Class_Destroyer;
        
    }
};

class PLANN_ZH : public PLAN_Fleet_Factory
{
public:
    PLAN_Ship* CreateFrigate()
    {
        return new Type_054A_CLass_Frigate;
        
    }
};
*/
#endif // PLAN_Fleet_Factory_h
