#ifndef FELSKY_EXERCISES_CALCULATOR_H
#define FELSKY_EXERCISES_CALCULATOR_H

#include <iostream>
#include <math.h>

using namespace std;

void calculator(){
    float result = 0, secondNumber = 0;
    int sign;
    cout << "Qual é o primeiro valor?";
    cin >> result;
    do {
        cout << "Qual operação você deseja realizar?\n0- Mostrar resultado\n1- Soma\n2- Produto\n3- Divisão\n4- Potência";
        cin >> sign;
        if (sign < 1 || sign > 4){
            cout << "Operação inválida";
            break;
        }
        cout << "Qual é o valor a ser calculado?";
        cin >> secondNumber;
        if (sign == 1){
            result += secondNumber;
        } else if (sign == 2){
            result = result * secondNumber;
        } else if (sign == 3){
            result = result / secondNumber;
        } else if (sign == 4){
            result = pow(result, secondNumber);
        }
    } while(secondNumber);
    cout << "O resultado final é: " << result;
}

#endif //FELSKY_EXERCISES_CALCULATOR_H
