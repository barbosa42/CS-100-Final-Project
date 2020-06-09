//
//  USN_Fleet_Factory.h
//  Naval Forces
//
//  Created by Orobosa Ogbeide on 6/7/20.
//  Copyright © 2020 Orobosa Ogbeide. All rights reserved.
//

#ifndef USN_Fleet_Factory_h
#define USN_Fleet_Factory_h
#include <iostream>
#include <string>
#include "USN_Ship.h"
#include "GF_Class.h"
#include "T_Class.h"
#include "AB_Class.h"
#include "WH_Class.h"

class USN_Fleet_Factory {
public:
    USN_Fleet_Factory() {};
    virtual USN_Ship* CreateAircraftCarrier(std::string input) = 0;
    virtual USN_Ship* CreateCruiser(std::string input) = 0;
    virtual USN_Ship* CreateDestroyer(std::string input) = 0;
    virtual USN_Ship* CreateFrigate(std::string input) = 0;
    
};

class USN_Ship_Factory : public USN_Fleet_Factory
{
public:
    USN_Ship* CreateAircraftCarrier(std::string input)
    {
        if(input == "Aircraft Carrier")
        {
            return new GF_Class_Aircraft_Carrier();
        }
        return NULL;
    }
    USN_Ship* CreateCruiser(std::string input)
    {
        if(input == "Cruiser")
        {
            return new T_Class_Cruiser();
        }
        return NULL;
    }

    USN_Ship* CreateDestroyer(std::string input)
    {
        if(input == "Destroyer")
        {
            return new AB_Class_Destroyer();
        }
        return NULL;
    }
    USN_Ship* CreateFrigate(std::string input)
    {
        if(input == "Frigate")
        {
            return new WH_CLass_Frigate();
        }
        return NULL;
    }
};

#endif // USN_Fleet_Factory_h

