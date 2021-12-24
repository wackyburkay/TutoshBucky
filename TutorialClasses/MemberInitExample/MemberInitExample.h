//
// Created by Burkay SABIRSIZ on 23.12.2021.
//

#ifndef TUTOSH_BUCKY_MEMBERINITEXAMPLE_H
#define TUTOSH_BUCKY_MEMBERINITEXAMPLE_H


class MemberInitExample {
    public:
        MemberInitExample(int var, int cVar);
        void printVars();
    private:
        int var;
        const int cVar;
};


#endif //TUTOSH_BUCKY_MEMBERINITEXAMPLE_H
