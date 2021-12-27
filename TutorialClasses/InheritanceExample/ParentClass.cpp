//
// Created by Burkay SABIRSIZ on 27.12.21.
//

#include <iostream>
#include "ParentClass.h"

ParentClass::ParentClass(int a, int b, int c):normalVar(a),protectedVar(b),secretVar(c) {

}

void ParentClass::printSomething() {
    std::cout << "I'm saying stuff!" << std::endl;
}
