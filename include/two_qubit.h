#ifndef TWO_QUBIT_H
#define TWO_QUBIT_H

struct TwoQubit {
    double a; // |00>
    double b; // |01>
    double c; // |10>
    double d; // |11>
};

bool isEntangled(const TwoQubit &q); 
void normalizeTwoQubit(TwoQubit &q);
void displayTwoQubit(const TwoQubit &q);

#endif
