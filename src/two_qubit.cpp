#include <iostream>
#include <cmath>
#include "../include/two_qubit.h"

using namespace std;

void normalizeTwoQubit(TwoQubit &q) {
    double norm = sqrt(
        q.a*q.a + q.b*q.b + q.c*q.c + q.d*q.d
    );

    q.a /= norm;
    q.b /= norm;
    q.c /= norm;
    q.d /= norm;
}

void displayTwoQubit(const TwoQubit &q) {
    cout << "\nTwo-Qubit State:\n";
    cout << q.a << "|00> + "
         << q.b << "|01> + "
         << q.c << "|10> + "
         << q.d << "|11>\n";

    cout << "\nProbabilities:\n";
    cout << "|00>: " << q.a*q.a << endl;
    cout << "|01>: " << q.b*q.b << endl;
    cout << "|10>: " << q.c*q.c << endl;
    cout << "|11>: " << q.d*q.d << endl;
}
