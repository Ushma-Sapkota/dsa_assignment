//Write a program to build the min and max heap from an unsorted array
#include <stdio.h>
#include<stdlib.h>
#define MAX 100 

 int heap[MAX];         // Array to store heap elements
int heapSize = 0; 

//Maintains the heap property for a subtree rooted at index i
void heapify(int arr[], int n, int i, int isMax) {
    int extreme = i;
    int l = 2*i + 1;
    int r = 2*i + 2;

    if (l < n && (isMax ? arr[l] > arr[extreme] : arr[l] < arr[extreme]))
        {extreme = l;}

    if (r < n && (isMax ? arr[r] > arr[extreme] : arr[r] < arr[extreme]))
        {extreme = r;}

    if (extreme != i) {
        int temp = arr[i];
        arr[i] = arr[extreme];
        arr[extreme] = temp;
        heapify(arr, n, extreme, isMax);
    }
}

//Build a heap from an unsorted array
void buildHeap(int arr[], int n, int isMax) {
    for (int i = n/2 - 1; i >= 0; i--){
        heapify(arr, n, i, isMax);
    }
}

int main() {
    int arr[] = {4, 10, 3, 5, 1};
    int n = 5;

    buildHeap(arr, n, 1);
    printf("Max Heap: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    buildHeap(arr, n, 0);
    printf("\nMin Heap: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    return 0;
}
