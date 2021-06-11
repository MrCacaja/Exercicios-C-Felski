#ifndef FELSKY_EXERCISES_FATORIAL_H
#define FELSKY_EXERCISES_FATORIAL_H

#include <iostream>

using namespace std;

int factorial(int number) {
    int i;
    for (i = 1; number > 1; number--) {
        i = i * number;
    }
    return i;
}

void askFactorial() {
    int number;
    cout << "Digite um número para obter sua fatorial";
    cin >> number;
    cout << "A fatorial de " << number << " é: " << factorial(number);
}

#endif //FELSKY_EXERCISES_FATORIAL_H
