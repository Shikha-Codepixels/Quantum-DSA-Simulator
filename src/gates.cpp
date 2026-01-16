#include <cmath>
#include "../include/gates.h"

// NOT Gate (Pauli-X)
// Matrix: [0 1]
//         [1 0]
void applyNotGate(Qubit &q) {
    double newAlpha = q.beta;
    double newBeta = q.alpha;

    q.alpha = newAlpha;
    q.beta = newBeta;
}

// Hadamard Gate
// Matrix: (1/√2) * [ 1  1 ]
//                 [ 1 -1 ]
void applyHadamardGate(Qubit &q) {
    double newAlpha = (q.alpha + q.beta) / sqrt(2);
    double newBeta  = (q.alpha - q.beta) / sqrt(2);

    q.alpha = newAlpha;
    q.beta = newBeta;
}
