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
/*
class Visitor {
 public:
  virtual void VisitConcreteComponentA(const ConcreteComponentA *element) const = 0;
  virtual void VisitConcreteComponentB(const ConcreteComponentB *element) const = 0;
};
*/

class USN_Visitor {
public:
    virtual void VisitGF(const GF_Class_Aircraft_Carrier *) const = 0; 
}
#endif // USN_Visitor_h
