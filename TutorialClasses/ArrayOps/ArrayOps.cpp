//
// Created by Burkay SABIRSIZ on 23.12.2021.
//

#include <iostream>
#include <time.h>
#include "ArrayOps.h"

// arrayler metodlara void printarray(int thaArray[], int size) diye de verilebilir ama
// muhtemelen buradaki şekil daha sık kullanılıyordur. Ya da daha cool, bilemiyorum.

static arrayWithSize* currentArray = (arrayWithSize*) malloc(sizeof(arrayWithSize));

ArrayOps::ArrayOps() {
    std::cout << "ArrayOps object created." << std::endl;
}

arrayWithSize* ArrayOps::createOrderedIntArray(int size) {
    currentArray->elements = (int*) malloc(sizeof(int)*size);
    for(int i = 0; i<size; i++) {
        currentArray->elements[i] = i;
    }
    currentArray->size = size;

    return currentArray;
}

void ArrayOps::printArray(arrayWithSize* array) {
    std::cout << "[";
    for(int i=0; i<array->size; i++) {
        if(i==array->size-1){
            std::cout << array->elements[i];
        } else {
            std::cout << array->elements[i] << ", ";
        }
    }
    std::cout << "]" << std::endl;
}

void ArrayOps::destroyArray(arrayWithSize* array) {
    delete[] array->elements;
    array->size = 0;
}

int ArrayOps::sizeOfArray(arrayWithSize* array) {
    return array->size;
}


