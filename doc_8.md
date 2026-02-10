Program 8: Sorting Random Numbers Using Different Algorithms in C

1. Introduction
A C program is written that generates a list of N random integers in the range [1, 1000], allows the user to choose a sorting algorithm, sorts the numbers accordingly, and displays the number of comparisons and swaps performed.

2. Data Structures Description:
a. Array
- An integer array is used to store random numbers.
- Another array is used to store the original order of elements.

b. Global Variables
-`comparisons` counts the number of key comparisons.
-`swaps` counts the number of swaps or shifts (where applicable).

3. Description of Functions
a. `swap(int *a, int *b)`
-Swaps two integer values.
-Increments the swap counter.

b. `bubbleSort(int arr[], int n)`
-Repeatedly compares adjacent elements and swaps them if they are in the wrong order.
-Counts both comparisons and swaps.

c. `selectionSort(int arr[], int n)`
-Finds the minimum element from the unsorted part and swaps it with the first element.
-Counts comparisons and swaps.

d. `insertionSort(int arr[], int n)`
-Inserts each element into its correct position in the sorted portion.
-Counts comparisons and shifts as swaps.

e. `mergeSort(int arr[], int l, int r)`
-Uses divide-and-conquer technique to sort the array.
-Counts comparisons only (swaps are not applicable).

f. `display(int arr[], int n)`
-Prints all elements of the array.

4. Overview of `main()` Function
a.Takes input for number of elements N.
b.Generates N random numbers using rand().
c.Displays the generated numbers.
d.Asks the user to select a sorting algorithm.
e.Calls the selected sorting function.
f.Displays the array before and after sorting.
g.Prints total number of comparisons and swaps.

5. Sample Output
a. `Output sample 1:`
Enter number of elements: 5

Generated numbers:
60 104 414 192 318

Choose Sorting Algorithm:
1. Bubble Sort
2. Selection Sort
3. Insertion Sort
4. Merge Sort
Enter your choice: 3

Array before sorting:
60 104 414 192 318

Array after sorting:
60 104 192 318 414

Total Comparisons: 6
Total Swaps: 2

b. `Output sample 2:`
Enter number of elements: 5

Generated numbers:
151 147 323 605 214

Choose Sorting Algorithm:
1. Bubble Sort
2. Selection Sort
3. Insertion Sort
4. Merge Sort
Enter your choice: 4

Array before sorting:
151 147 323 605 214

Array after sorting:
147 151 214 323 605

Total Comparisons: 8
Total Swaps: 0

c. `Output sample 3:`
Enter number of elements: 5

Generated numbers:
380 872 631 101 338 

Choose Sorting Algorithm:
1. Bubble Sort
2. Selection Sort
3. Insertion Sort
4. Merge Sort
Enter your choice: 1

Array before sorting:
380 872 631 101 338

Array after sorting:
101 338 380 631 872

Total Comparisons: 10
Total Swaps: 7

d. `Output sample 4:`
Enter number of elements: 5

Generated numbers:
419 781 393 716 41

Choose Sorting Algorithm:
1. Bubble Sort
2. Selection Sort
3. Insertion Sort
4. Merge Sort
Enter your choice: 2

Array before sorting:
419 781 393 716 41

Array after sorting:
41 393 419 716 781

Total Comparisons: 10
Total Swaps: 3

