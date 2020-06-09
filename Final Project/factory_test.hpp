#ifndef __FACTORY_TEST_HPP__
#define __FACTORY_TEST_HPP__
#include "gtest/gtest.h"
#include "USN_Fleet_Factory.h" 
#include "USN_Ship.h"
#include "GF_Class.h"
#include "T_Class.h"
#include "AB_Class.h"
#include "WH_Class.h"
#include <iostream> 

TEST(FactoryTestSet, GFShipCost) {
    USN_Fleet_Factory* makeAShip; 
    USN_Ship *make; 
    makeAShip = new USN_Ship_Factory;
    make = makeAShip->CreateAircraftCarrier("Aircraft Carrier");
    EXPECT_EQ(make->shipCost(), 8); 
}
#endif //__FACTORY_TEST_HPP__ 
