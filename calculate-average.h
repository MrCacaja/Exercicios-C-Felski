#ifndef FELSKY_EXERCISES_CALCULATE_AVERAGE_H
#define FELSKY_EXERCISES_CALCULATE_AVERAGE_H

#include <vector>

int calculateAverage(vector<float> values) {
    float average = 0;
    for (float value : values) {
        average += value;
    }
    average = average / values.size();
    return average;
}

#endif //FELSKY_EXERCISES_CALCULATE_AVERAGE_H
