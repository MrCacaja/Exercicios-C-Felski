#ifndef FELSKY_EXERCISES_SHOW_SEQUENCY_H
#define FELSKY_EXERCISES_SHOW_SEQUENCY_H

#include "iostream"

using namespace std;

void showSequency() {
    int value;
    cout << "Digite um valor: \n";
    cin >> value;
    cout << "Anterior: " << value - 1 << endl;
    cout << "Próximo: " << value + 1;
}

#endif //FELSKY_EXERCISES_SHOW_SEQUENCY_H
