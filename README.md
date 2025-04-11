# 📚 Big-O Notation Cheat Sheet

## 🔁 Common Loop Patterns

| Pattern                                | Time Complexity | Notes                                       |
|----------------------------------------|------------------|---------------------------------------------|
| `for (i = 0; i < n; i++)`              | O(n)             | Linear loop                                 |
| `for (i = 0; i < n; i += 98)`          | O(n)             | Step size doesn't change complexity         |
| `for (i = 1; i < n; i *= 2)`           | O(log n)         | Halving or doubling = logarithmic           |
| Nested loop `for i` and `for j`        | O(n²)            | Quadratic if both go up to n                |
| Nested loop `i = 0..n` and `j *= 2`    | O(n log n)       | Linear × logarithmic                        |
| Recursive `fibonacci(n)` (no memo)     | O(2ⁿ)            | Exponential without memoization             |
| Recursive `factorial(n)`              | O(n)             | One recursive call per level                |

---

## 🧮 Arrays (Unsorted)

| Operation           | Time Complexity | Explanation |
|---------------------|------------------|-------------|
| Access `arr[n]`     | O(1)             | Direct index access |
| Insert at end       | O(1)             | If space available |
| Insert at index     | O(n)             | Need to shift elements |
| Search              | O(n)             | Linear scan |
| Update by index     | O(1)             | Direct write |

---

## 🔗 Singly Linked List

| Operation                          | Time Complexity | Notes |
|-----------------------------------|------------------|-------|
| Access `n`-th element             | O(n)             | Traverse from head |
| Insert after known node          | O(1)             | Pointer available |
| Remove after known node          | O(1)             | Pointer available |
| Search value                     | O(n)             | Need to scan |
| Set value via pointer            | O(1)             | No traversal needed |

---

## 🔗 Doubly Linked List

| Operation                          | Time Complexity | Notes |
|-----------------------------------|------------------|-------|
| Access `n`-th element             | O(n)             | Traverse from head or tail |
| Insert after known node          | O(1)             | Direct pointer update |
| Remove known node                | O(1)             | Adjust prev/next pointers |
| Search value                     | O(n)             | Still linear scan |
| Set value via pointer            | O(1)             | Constant time |

---

## 🧠 Recursion Highlights

| Pattern                         | Time Complexity | Tips |
|---------------------------------|------------------|------|
| Basic factorial recursion       | O(n)             | One call per depth |
| Fibonacci (no memo)             | O(2ⁿ)            | Very inefficient |
| Fibonacci (with memo)           | O(n)             | Optimized via caching |
| Divide and Conquer (MergeSort)  | O(n log n)       | Classic pattern |

---

## ✅ Quick Tips

- **O(1)**: Constant time — best case.
- **O(n)**: Linear — grows with input.
- **O(log n)**: Halving/doubling — binary search, tree height.
- **O(n log n)**: Nested loop with log/recursion — merge sort.
- **O(n²)**: Nested loop over same input — bubble sort.
- **O(2ⁿ), O(n!)**: Recursive explosions — avoid if possible.

---


