Program 3: Reverse Traversal of a Singly Linked List

1. Introduction
This program performs reverse traversal of a singly linked list using recursion. A singly linked list is created by inserting elements at the end. The linked list is displayed in normal order first, followed by reverse traversal.

2. Data Structure Definition
The program uses a singly linked list, which is defined using a structure in C.
A node contains two parts:
a. `data` stores the integer value of the node.
b. `next` stores the address of the next node in the list.

A global pointer `head` is used to point to the first node of the linked list.
Dynamic memory allocation (malloc) is used to create new nodes during runtime.

3. Function Description:
a.`insert(int data)`
Inserts a new node at the end of the linked list.
-Allocates memory for a new node.
-Assigns the given value to the node.
-Sets the next pointer to NULL.
-If the list is empty, the new node becomes the head.
-Else the node is linked at the end of the list.

b.`reverse(struct node *temp)`
Performs reverse traversal of the linked list using recursion.
-The function recursively calls itself until it reaches the last node of the linked list.
-When the base condition (temp == NULL) is met, the function returns.
-During the backtracking phase of recursion, the data of each node is printed.
-This results in elements being displayed in reverse order.

c.`display()`
Displays all the elements of the linked list.
-Traverses the list starting from head.
-Prints the data value of each node until the end of the list is reached.

4. main() Function Overview
The `main()` function controls the execution of the program:
a. Inserts several elements into the linked list using the insert() function.
b. Displays the elements of the linked list before reversal.
c. Calls the reverse() function to print elements in reverse order.
d. Terminates the program after displaying the output.

5. Sample Output:
Elements in linked list in normal order are:
20
30
40
50
Elements in linked list in reverse order are:
50
40
30
20
