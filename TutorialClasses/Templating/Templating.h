//
// Created by Burkay SABIRSIZ on 23.12.2021.
//

#ifndef TUTOSH_BUCKY_TEMPLATING_H
#define TUTOSH_BUCKY_TEMPLATING_H

template <class T>
class Templating {
    public:
        Templating(T x);
};

template<>
class Templating<char> {
    public:
        Templating(char x);
};

#endif //TUTOSH_BUCKY_TEMPLATING_H

#include "Templating.tpp"

//template classlar sadece header file içinde tanımlanabilir, bu şekilde yazmak bir workaround sadece.
//ama beğendim. güzel workaround.