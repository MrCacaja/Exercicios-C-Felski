#ifndef FELSKY_EXERCISES_POTENCY_H
#define FELSKY_EXERCISES_POTENCY_H

#include <iostream>

using namespace std;

void potency(){
    int number, expoent, loops, result;
    cout << "Digite a base da potência:\n";
    cin >> number;
    cout << "Digite o expoente: \n";
    cin >> expoent;
    result = number;
    loops = expoent - 1;
    while (loops){
        result = result * number;
        loops--;
    }
    cout << "A potência de " << number << " elevado a " << expoent << " é: " << result;
}

#endif //FELSKY_EXERCISES_POTENCY_H
