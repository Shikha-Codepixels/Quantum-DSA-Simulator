# Quantum DSA Simulator 

A C++ based simulator that models **quantum computing concepts using classical Data Structures and Algorithms**.

This project is an attempt to understand quantum computation from a **computer science + algorithmic perspective**, without relying on heavy physics or external quantum libraries.

---

##  Project Motivation

Quantum computing is usually taught from a physics-first approach.  
This project takes a **DSA + ADA first approach**.

The goal is to:
- break down quantum ideas into logical structures
- simulate them using arrays, matrices, graphs, and algorithms
- and make quantum concepts more intuitive for CS students

---

##  What This Project Does

Currently implemented:
- Qubit representation using structs
- State normalization
- Probability calculation
- Superposition simulation

##  Quantum Gates Implemented

The following quantum gates are currently supported:

### 1. NOT Gate (Pauli-X)
Flips the qubit state:
|0> → |1>  
|1> → |0>

Implemented using matrix logic:
[0 1]  
[1 0]

---

### 2. Hadamard Gate (H)
Creates superposition by evenly distributing probability between |0> and |1>.

Matrix:
(1/√2) × [ 1  1 ]  
          [ 1 -1 ]

This allows the qubit to exist in both states simultaneously.

Planned features:
- Quantum gates (NOT, Hadamard)
- Multi-qubit systems
- Entanglement simulation using graphs
- Quantum algorithms (Grover’s Search,      Teleportation logic)
- Classical vs Quantum comparison

---

##  Core Concepts Used

- Data Structures
- Algorithms (ADA)
- Linear Algebra
- Probability
- Graph Theory
- Recursion

---

##  Project Structure

Quantum-DSA-Simulator/
│
├── src/ → implementation files
├── include/ → header files
├── docs/ → theory & explanation
├── README.md
└── .gitignore

##  How to Run

Using MSYS / MinGW:

```bash
g++ src/main.cpp src/qubit.cpp -o quantum
./quantum

