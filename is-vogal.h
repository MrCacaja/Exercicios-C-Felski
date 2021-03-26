#ifndef FELSKY_EXERCISES_IS_VOGAL_H
#define FELSKY_EXERCISES_IS_VOGAL_H

#include <iostream>

using namespace std;

void isVogal() {
    char character;
    cout << "Digite um caractere: \n";
    cin >> character;
    character = toupper(character);
    if (character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U'){
        cout << character << " é vogal.";
    } else {
        cout << character << " é consoante.";
    }
}

#endif //FELSKY_EXERCISES_IS_VOGAL_H
