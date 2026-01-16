#include <iostream>
#include <cmath>
#include "../include/qubit.h"

using namespace std;

void normalize(Qubit &q) {
    double norm = sqrt(q.alpha * q.alpha + q.beta * q.beta);
    q.alpha /= norm;
    q.beta /= norm;
}

void displayQubit(const Qubit &q) {
    cout << "\nQubit State: ";
    cout << q.alpha << "|0> + " << q.beta << "|1>" << endl;

    double prob0 = q.alpha * q.alpha;
    double prob1 = q.beta * q.beta;

    cout << "Probability of |0>: " << prob0 << endl;
    cout << "Probability of |1>: " << prob1 << endl;
}
