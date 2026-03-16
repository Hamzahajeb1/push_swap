# 🔢 Push_swap  
> 42 Network Project — Sorting Algorithm Optimization

![42 Badge](https://img.shields.io/badge/42-Push_swap-black?style=for-the-badge)
![C](https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c)
![Algorithm](https://img.shields.io/badge/Focus-Algorithms-orange?style=for-the-badge)
![Sorting](https://img.shields.io/badge/Sorting-Optimization-green?style=for-the-badge)

---

## 📖 Overview

**Push_swap** is an algorithmic project from the 42 curriculum focused on sorting data using a **limited set of operations** and **two stacks**.

The objective is to sort a list of integers with the **minimum number of moves**, emphasizing algorithm efficiency rather than brute force.

---

## 🧠 What You Learn

- Algorithm design & optimization  
- Sorting strategies (small & large datasets)  
- Stack data structures  
- Complexity analysis  
- Problem-solving under constraints  

---

## ⚙️ Rules

- You have **two stacks**:
  - 🅰️ Stack A (initial stack)
  - 🅱️ Stack B (empty at start)

- You must sort Stack A using only allowed operations.

---

## 🔧 Allowed Operations

| Operation | Description |
|----------|------------|
| `sa` | Swap top 2 elements of stack A |
| `sb` | Swap top 2 elements of stack B |
| `ss` | `sa` + `sb` |
| `pa` | Push top of B → A |
| `pb` | Push top of A → B |
| `ra` | Rotate A (first → last) |
| `rb` | Rotate B |
| `rr` | `ra` + `rb` |
| `rra` | Reverse rotate A |
| `rrb` | Reverse rotate B |
| `rrr` | `rra` + `rrb` |

---

## 🏗️ Project Structure

```
.
├── Makefile
├── push_swap.h
├── main.c
├── parsing/
├── operations/
├── sorting/
├── utils/
└── checker/ (bonus)
```

---

## 🚀 Usage

### 🔧 Compile
```bash
make
```

### ▶️ Run
```bash
./push_swap 2 1 3 6 5 8

---

## 🧩 Sorting Strategy

### 🔹 Small Inputs (≤ 5 numbers)
- Hardcoded optimal solutions  
- Minimal moves  

### 🔹 Large Inputs
Common strategies include:
- **Radix Sort (Binary)** ✅ (most used & efficient)  
- Chunk-based sorting  
- Index normalization  

---

## ⚡ Performance Goals

| Numbers | Expected Moves |
|--------|---------------|
| 3      | ≤ 3           |
| 5      | ≤ 12          |
| 100    | < 700         |
| 500    | < 5500        |

---

## 🔒 Key Concepts

- Stack manipulation  
- Indexing & normalization  
- Bitwise operations (Radix)  
- Move optimization  
- Algorithm efficiency  

---

## ⚠️ Challenges

- Finding the most efficient algorithm  
- Minimizing number of operations  
- Handling edge cases (duplicates, invalid input)  
- Parsing and validation  
- Debugging stack behavior  

---

## 🧪 Example

```bash
Input:
4 2 1 3

Output:
pb
pb
sa
pa
pa
```

---

## 🏁 Conclusion

Push_swap is a key project to master **algorithmic thinking and optimization**, teaching how to solve problems under strict constraints with efficient strategies.

---

## 👤 Author

**P.Prime**  
42 Network Student (1337)

---

## ⭐ Final Note

This project is not about sorting — it's about **how efficiently you can do it**.
