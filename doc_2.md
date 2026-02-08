Program 2: Infix to Postfix Conversion Using Stack

1. Introduction
This program converts a given infix mathematical expression into its equivalent postfix expression using a stack. Operator precedence and associativity rules are applied during the conversion process.

2. Data Structure Definition
A stack is implemented using a character array to store operators and parentheses.The stack follows the LIFO (Last In First Out) principle.
- `stack[MAX]` : stores operators and parentheses  
- `top` : indicates the top element of the stack  
- `MAX` : maximum stack size 

3. Function Description
a. `isFull()`
Checks whether the stack is full.

b. `isEmpty()`
Checks whether the stack is empty.

c.`push(char x)`
Pushes an operator or parenthesis onto the stack.
- Displays overflow message if the stack is full

d.`pop()`
Removes and returns the top element from the stack.
- Displays underflow message if the stack is empty

e. `priority(char x)`
Determines operator precedence.
- `(` → lowest priority
- `+ , -` → priority 1
- `* , /` → priority 2

4. main() Function Overview
The `main()` function:
a. Accepts an infix expression as input
b. Scans the expression from left to right
c. Prints operands directly
d. Uses stack operations to correctly place operators based on precedence
e. Prints the final postfix expression


5. Sample Output
a.  Input:Enter a infix expression:a+b*c
    Output:The postfix expression:abc*+

b. Input:Enter a infix expression:a+(b-c)*d
   Output:The postfix expression:abc-d*+
