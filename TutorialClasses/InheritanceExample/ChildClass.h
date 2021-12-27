//
// Created by Burkay SABIRSIZ on 27.12.21.
//

#ifndef TUTOSH_BUCKY_CHILDCLASS_H
#define TUTOSH_BUCKY_CHILDCLASS_H

#include "ParentClass.h"

class ChildClass: public ParentClass {
    public:
        ChildClass();
        using ParentClass::printSomething;
        void printSomething();
        void printVars();
};


#endif //TUTOSH_BUCKY_CHILDCLASS_H
