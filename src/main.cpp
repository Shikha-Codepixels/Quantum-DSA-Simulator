#include <iostream>
#include "../include/qubit.h"
#include "../include/gates.h"

using namespace std;

int main() {
    Qubit q;

    cout << "Enter alpha (for |0>): ";
    cin >> q.alpha;

    cout << "Enter beta (for |1>): ";
    cin >> q.beta;

    normalize(q);

    int choice;
    cout << "\nChoose Quantum Gate:\n";
    cout << "1. NOT Gate (Pauli-X)\n";
    cout << "2. Hadamard Gate\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) 
    {
        applyNotGate(q);
        cout << "\nApplied NOT Gate.\n";
    }
    else if (choice == 2) 
    {
        applyHadamardGate(q);
        cout << "\nApplied Hadamard Gate.\n";
    }
    else 
    {
        cout << "Invalid choice.\n";
        return 0;
    }

    displayQubit(q);

    return 0;
}
