#include <iostream>
#include "../include/qubit.h"

using namespace std;

int main() {
    Qubit q;

    cout << "Enter alpha (for |0>): ";
    cin >> q.alpha;

    cout << "Enter beta (for |1>): ";
    cin >> q.beta;

    normalize(q);
    displayQubit(q);

    return 0;
}
