//
// Created by Burkay SABIRSIZ on 23.12.2021.
//

#ifndef TUTOSH_BUCKY_ARRAYOPS_H
#define TUTOSH_BUCKY_ARRAYOPS_H

struct arrayWithSize {
    int* elements;
    int size;
};

class ArrayOps {
    public:
        ArrayOps();
        arrayWithSize* array;
        arrayWithSize* createOrderedIntArray(int size);
        int sizeOfArray(arrayWithSize* array);
        void printArray(arrayWithSize* array);
        void destroyArray(arrayWithSize* array);
};


#endif //TUTOSH_BUCKY_ARRAYOPS_H
