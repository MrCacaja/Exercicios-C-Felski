#ifndef FELSKY_EXERCISES_CALCULATE_AVERAGE_H
#define FELSKY_EXERCISES_CALCULATE_AVERAGE_H

#include <vector>

int calculateAverage(vector<float> values, vector<int> weights) {
    float average = 0;
    for (int i = 0; i < values.size(); i++) {
        if (weights.size() < 1) {
            average += values[i];
        } else {
            average += values[i] * weights[i];
        }
    }
    if (weights.size() < 1) {
        average = average / values.size();
    } else {
        float totalWeight;
        for (float weight: weights) {
            totalWeight += weight;
        }
        average = average / totalWeight;
    }
    return average;
}

#endif //FELSKY_EXERCISES_CALCULATE_AVERAGE_H
