## **C++ STL Comprehensive Notes**
*Source: Striver (take U forward)*

---

## **1. Introduction to STL**
The **Standard Template Library (STL)** is a collection of competitive programming essentials divided into four parts:
1.  **Containers:** Data structures (Vector, Stack, etc.).
2.  **Iterators:** Used to point to memory addresses of elements.
3.  **Algorithms:** Built-in functions like `sort()`, `reverse()`.
4.  **Functions:** Utility components.

> **Pro Tip:** Use `#include <bits/stdc++.h>` to include all standard libraries at once.

---

## **2. Containers**

### **A. Pair (Utility Library)**
Used to store two elements as a single unit.
* **Syntax:** `pair<int, int> p = {1, 3};`
* **Access:** `p.first` (1), `p.second` (3).
* **Nesting:** `pair<int, pair<int, int>> p = {1, {3, 4}};`
    * Access 4 via: `p.second.second`.

### **B. Vector**
A dynamic array that can resize itself. Elements are stored in contiguous memory locations.
[Image of vector data structure]
* **Operations:**
    * `push_back(5)` / `emplace_back(5)`: Adds element to the end.
    * `v.begin()`, `v.end()`: Iterators pointing to the start and *after* the last element.
    * `v.erase(v.begin() + 1)`: Removes specific element.
    * `v.insert(v.begin() + 1, 10)`: Inserts 10 at index 1 (**Costly operation**).
* **Time Complexity:** * Access: $O(1)$
    * Insert/Delete at end: $O(1)$ (average)

### **C. List & Deque**
* **List:** Implemented as a Doubly Linked List. Supports `push_front()` which is **O(1)** (unlike vector).
* **Deque (Double-Ended Queue):** Similar to list/vector; supports front and back operations efficiently.

### **D. Stack (LIFO)**
Last-In, First-Out.

* **Operations:** `push()`, `pop()`, `top()`.
* **Complexity:** All operations are **O(1)**.

### **E. Queue (FIFO)**
First-In, First-Out.

* **Operations:** `push()`, `pop()`, `front()`, `back()`.
* **Complexity:** All operations are **O(1)**.

### **F. Priority Queue**
* **Max Heap:** Largest element stays at the top (default).
* **Min Heap:** Smallest element stays at the top.
    * *Syntax:* `priority_queue<int, vector<int>, greater<int>> pq;`
* **Complexity:** * Push/Pop: **O(log N)**
    * Top: **O(1)**

### **G. Set & Map**
| Container | Properties | Time Complexity |
| :--- | :--- | :--- |
| **Set** | Sorted + Unique | $O(\log N)$ |
| **Multiset** | Sorted + Duplicates allowed | $O(\log N)$ |
| **Unordered Set** | Unique + Randomized order | $O(1)$ (Avg) |
| **Map** | Key-Value Pairs + Sorted Keys | $O(\log N)$ |
| **Unordered Map** | Key-Value Pairs + Randomized Keys | $O(1)$ (Avg) |

---

## **3. Key Algorithms**

### **Sorting**
* **Standard:** `sort(a, a + n);` or `sort(v.begin(), v.end());`
* **Descending:** `sort(v.begin(), v.end(), greater<int>());`
* **Custom Comparator:** You can write a `bool comp(a, b)` function to define "my way" of sorting.

### **Utility Functions**
* **`__builtin_popcount(n)`:** Returns the number of set bits (1s) in binary.
* **`next_permutation(s.begin(), s.end())`:** Rearranges to the next lexicographical order. Returns `false` when no more exist.
* **`max_element(first, last)`:** Returns an iterator to the maximum value in a range.

---

### **Summary Table: Time Complexities**

| Operation | Vector | Stack/Queue | Set/Map | Priority Queue |
| :--- | :--- | :--- | :--- | :--- |
| **Insertion** | $O(1)$* | $O(1)$ | $O(\log N)$ | $O(\log N)$ |
| **Deletion** | $O(1)$* | $O(1)$ | $O(\log N)$ | $O(\log N)$ |
| **Access/Top** | $O(1)$ | $O(1)$ | $O(\log N)$ | $O(1)$ |