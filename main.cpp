#include <iostream>
#include "show-sequency.h"
#include "grade-calculator.h"

using namespace std;

int main() {
    int option;
    cout << "1 - Calcular média \n";
    cout << "2 - Mostrar número anterior e sucessor \n";
    cin >> option;
    if (option == 1) {
        askGrades();
    } else if (option == 2) {
        showSequency();
    } else {
        cout << "Não há uma função com esse ID. Saindo...";
    }
    return 0;
}
