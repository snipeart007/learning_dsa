### **Video 14: Selection, Bubble, and Insertion Sort**
These are the fundamental $O(N^2)$ sorting algorithms.

* **Selection Sort**
    * **What it does:** Repeatedly selects the minimum element from the unsorted portion and swaps it into its correct position at the beginning.
    * **Time Complexity:** $O(N^2)$ (Best, Average, Worst).
    * **Space Complexity:** $O(1)$.
    * **Implementation:** Iterative; uses nested loops to find the minimum index and perform a swap.
    

* **Bubble Sort**
    * **What it does:** Compares adjacent elements and swaps them if they are in the wrong order, "bubbling" the largest element to the end in each pass.
    * **Time Complexity:** $O(N^2)$ (Worst/Average), $O(N)$ (Best case with "didSwap" optimization).
    * **Space Complexity:** $O(1)$.
    * **Implementation:** Iterative; nested loops with adjacent comparisons and conditional swaps.
    

* **Insertion Sort**
    * **What it does:** Builds a sorted section by taking one element at a time and shifting previous elements to "insert" it into its correct spot.
    * **Time Complexity:** $O(N^2)$ (Worst/Average), $O(N)$ (Best case).
    * **Space Complexity:** $O(1)$.
    * **Implementation:** Iterative; outer loop picks the element, inner loop shifts elements to create the gap.
    

---

### **Video 15: Merge Sort**
* **What it does:** A divide-and-conquer algorithm that recursively splits the array into two halves until they are single elements, then merges them back in sorted order.
* **Time Complexity:** $O(N \log N)$ (Best, Average, Worst).
* **Space Complexity:** $O(N)$ (Requires a temporary array for the merging process).
* **Implementation:** **Recursive**; uses a `mergeSort()` function for division and a `merge()` function for sorted combination.


---

### **Video 16: Quick Sort**
* **What it does:** Picks a "pivot" element and rearranges the array so elements smaller than the pivot move to the left and larger ones move to the right.
* **Time Complexity:** $O(N \log N)$ (Average), $O(N^2)$ (Worst case if pivot is always the smallest/largest).
* **Space Complexity:** $O(1)$ auxiliary space (ignoring the $O(\log N)$ recursive stack space).
* **Implementation:** **Recursive**; utilizes a `partition()` function to find the pivot's final position and calls itself on the resulting halves.


---

### **Summary Comparison Table**

| Algorithm | Strategy | Best Time | Worst Time | Space |
| :--- | :--- | :--- | :--- | :--- |
| **Selection** | Select Min | $O(N^2)$ | $O(N^2)$ | $O(1)$ |
| **Bubble** | Adjacent Swap | $O(N)$ | $O(N^2)$ | $O(1)$ |
| **Insertion** | Shift & Insert | $O(N)$ | $O(N^2)$ | $O(1)$ |
| **Merge** | Split & Merge | $O(N \log N)$ | $O(N \log N)$ | $O(N)$ |
| **Quick** | Pivot Partition | $O(N \log N)$ | $O(N^2)$ | $O(1)$ |