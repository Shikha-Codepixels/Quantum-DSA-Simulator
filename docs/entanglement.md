# Entanglement in Quantum Computing

Entanglement is one of the most important and non-classical feature of quantum computing.

It describes a situation where multiple qubits become mathematically and physically linked, such that the state of one qubit cannot be described independently of the other.

---

## 1. Seperable vs Entangled states

For a two-qubit system, the general state is :

|ψ> = a|00> + b|01> + c|10> + d|11>

### Separable State

A state is called separable (not entangled) if it can be written as:

(|α|0> + β|1>) ⊗ (γ|0> + δ|1>)

In this case, the two qubits behave independently.

---

### Entangled State

A state is entangled if it cannot be expressed as the tensor product
of two individual qubit states.

In an entangled system, measuring one qubit immediately affects
the state of the other.

---

## 2. Bell State Example

One of the simplest entangled states is the Bell state:

|ψ> = (1/√2)(|00> + |11>)

Here:
- a = 1/√2
- b = 0
- c = 0
- d = 1/√2

This state cannot be separated into two individual qubits,
which makes it entangled.

---

## 3. Entanglement Detection Condition

For pure two-qubit states, a simple mathematical condition can be used:

If:

a × d = b × c

Then the state is separable.

If:

a × d ≠ b × c

Then the state is entangled.

This condition is derived from the requirement that separable states
must be factorizable.

---

## 4. Entanglement Detection in This Project

This project uses the condition:

a × d ≠ b × c

to algorithmically determine whether a two-qubit state is entangled.

The check is implemented using a simple comparison between the
probability amplitudes of the quantum state.

This approach keeps the logic simple while preserving conceptual clarity.

---

## 5. Why Entanglement Matters

Entanglement is essential for:

- Quantum algorithms
- Quantum teleportation
- Quantum communication
- Quantum advantage over classical systems

Without entanglement, many quantum algorithms lose their power.

Understanding entanglement is a key step toward understanding
quantum computation as a whole.