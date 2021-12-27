//
// Created by Burkay SABIRSIZ on 27.12.21.
//

#include "OperatorOverload.h"

OperatorOverload::OperatorOverload() {

}

OperatorOverload::OperatorOverload(int a) {
    num = a;
}

OperatorOverload OperatorOverload::operator+(OperatorOverload operand) {
    OperatorOverload newOOObject;
    newOOObject.num = num + operand.num;
    return newOOObject;
}