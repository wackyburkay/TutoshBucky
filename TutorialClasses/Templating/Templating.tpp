//
// Created by Burkay SABIRSIZ on 23.12.2021.
//

#include <iostream>

template<class T>
Templating<T>::Templating(T x) {
    std::cout << "This is not a character bro: " << x << std::endl;
}

Templating<char>::Templating(char x) {
    std::cout << "Yes! This is a char: " << x << std::endl;
}