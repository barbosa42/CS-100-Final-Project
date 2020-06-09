//
//  USN_Visitor.h
//  Naval Forces
//
//  Created by Orobosa Ogbeide on 6/8/20.
//  Copyright © 2020 Orobosa Ogbeide. All rights reserved.
//

#ifndef USN_Visitor_h
#define USN_Visitor_h
#include <iostream>
#include <string>
#include "USN_Ship.h"
#include "GF_Class.h"
#include "T_Class.h"
#include "AB_Class.h"
#include "WH_Class.h"

class Visitor
{
  public:
    virtual void visit(GF_Class_Aircraft_Carrier *e) = 0;
    virtual void visit(T_Class_Cruiser *e) = 0;
    virtual void visit(AB_Class_Destroyer *e) = 0;
    virtual void visit(WH_Class_Frigate *e) = 0;
};

void GF_Class_Aircraft_Carrier::accept(Visitor &v)
{
  v.visit(this);
}

void T_Class_Cruiser::accept(Visitor &v)
{
  v.visit(this);
}

void AB_Class_Destroyer::accept(Visitor &v)
{
  v.visit(this);
}

void WH_Class_Frigate::accept(Visitor &v)
{
  v.visit(this);
}


class USN_Acitivity_Visitor : public Visitor {
    void visit(GF_Class_Aircraft_Carrier *e)
    {
            std::cout << "- Active\n";
    }
    void visit(T_Class_Cruiser *e)
    {
            std::cout << "- Active\n";
    }
    void visit(AB_Class_Destroyer *e)
    {
            std::cout << "- Active\n";
    }
    void visit(WH_Class_Frigate *e)
    {
            std::cout << "- Active\n";
    }
};




#endif // USN_Visitor_h
