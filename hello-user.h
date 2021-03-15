#ifndef FELSKY_EXERCISES_HELLO_USER_H
#define FELSKY_EXERCISES_HELLO_USER_H

#include "iostream"

using namespace std;

void helloUser() {
    string userName;

    cout << "Digite seu nome: ";
    cin >> userName;
    cout << "Olá, " << userName << "!";
}

#endif //FELSKY_EXERCISES_HELLO_USER_H
