#ifndef __FACTORY_TEST_HPP__
#define __FACTORY_TEST_HPP__
#include "gtest/gtest.h"
#include "USN_Fleet_Factory.h" 
#include "USN_Ship.h"
#include "PLAN_Fleet_Factory.h" 
#include "PLAN_Ship.h"
#include "GF_Class.h"
#include "T_Class.h"
#include "AB_Class.h"
#include "WH_Class.h"
#include "Type_001_Class.h"
#include "Type_055_Class.h"
#include "Type_052D_Class.h"
#include "Type_054A_Class.h"
#include <iostream> 

TEST(FactoryTestSet, USNShipCost) {
    USN_Fleet_Factory* makeAShip; 
    USN_Ship *make; 
    makeAShip = new USN_Ship_Factory;
    make = makeAShip->CreateAircraftCarrier("Aircraft Carrier");
    EXPECT_EQ(make->shipCost(), 8); 
    make = makeAShip->CreateCruiser("Cruiser");
    EXPECT_EQ(make->shipCost(), 5); 
    make = makeAShip->CreateDestroyer("Destroyer");
    EXPECT_EQ(make->shipCost(), 3); 
    make = makeAShip->CreateFrigate("Frigate");
    EXPECT_EQ(make->shipCost(), 2; 
}

TEST(FactoryTestSet, PLANShipCost) {
    PLAN_Fleet_Factory* makeAVessel; 
    PLAN_Ship *assemble; 
    makeAVessel = new PLAN_Ship_Factory;
    assemble = makeAVessel->CreateAircraftCarrier("Aircraft Carrier");
    EXPECT_EQ(assemble->shipCost(), 8); 
    assemble = makeAVessel->CreateCruiser("Cruiser");
    EXPECT_EQ(assemble->shipCost(), 4); 
    assemble = makeAVessel->CreateDestroyer("Destroyer");
    EXPECT_EQ(assemble->shipCost(), 3);
    assemble = makeAVessel->CreateFrigate("Frigate");
    EXPECT_EQ(assemble->shipCost(), 1);
}

#endif //__FACTORY_TEST_HPP__ 
