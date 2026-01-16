#ifndef QUBIT_H
#define QUBIT_H

struct Qubit {
    double alpha; // amplitude of |0>
    double beta;  // amplitude of |1>
};

void normalize(Qubit &q);
void displayQubit(const Qubit &q);

#endif