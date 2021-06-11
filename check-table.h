#ifndef FELSKY_EXERCISES_CHECK_TABLE_H
#define FELSKY_EXERCISES_CHECK_TABLE_H

#include <iostream>

using namespace std;

void checkTable(){
    int multiplicator = 1, tableNumber;
    cout << "Qual número você deseja multiplicar?";
    cin >> tableNumber;
    while (multiplicator <= 10){
        cout << tableNumber << " * " << multiplicator << " = " << tableNumber * multiplicator << endl;
        multiplicator++;
    }
}

#endif //FELSKY_EXERCISES_CHECK_TABLE_H
