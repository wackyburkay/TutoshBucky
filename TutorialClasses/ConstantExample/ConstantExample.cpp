//
// Created by Burkay SABIRSIZ on 23.12.2021.
//

#include <iostream>
#include "ConstantExample.h"

ConstantExample::ConstantExample() {
    std::cout << "I have been created!" << std::endl;
}

//deconstructor. obje yok edilince çağırılır. Ayrıca C++ main bitiği an tüm objeleri yok eder.
ConstantExample::~ConstantExample() {
    std::cout << "I died!" << std::endl;
}

void ConstantExample::functThatIsNotConstant() {
    someVar = 999;
    std::cout << "someVar is " << someVar << std::endl;
}

void ConstantExample::funcThatIsConstant() const {
    //aşağıdakini yorum dışına almak hata patlatır. const metodlar class variable'ları değiştirmeyecek
    //bu metod anlamına gelir, exception: mutable.
    //someVar = 999;

    someMutableVar = 888;
    std::cout << "someMutableVar is " << someMutableVar << std::endl;
}
