//
//  USN_Decorator.h
//  Naval Power
//
//  Created by Orobosa Ogbeide on 6/8/20.
//  Copyright © 2020 Orobosa Ogbeide. All rights reserved.
//

#ifndef USN_Decorator_h
#define USN_Decorator_h
#include <iostream>
#include <string>
#include "USN_Ship.h"
#include "GF_Class.h"
#include "T_Class.h"
#include "AB_Class.h"
#include "WH_Class.h"

class USN_Decorator : public USN_Ship {
private:
    USN_Ship* m_Decorator;
public:
    USN_Decorator (USN_Ship* decorator):m_Decorator(decorator) {}
    virtual void ShipName() {m_Decorator->ShipName();}
    virtual void shipHullNumber() {m_Decorator->shipHullNumber();}
    virtual void shipClassName() {m_Decorator->shipClassName();}
    virtual void shipType() {m_Decorator->shipType();}
    virtual void arament() {m_Decorator->arament();}
    virtual void assignHomePort() {m_Decorator->assignHomePort();}
    virtual void assignAdmiral() {m_Decorator->assignAdmiral();}
    
    virtual int shipCost() {m_Decorator->shipCost();{return 0;}}
    virtual int powerIndex() {m_Decorator->powerIndex();{return 0;}}
};

class GF_Decorator : public USN_Decorator{
public:
        GF_Decorator(USN_Ship* dc):USN_Decorator(dc) {}
        void assignHomePort()
        {
            USN_Decorator::assignHomePort();
            std::cout << "San Diego, California.\n";
        }
};

class T_Decorator : public USN_Decorator{
public:
        T_Decorator(USN_Ship* dc):USN_Decorator(dc) {}
        virtual void ShipName()
        {
            USN_Decorator::ShipName();
            std::cout << "\nNamesake derives from the famous World War 2 Commander.\n";
        }
        virtual void shipHullNumber()
        {
            USN_Decorator::shipHullNumber();
            std::cout << "\nStarting Hull Number is 61.\n";
        }
        virtual void shipType()
        {
            USN_Decorator::shipType();
            std::cout << "\nGuided Missile Cruiser.\n";
        }
        virtual void armanent()
        {
            USN_Decorator::arament();
            std::cout << "\nBlue Water Capability.\n";
        }
        virtual void assignHomePort()
        {
            USN_Decorator::assignHomePort();
            std::cout << "San Diego, California.\n";
        }
        virtual void assignAdmiral()
        {
            USN_Decorator::assignAdmiral();
            std::cout << "[CAPT] Captain Mark Johnson.\n";
        }
};

class AB_Decorator : public USN_Decorator{
public:
        AB_Decorator(USN_Ship* dc):USN_Decorator(dc) {}
        virtual void ShipName()
        {
            USN_Decorator::ShipName();
            std::cout << "\nNamesake derives from the famous Cold War Admiral.\n";
        }
        virtual void shipHullNumber()
        {
            USN_Decorator::shipHullNumber();
            std::cout << "\nStarting Hull Number is 50.\n";
        }
        virtual void shipType()
        {
            USN_Decorator::shipType();
            std::cout << "\nGuided Missile Destroyer.\n";
        }
        virtual void armanent()
        {
            USN_Decorator::arament();
            std::cout << "\nBlue Water Capability.\n";
        }
        virtual void assignHomePort()
        {
            USN_Decorator::assignHomePort();
            std::cout << "Norfolk, Virginia.\n";
        }
        virtual void assignAdmiral()
        {
            USN_Decorator::assignAdmiral();
            std::cout << "[CMDR] Commander Orobosa Ogbeide.\n";
        }
};

class WH_Decorator : public USN_Decorator{
public:
        WH_Decorator(USN_Ship* dc):USN_Decorator(dc) {}
        virtual void ShipName()
        {
            USN_Decorator::ShipName();
            std::cout << "\nNamesake derives from the famous Cold War Commander.\n";
        }
        virtual void shipHullNumber()
        {
            USN_Decorator::shipHullNumber();
            std::cout << "\nStarting Hull Number is 15.\n";
        }
        virtual void shipType()
        {
            USN_Decorator::shipType();
            std::cout << "\nGuided Missile Frigate.\n";
        }
        virtual void armanent()
        {
            USN_Decorator::arament();
            std::cout << "\nGreen Water Capability.\n";
        }
        virtual void assignHomePort()
        {
            USN_Decorator::assignHomePort();
            std::cout << "Norfolk, Virginia.\n";
        }
        virtual void assignAdmiral()
        {
            USN_Decorator::assignAdmiral();
            std::cout << "[CMDR] Commander Kyle Swasin.\n";
        }
};
#endif // USN_Decorator_h
