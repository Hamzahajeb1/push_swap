# 🔢 Push_swap

> Sorting data on a stack using a limited set of operations.

**Push_swap** is a 42 project focused on **sorting algorithms and optimization**.  
The objective is to sort a stack of integers using **two stacks** and a **restricted set of operations**, while minimizing the number of moves.

This project develops skills in:

- algorithm design
- complexity analysis
- stack manipulation
- optimization strategies
- parsing and error handling

---

# 🧠 Project Concept

You are given a stack **A** filled with integers.  
Your goal is to sort them in **ascending order** using another empty stack **B**.

However, you can only use a specific set of operations.

The program outputs the **sequence of instructions** needed to sort the stack.

---

# 📦 Stacks
Stack A (initial)
[ 4 ]
[ 2 ]
[ 7 ]
[ 1 ]
[ 3 ]

Stack B
(empty)

Goal:
Stack A (sorted)
[ 1 ]
[ 2 ]
[ 3 ]
[ 4 ]
[ 7 ]


---

# ⚙️ Allowed Operations

### Swap

| Operation | Description |
|------|------|
| `sa` | swap first two elements of stack A |
| `sb` | swap first two elements of stack B |
| `ss` | sa and sb at the same time |

---

### Push

| Operation | Description |
|------|------|
| `pa` | push the top element of B to A |
| `pb` | push the top element of A to B |

---

### Rotate

| Operation | Description |
|------|------|
| `ra` | shift up all elements of A |
| `rb` | shift up all elements of B |
| `rr` | ra and rb at the same time |

---

### Reverse Rotate

| Operation | Description |
|------|------|
| `rra` | shift down all elements of A |
| `rrb` | shift down all elements of B |
| `rrr` | rra and rrb at the same time |

---
