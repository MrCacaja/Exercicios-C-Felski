#ifndef FELSKY_EXERCISES_DISCOVER_NUMBER_H
#define FELSKY_EXERCISES_DISCOVER_NUMBER_H

#include <iostream>
#include <time.h>

using namespace std;

void discoverNumber() {
    srand(time(NULL));
    char number = 48;
    int randomNumber = rand() % 10, attempts = 0;
    while (number >= 48 && number <= 57) {
        attempts++;
        cout << "Digite um número entre 0 e 9:\n";
        cin >> number;
        if (number - 48 > randomNumber) {
            cout << "O número correto é menor\n";
        } else if (number - 48 < randomNumber) {
            cout << "O número correto é maior\n";
        } else {
            cout << "Você acertou com " << attempts << " tentativas!";
            number = 0;
        }
    }
    if (number){
        cout << "Número inválido.";
    }
}

#endif //FELSKY_EXERCISES_DISCOVER_NUMBER_H
