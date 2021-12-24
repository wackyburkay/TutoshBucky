//
// Created by Burkay SABIRSIZ on 23.12.2021.
//

#include <iostream>
#include "MemberInitExample.h"

MemberInitExample::MemberInitExample(int var, int cVar):var(var), cVar(cVar) {
    //böyle enteresan bir initializer syntaxi varmış cpp'de.
    //Ayrıca const olarak verilen değişkenler initializer'da initialize edilmek zorundadır.
    std::cout << "MemberInitExample created. Wooo!" << std::endl;
}

void MemberInitExample::printVars() {
    std::cout << "var: " << var << " cvar: " << cVar << std::endl;
}
