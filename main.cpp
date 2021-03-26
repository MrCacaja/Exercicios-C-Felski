#include <iostream>
#include "show-sequency.h"
#include "grade-calculator.h"
#include "hello-user.h"
#include "horse-shoe-calculator.h"
#include "bill-calculator.h"
#include "burger-calculator.h"
#include "fuel-cost-calculator.h"
#include "is-vogal.h"

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
    } else {
        cout << "Não há uma função com esse ID. Saindo...";
    }
    return 0;
}
