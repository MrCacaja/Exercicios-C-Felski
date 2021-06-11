#ifndef FELSKY_EXERCISES_GET_PAIR_NUMBERS_FROM_RAND_INT_ARRAY_H
#define FELSKY_EXERCISES_GET_PAIR_NUMBERS_FROM_RAND_INT_ARRAY_H

#include <iostream>
#include <time.h>
#include <random>

using namespace std;

void getPairNumbersFromRandIntArray(){
    int numberArray[20];
    srand(time(NULL));
    for(int i = 0; i < 20; i++){
        numberArray[i] = rand();
    }
    for (int i = 0; i < 20; i++) {
        if(!(numberArray[i] % 2)){
            cout << "Número: " << numberArray[i] << "\tPosição: " << i << "\n";
        }
    }
}

#endif //FELSKY_EXERCISES_GET_PAIR_NUMBERS_FROM_RAND_INT_ARRAY_H
