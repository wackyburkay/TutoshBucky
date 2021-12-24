//
// Created by Burkay SABIRSIZ on 23.12.2021.
//

#include <iostream>
#include "Recursion.h"

Recursion::Recursion() {
    std::cout << "Recursion object created." << std::endl;
}

int Recursion::recursive_factorial(int val) {
    if(val==1){
        return 1;
    } else {
        return val* recursive_factorial(val-1);
    }
}
