# Quantum Basics – Conceptual Explanation

This document explains the quantum computing concepts used in this project
in a simple, computer-science-oriented way.

The goal is not physics accuracy, but algorithmic understanding.

---

## 1. What is a Qubit?

A classical bit can be either 0 or 1.

A qubit can be in a combination of both:

|ψ> = α|0> + β|1>

Where:
- α and β are probability amplitudes
- α² is the probability of measuring 0
- β² is the probability of measuring 1
- α² + β² = 1 (always)

In this project, a qubit is represented using a C++ struct:

```cpp
struct Qubit {
    double alpha;
    double beta;
};
```

This allows us to treat the quantum state as a 2D vector.

---

## 2. Superposition

In classical computing, a bit is either 0 or 1.

In quantum computing, a qubit can exist in both states at the same time.
This is called **superposition**.

Mathematically:

|ψ> = α|0> + β|1>

Where:
- α is the amplitude of |0>
- β is the amplitude of |1>
- α² = probability of measuring 0
- β² = probability of measuring 1

Example:

α = 0.707  
β = 0.707  

Then:

Probability(|0>) = 0.5  
Probability(|1>) = 0.5  

This means the qubit has an equal chance of collapsing to 0 or 1 when measured.

In this project, superposition is created using the **Hadamard gate**.


## 3. Quantum Gates

Quantum gates are operations that change the state of a qubit.

They are similar to logic gates in classical computing, but instead of working
on bits, they work on probability amplitudes.

Quantum gates are represented using **matrices** and applied using
matrix multiplication.

This project currently supports the following gates:

### NOT Gate (Pauli-X)

The NOT gate flips the state of the qubit.

Effect:
|0> → |1>  
|1> → |0>

Matrix Representation:

[ 0  1 ]  
[ 1  0 ]

If the input state is:

|ψ> = α|0> + β|1>

After applying NOT gate:

|ψ> = β|0> + α|1>

In this project, the NOT gate is implemented by swapping alpha and beta.


### Hadamard Gate (H)

The Hadamard gate is used to create superposition.

It transforms a definite state into a combination of both states.

Matrix Representation:

(1/√2) × [  1   1 ]  
          [  1  -1 ]

Effect:

|0> → (|0> + |1>) / √2  
|1> → (|0> - |1>) / √2  

This means the qubit will have equal probability of being measured as 0 or 1.

In this project, the Hadamard gate is implemented using the formula:

newAlpha = (alpha + beta) / √2  
newBeta  = (alpha - beta) / √2


## 4. Why This Project Uses Classical DSA

Most quantum computing projects rely on quantum libraries or hardware simulators.

This project takes a different approach.

Instead of using quantum frameworks, all quantum behavior is simulated using
classical Data Structures and Algorithms.

The following concepts are used:

- Structs to represent qubits
- Arrays and matrices for quantum gates
- Graphs for entanglement simulation (planned)
- Algorithms for state transitions and probability calculations

The purpose of this approach is not performance.

The purpose is **understanding**.

By building everything from scratch, the internal working of quantum computation
becomes clearer and more intuitive from a computer science perspective.
