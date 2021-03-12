#ifndef FELSKY_EXERCISES_GRADE_CALCULATOR_H
#define FELSKY_EXERCISES_GRADE_CALCULATOR_H

#include <iostream>
#include <vector>
#include "calculate-average.h"

using namespace std;

vector<float> grades;
void askGrades() {
    cout << "Digite uma nota ou envie qualquer letra para calcular a média: \n";
    float grade;
    cin >> grade;
    if (grade) { //número 0 não funciona, tenho que achar um jeito de verificar se note == number
        grades.push_back(grade);
        askGrades();
    } else {
        cout << calculateAverage(grades);
    }
}

#endif //FELSKY_EXERCISES_GRADE_CALCULATOR_H
