//
//  PLAN_Decorator.h
//  Naval Power
//
//  Created by Orobosa Ogbeide on 6/8/20.
//  Copyright © 2020 Orobosa Ogbeide. All rights reserved.
//

#ifndef PLAN_Decorator_h
#define PLAN_Decorator_h
#include <iostream>
#include <string>
#include "PLAN_Ship.h"
#include "Type_001_Class.h"
#include "Type_055_Class.h"
#include "Type_052D_Class.h"
#include "Type_054A_Class.h"

class PLAN_Decorator : public PLAN_Ship {
private:
    PLAN_Ship* m_Decorator;
public:
    PLAN_Decorator (PLAN_Ship* decorator):m_Decorator(decorator) {}
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


class Type_001_Decorator : public PLAN_Decorator{
public:
        Type_001_Decorator(PLAN_Ship* dc):PLAN_Decorator(dc) {}
        virtual void ShipName()
        {
            PLAN_Decorator::ShipName();
            std::cout << "\nClassified.\n";
        }
        virtual void shipHullNumber()
        {
            PLAN_Decorator::shipHullNumber();
            std::cout << "\nClassified.\n";
        }
        virtual void shipType()
        {
            PLAN_Decorator::shipType();
            std::cout << "\nDiesal Aircraft Carrier.\n";
        }
        virtual void armanent()
        {
            PLAN_Decorator::arament();
            std::cout << "\nBlue Water Capability.\n";
        }
        virtual void assignHomePort()
        {
            PLAN_Decorator::assignHomePort();
            std::cout << "Zhanjiang, Guangdong Province.\n";
        }
        virtual void assignAdmiral()
        {
            PLAN_Decorator::assignAdmiral();
            std::cout << "[RDML] Rear Admiral Shen Jinlong.\n";
        }
};

class Type_055_Decorator : public PLAN_Decorator{
public:
        Type_055_Decorator(PLAN_Ship* dc):PLAN_Decorator(dc) {}
        virtual void ShipName()
        {
            PLAN_Decorator::ShipName();
            std::cout << "\nClassified.\n";
        }
        virtual void shipHullNumber()
        {
            PLAN_Decorator::shipHullNumber();
            std::cout << "\nClassified.\n";
        }
        virtual void shipType()
        {
            PLAN_Decorator::shipType();
            std::cout << "\nGuided Missile Cruiser.\n";
        }
        virtual void armanent()
        {
            PLAN_Decorator::arament();
            std::cout << "\nBlue Water Capability.\n";
        }
        virtual void assignHomePort()
        {
            PLAN_Decorator::assignHomePort();
            std::cout << "Zhanjiang, Guangdong Province.\n";
        }
        virtual void assignAdmiral()
        {
            PLAN_Decorator::assignAdmiral();
            std::cout << "[CAPT] Captain Wu Shengli.\n";
        }
};

class Type_052D_Decorator : public PLAN_Decorator{
public:
        Type_052D_Decorator(PLAN_Ship* dc):PLAN_Decorator(dc) {}
        virtual void ShipName()
        {
            PLAN_Decorator::ShipName();
            std::cout << "\nClassified.\n";
        }
        virtual void shipHullNumber()
        {
            PLAN_Decorator::shipHullNumber();
            std::cout << "\nClassified.\n";
        }
        virtual void shipType()
        {
            PLAN_Decorator::shipType();
            std::cout << "\nGuided Missile Destroyer.\n";
        }
        virtual void armanent()
        {
            PLAN_Decorator::arament();
            std::cout << "\nBlue Water Capability.\n";
        }
        virtual void assignHomePort()
        {
            PLAN_Decorator::assignHomePort();
            std::cout << "Zhanjiang, Guangdong Province.\n";
        }
        virtual void assignAdmiral()
        {
            PLAN_Decorator::assignAdmiral();
            std::cout << "[CMDR] Commander Zhang Dingfa.\n";
        }
};

class Type_054A_Decorator : public PLAN_Decorator{
public:
        Type_054A_Decorator(PLAN_Ship* dc):PLAN_Decorator(dc) {}
        virtual void ShipName()
        {
            PLAN_Decorator::ShipName();
            std::cout << "\nClassified.\n";
        }
        virtual void shipHullNumber()
        {
            PLAN_Decorator::shipHullNumber();
            std::cout << "\nClassified.\n";
        }
        virtual void shipType()
        {
            PLAN_Decorator::shipType();
            std::cout << "\nGuided Missile Frigate.\n";
        }
        virtual void armanent()
        {
            PLAN_Decorator::arament();
            std::cout << "\nBrown Water Capability.\n";
        }
        virtual void assignHomePort()
        {
            PLAN_Decorator::assignHomePort();
            std::cout << "Zhanjiang, Guangdong Province.\n";
        }
        virtual void assignAdmiral()
        {
            PLAN_Decorator::assignAdmiral();
            std::cout << "[LCMDR] Lieutenant Commander Liu Huaqing.\n";
        }
};
#endif // PLAN_Decorator_h
