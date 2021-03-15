#include <iostream>
#include "show-sequency.h"
#include "grade-calculator.h"
#include "hello-user.h"

using namespace std;

int main() {
    int option;
    cout << "1 - Calcular média \n";
    cout << "2 - Mostrar número anterior e sucessor \n";
    cout << "3 - Olá usuário \n";
    cin >> option;
    if (option == 1) {
        askGrades();
    } else if (option == 2) {
        showSequency();
    } else if (option == 3 ) {
        helloUser();
    }else {
        cout << "Não há uma função com esse ID. Saindo...";
    }
    return 0;
}
