#ifndef FELSKY_EXERCISES_HORSE_SHOE_CALCULATOR_H
#define FELSKY_EXERCISES_HORSE_SHOE_CALCULATOR_H

#include <iostream>

using namespace std;

void calculateHorseShoes(){
    int horses;

    cout << "Quantos cavalos são? \n";
    cin >> horses;
    if (horses){
        cout << "Você vai precisar de: " << horses * 4 << " ferraduras.";
    }
}

#endif //FELSKY_EXERCISES_HORSE_SHOE_CALCULATOR_H
