//
// Created by Burkay SABIRSIZ on 27.12.21.
//

#ifndef TUTOSH_BUCKY_PARENTCLASS_H
#define TUTOSH_BUCKY_PARENTCLASS_H


class ParentClass {
    public:
        ParentClass(int, int, int);
        void printSomething();
        int normalVar; //child bunu görebilir
    protected:
        int protectedVar; //child bunu da görebilir.
    private:
        int secretVar;
};


#endif //TUTOSH_BUCKY_PARENTCLASS_H
