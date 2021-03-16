#ifndef FELSKY_EXERCISES_FUEL_COST_CALCULATOR_H
#define FELSKY_EXERCISES_FUEL_COST_CALCULATOR_H

#include <iostream>

using namespace std;

void calculateFuelCost() {
    float traveledKm, fuelConsumption, fuelLiterPrice;
    cout << "Quantos km foram percorridos? \n";
    cin >> traveledKm;
    cout << "Qual é o consumo por litro do combustível por quilômetro? \n";
    cin >> fuelConsumption;
    cout << "Qual é o preço do combustível por litro? \n";
    cin >> fuelLiterPrice;
    cout << "Você vai gastar: R$ " << traveledKm * fuelConsumption * fuelLiterPrice;
}

#endif //FELSKY_EXERCISES_FUEL_COST_CALCULATOR_H
