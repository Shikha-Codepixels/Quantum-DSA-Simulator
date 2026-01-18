#include <iostream>
#include "../include/qubit.h"
#include "../include/gates.h"
#include "../include/two_qubit.h"

using namespace std;

void singleQubitMenu() {
    Qubit q;

    cout << "\nEnter alpha (for |0>): ";
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

    if (choice == 1) {
        applyNotGate(q);
        cout << "\nApplied NOT Gate.\n";
    }
    else if (choice == 2) {
        applyHadamardGate(q);
        cout << "\nApplied Hadamard Gate.\n";
    }
    else {
        cout << "Invalid choice.\n";
        return;
    }

    displayQubit(q);
}

void twoQubitMenu() {
    TwoQubit q;

    cout << "\nEnter amplitudes for |00> |01> |10> |11>:\n";
    cin >> q.a >> q.b >> q.c >> q.d;

    normalizeTwoQubit(q);
    displayTwoQubit(q);

    if(isEntangled(q))
    {
        cout << "\nState is Entangled.\n";
    }
    else
    {
        cout << "\nState is NOT Entangled (seperable).\n";
    }

}

int main() {
    int option;

    while(true) {
        cout << "==============================\n";
        cout << " Quantum DSA Simulator\n";
        cout << "==============================\n";
        cout << "1. Single Qubit Simulation\n";
        cout << "2. Two Qubit Simulation\n";
        cout << "0. Exit\n";
        cout << "Enter option: ";
        cin >> option;

        if (option == 1) {
            singleQubitMenu();
        }
        else if (option == 2) {
            twoQubitMenu();
        }
        else if (option == 0) {
            cout << "\nExiting simulator.\n";
            break;
        }
        else {
            cout << "Invalid option.\n";
        }
    }

    return 0;
}

