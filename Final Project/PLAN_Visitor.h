//
//  PLAN_Visitor.h
//  Naval Forces
//
//  Created by Orobosa Ogbeide on 6/8/20.
//  Copyright © 2020 Orobosa Ogbeide. All rights reserved.
//

#ifndef PLAN_Visitor_h
#define PLAN_Visitor_h
#include <iostream>
#include <string>
#include "PLAN_Ship.h"
#include "Type_001_Class.h"
#include "Type_055_Class.h"
#include "Type_052D_Class.h"
#include "Type_054A_Class.h"

class Visitory
{
  public:
    virtual void visit(Type_001_Class_Aircraft_Carrier *e) = 0;
    virtual void visit(Type_055_Class_Cruiser *e) = 0;
    virtual void visit(Type_052D_Class_Destroyer *e) = 0;
    virtual void visit(Type_054A_CLass_Frigate *e) = 0;
};

void Type_001_Class_Aircraft_Carrier::accept(Visitory &v)
{
  v.visit(this);
}

void Type_055_Class_Cruiser::accept(Visitory &v)
{
  v.visit(this);
}

void Type_052D_Class_Destroyer::accept(Visitory &v)
{
  v.visit(this);
}

void Type_054A_CLass_Frigate::accept(Visitory &v)
{
  v.visit(this);
}


class PLAN_Acitivity_Visitor : public Visitory {
    void visit(Type_001_Class_Aircraft_Carrier *e)
    {
            std::cout << "- Active\n";
    }
    void visit(Type_055_Class_Cruiser *e)
    {
            std::cout << "- Active\n";
    }
    void visit(Type_052D_Class_Destroyer *e)
    {
            std::cout << "- Active\n";
    }
    void visit(Type_054A_CLass_Frigate *e)
    {
            std::cout << "- Active\n";
    }
};
#endif // PLAN_Visitor_h
