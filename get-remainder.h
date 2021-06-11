#ifndef FELSKY_EXERCISES_GET_REMAINDER_H
#define FELSKY_EXERCISES_GET_REMAINDER_H

#include <iostream>

using namespace std;

void remainder() {
    int number, divider, remainder;
    cout << "Digite um número:\n";
    cin >> number;
    cout << "Digite um divisor:\n";
    cin >> divider;
    remainder = number;
    while (remainder - divider > 0){
        remainder -= divider;
    }
    cout << "O resto da divisão de " << number << " por " << divider << " é: " << remainder;
}

#endif //FELSKY_EXERCISES_GET_REMAINDER_H
