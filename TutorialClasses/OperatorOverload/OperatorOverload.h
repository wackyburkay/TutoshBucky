//
// Created by Burkay SABIRSIZ on 27.12.21.
//

#ifndef TUTOSH_BUCKY_OPERATOROVERLOAD_H
#define TUTOSH_BUCKY_OPERATOROVERLOAD_H


class OperatorOverload {
    public:
        int num;
        OperatorOverload();
        OperatorOverload(int);
        OperatorOverload operator+(OperatorOverload);
};


#endif //TUTOSH_BUCKY_OPERATOROVERLOAD_H
