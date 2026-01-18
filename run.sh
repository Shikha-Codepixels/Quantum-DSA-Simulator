#!/bin/bash

echo "Compiling Quantum DSA Simulator..."

g++ src/main.cpp src/qubit.cpp src/gates.cpp src/two_qubit.cpp -o quantum

if [ $? -eq 0 ]; then
    echo "Compilation successful"
    echo "Running program..."
    ./quantum
else
    echo "Compilation failed"
fi
