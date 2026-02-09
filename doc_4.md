Program 4: Insertion and Deletion in a Doubly Linked List

1. Introduction
This program demonstrates the implementation of a doubly linked list in C. A doubly linked list allows traversal in both forward and backward directions by maintaining two pointers in each node.
It supports the following operations:
- Insertion of nodes at the end of the list
- Insertion of a node after a given key
- Deletion of a node with a given key
- Display of the linked list elements

2. Data Structure Definition
The program uses a doubly linked list, which is defined using a structure in C.
A node contains two parts:
Each node in the doubly linked list contains:
-`prev`: Pointer to the previous node
-`data`: Integer value stored in the node
-`next`: Pointer to the next node

A global pointer `head` is used to point to the first node of the linked list.
Dynamic memory allocation (malloc) is used to create new nodes during runtime.

3. Function Descriptions
a.`insert_end(int data)`
Inserts a new node at the end of the doubly linked list.
-Allocates memory for a new node
-If the list is empty, the new node becomes the head
-Otherwise, traverses to the last node and updates pointers accordingly

b.`insert_middle(int data, int key)`
Inserts a new node after a node containing a given key value.
-Checks if the list is empty
-Traverses the list to find the node with the given key
-If the key is found, the new node is inserted after it
-Pointer adjustments ensure both forward and backward links remain correct
-If the key is not found, a message is displayed

c.`delete(int key)`
Deletes the node containing the specified key value.
-Checks if the list is empty
-Searches for the node containing the key
-Handles three cases:
    -Deleting the first node
    -Deleting the last node
    -Deleting a middle node
-Frees allocated memory after deletion

d.`display()`
Displays all elements of the doubly linked list from beginning to end.
-Starts traversal from the head node
-Prints the data of each node until the end of the list is reached

4. Organization of main() Function
The `main()` function controls the flow of the program as follows:
a.Inserts nodes with values 20, 30, 40, and 50 at the end of the list
b.Displays the initial linked list
c.Inserts a new node with value 60 after the node containing 40
d.Displays the list after insertion
e.Deletes the node with value 30
f.Displays the list after deletion


5. Sample Output:
The elements in the linked list are:
20
30
40
50
The elements in the linked list after insertion are:
20
30
40
60
50
The elements in the linked list after deletion are:
20
40
60
50