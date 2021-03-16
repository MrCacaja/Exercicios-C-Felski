#ifndef FELSKY_EXERCISES_BILL_CALCULATOR_H
#define FELSKY_EXERCISES_BILL_CALCULATOR_H

#include <iostream>
#include <vector>
#include "percentage-calculator.h"

using namespace std;

vector<float> bills;

void getBills() {
    float bill;
    float fees;
    cout << "Digite uma conta (ou 0):\n";
    cin >> bill;
    if (bill) {
        cout << "Qual a porcentagem de juros? \n";
        cin >> fees;
        if (fees) {
            bills.push_back(bill + getPercentage(bill, fees));
        } else {
            bills.push_back(bill);
        }
        getBills();
    }
}

void calculateBills() {
    float income;
    cout << "Qual é a sua renda? \n";
    cin >> income;
    getBills();
    for (float bill: bills) {
        income -= bill;
    }
    cout << "Vai sobrar: R$ " << income;
}

#endif //FELSKY_EXERCISES_BILL_CALCULATOR_H
