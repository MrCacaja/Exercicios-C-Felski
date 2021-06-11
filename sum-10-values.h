#ifndef FELSKY_EXERCISES_SUM_10_VALUES_H
#define FELSKY_EXERCISES_SUM_10_VALUES_H

#include <iostream>

using namespace std;

void sumTenValues(){
    int i = 0, sum = 0, input;
    while (i < 10){
        cout<<i+1<<") Digite um valor inteiro:\n";
        cin >> input;
        sum += input;
        i++;
    }
    cout << "O resultado é: " << sum;
}

#endif //FELSKY_EXERCISES_SUM_10_VALUES_H
