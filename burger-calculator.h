#ifndef FELSKY_EXERCISES_BURGER_CALCULATOR_H
#define FELSKY_EXERCISES_BURGER_CALCULATOR_H

#include <iostream>

void calculateBurger() {
    int burgers;
    cout << "Quantos hambúrgueres você vai fazer? \n";
    cin >> burgers;
    cout << "Você vai precisar de: \n";
    cout << float(2 * 50 * burgers) / float(1000) << " kg de queijo; \n";
    cout << float(100 * burgers) / float(1000) << " kg de carne; \n";
    cout << float(50 * burgers) / float(1000) << " kg de presunto.";
}

#endif //FELSKY_EXERCISES_BURGER_CALCULATOR_H
