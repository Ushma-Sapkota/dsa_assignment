Program 6: Min Heap and Max Heap Implementation

1. Introduction
This program builds both Min Heap and Max Heap data structures from an unsorted array using the heapify algorithm.

2. Data Structure Definitions
Heap is a specialized tree based data structure that satisfies the heap property. It is a complete binary tree where nodes are arranged in a specific order based on their values.
A Max Heap is a complete binary tree where every parent node is greater than or equal to its children.
A Min Heap is a complete binary tree where every parent node is less than or equal to its children.
- `heap[]`: A fixed-size array that is used to store heap elements.
- `heapSize`: Tracks the current number of elements in the heap.
- `MAX`: Constant defining the maximum capacity of the heap.

3. Function Description
a.`void heapify(int arr[], int n, int i, int isMax)`
Maintains the heap property for a subtree rooted at index i.
i. Initialize extreme as the root index i
ii. Calculate left child index: l = 2*i + 1
iii. Calculate right child index: r = 2*i + 2
iv. Compare root with left child:
   - For Max Heap: if left child > root, update extreme
   - For Min Heap: if left child < root, update extreme
v. Compare current extreme with right child:
   - For Max Heap: if right child > extreme, update extreme
   - For Min Heap: if right child < extreme, update extreme
vi. If (extreme ≠ i), swap arr[i] with arr[extreme]
vii. Recursively heapify the affected subtree

b.`void buildHeap(int arr[], int n, int isMax)`
Builds a complete heap from an unsorted array.
i. Find the last non-leaf node: (startIndex = n/2 - 1)
ii. Iterate from last non-leaf node to root (reverse level order)
iii. Call heapify() on each node

4.`main() function` overview
The main function implements following steps:
a. Initialization:Define unsorted array [4, 10, 3, 5, 1] with size 5
b. Max Heap Construction: Call buildHeap(arr, 5, 1) to create max heap
c. Display Max Heap: Print all elements in max heap order
d. Min Heap Construction: Call buildHeap(arr, 5, 0) to reorganize into min heap
e. Display Min Heap: Print all elements in min heap order
f. Termination: Return 0 for successful execution

5. Sample Output
Max Heap: 10 5 3 4 1
Min Heap: 1 4 3 10 5
