#ifndef FELSKY_EXERCISES_GRADE_CALCULATOR_H
#define FELSKY_EXERCISES_GRADE_CALCULATOR_H

#include <iostream>
#include <vector>
#include "calculate-average.h"

using namespace std;

vector<float> grades;
vector<int> weights;
bool usingWeight = false;

void askGrades() {
    float grade, weight;
    cout << "Digite uma nota ou envie qualquer letra para calcular a média: \n";
    cin >> grade;
    if (grade) { //número 0 não funciona, tenho que achar um jeito de verificar se note == number
        grades.push_back(grade);
        if (usingWeight) {
            cout << "Digite o peso dessa nota: \n";
            cin >> weight;
            weights.push_back(weight);
        }
        askGrades();
    } else {
        cout << calculateAverage(grades, weights);
    }
}

void calculateAverage() {
    cout << "Deseja usar o sistema de pesos? \n";
    cout << "0 - Não \n";
    cout << "1 - Sim \n";
    cin >> usingWeight;
    askGrades();
}

#endif //FELSKY_EXERCISES_GRADE_CALCULATOR_H
