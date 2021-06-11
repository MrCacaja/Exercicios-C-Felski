#ifndef FELSKY_EXERCISES_GENERATE_FIVE_RANDOM_NUMBERS_H
#define FELSKY_EXERCISES_GENERATE_FIVE_RANDOM_NUMBERS_H

void generateFiveRandomNumbers() {
    srand(time(NULL));
    int r1 = 0, r2 = 0, r3 = 0, r4 = 0, r5 = 0;
    do {
        r1 = rand() % 9 + 1;
    } while (r1 == r2 || r1 == r3 || r1 == r4 || r1 == r5);
    do {
        r2 = rand() % 9 + 1;
    } while (r2 == r1 || r2 == r3 || r2 == r4 || r2 == r5);
    do {
        r3 = rand() % 9 + 1;
    } while (r3 == r2 || r3 == r1 || r3 == r4 || r3 == r5);
    do {
        r4 = rand() % 9 + 1;
    } while (r4 == r2 || r4 == r3 || r4 == r1 || r4 == r5);
    do {
        r5 = rand() % 9 + 1;
    } while (r5 == r2 || r5 == r3 || r5 == r4 || r5 == r1);
    cout << r1 << ", " << r2 << ", " << r3 << ", " << r4 << ", "
         << r5 << ", ";
}

#endif //FELSKY_EXERCISES_GENERATE_FIVE_RANDOM_NUMBERS_H
