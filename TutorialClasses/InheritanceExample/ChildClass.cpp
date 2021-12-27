//
// Created by Burkay SABIRSIZ on 27.12.21.
//

#include <iostream>
#include "ParentClass.h"
#include "ChildClass.h"

ChildClass::ChildClass(): ParentClass(4,5,6) {

}

void ChildClass::printSomething() {
    std::cout << "Now it's overloaded saying stuff!" << std::endl;
}

void ChildClass::printVars() {
    std::cout << "Normal: " << normalVar << " Protected: " << protectedVar << std::endl;
}
