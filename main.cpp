#include <iostream>
#include "show-sequency.h"
#include "grade-calculator.h"
#include "hello-user.h"
#include "horse-shoe-calculator.h"
#include "bill-calculator.h"
#include "burger-calculator.h"
#include "fuel-cost-calculator.h"
#include "is-vogal.h"
#include "check-table.h"
#include "olá-tudo-bem-times-30.h"
#include "sum-10-values.h"
#include "discover-number.h"
#include "potency.h"
#include "get-remainder.h"
#include "calculator.h"
#include "generate-five-random-numbers.h"
#include "fatorial.h"
#include "get-pair-numbers-from-rand-int-array.h"
#include "main-diagonal.h"

using namespace std;

int main() {
    int option;
    cout << "1 - Calcular média \n";
    cout << "2 - Mostrar número anterior e sucessor \n";
    cout << "3 - Olá usuário \n";
    cout << "4 - Calculadora de ferraduras \n";
    cout << "5 - Calculadora de pagamentos \n";
    cout << "6 - Calculadora de hambúrguer \n";
    cout << "7 - Calculadora de gastos de combustível \n";
    cout << "8 - Checar se é vogal ou consoante \n";
    cout << "9 - Consultar tabuada\n";
    cout << "10 - Olá, tudo bem? Só que 30 vezes\n";
    cout << "11 - Somar dez números\n";
    cout << "12 - Descobrir número\n";
    cout << "13 - Potência\n";
    cout << "14 - Resto de divisão\n";
    cout << "15 - Calculadora\n";
    cout << "16 - Cinco números aleatórios\n";
    cout << "17 - Fatorial\n";
    cout << "18 - Checar números pares em lista de 20 números aleatórios\n";
    cout << "19 - Diagonal principal e secundária\n";
    cin >> option;
    if (option == 1) {
        calculateAverage();
    } else if (option == 2) {
        showSequency();
    } else if (option == 3) {
        helloUser();
    } else if (option == 4) {
        calculateHorseShoes();
    } else if (option == 5) {
        calculateBills();
    } else if (option == 6) {
        calculateBurger();
    } else if (option == 7) {
        calculateFuelCost();
    } else if (option == 8) {
        isVogal();
    } else if (option == 9) {
        checkTable();
    } else if (option == 10) {
        olaTudoBemTimes30();
    } else if (option == 11) {
        sumTenValues();
    } else if (option == 12) {
        discoverNumber();
    } else if (option == 13) {
        potency();
    } else if (option == 14) {
        remainder();
    } else if (option == 15) {
        calculator();
    } else if (option == 16) {
        generateFiveRandomNumbers();
    } else if (option == 17) {
        askFactorial();
    } else if (option == 18) {
        getPairNumbersFromRandIntArray();
    } else if (option == 19) {
        drawMainDiagonal();
    } else {
        cout << "Não há uma função com esse ID. Saindo...";
    }
    return 0;
}
