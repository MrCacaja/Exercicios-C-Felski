#ifndef FELSKY_EXERCISES_MAIN_DIAGONAL_H
#define FELSKY_EXERCISES_MAIN_DIAGONAL_H

void drawMainDiagonal() {
    int lines = 2;
    cout << "Número de linhas e colunas: ";
    cin >> lines;
    char matrix[lines][lines] = {0};
    for (int line = 0; line < lines; line++) {
        for (int column = 0; column < lines; column++) {
            matrix[line][column] = '0';
            if (line == column) {
                matrix[line][column] = 'x';
            }
            if (line == lines - column - 1) {
                matrix[line][column] = 'x';
            }
        }
    }
    for (int line = 0; line < lines; line++) {
        for (int column = 0; column < lines; column++) {
            cout << matrix[line][column];
        }
        cout << endl;
    }
}

#endif //FELSKY_EXERCISES_MAIN_DIAGONAL_H
