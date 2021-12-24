//
// Created by Burkay SABIRSIZ on 23.12.2021.
//

#ifndef TUTOSH_BUCKY_CONSTANTEXAMPLE_H
#define TUTOSH_BUCKY_CONSTANTEXAMPLE_H


class ConstantExample {
    public:
        ConstantExample();
        ~ConstantExample();
        void functThatIsNotConstant();
        void funcThatIsConstant() const;
        int someVar;
        mutable int someMutableVar;
};


#endif //TUTOSH_BUCKY_CONSTANTEXAMPLE_H
