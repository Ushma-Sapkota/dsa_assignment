Program 1: Checking Balanced Parentheses Using Stack

1. Introduction
This program checks if a given mathematical expression contains a balanced number of parentheses. The symbols considered are parentheses `()`, square brackets `[]`, and curly braces `{}`. A stack data structure is used to ensure that every opening bracket has a corresponding and correctly ordered closing bracket.

2. Data Structure Definition
A stack is implemented using a character array.The stack follows the Last In First Out (LIFO) principle.
`stack[MAX]` : stores opening brackets in the expression  
`top` : integer variable that stores the index of the top element of the stack  
`MAX` : defines the maximum size of the stack  


3. Function Description

a.`isEmpty()`
-Checks whether the stack is empty.

b. `isFull()`
-Checks whether the stack is full.

c. `push(char x)`
-Pushes an opening bracket to stack if space is available.
-Displays an overflow message if the stack is full

d.`pop()`
-Removes and returns the top element of the stack.
- Displays an underflow message if the stack is empty

e.`isMatching(char open, char close)`
Checks whether a given pair of opening and closing brackets match correctly.

f.`isBalanced(char exp[])`
Traverses the expression character by character.
- Pushes opening brackets onto the stack
- Pops and matches brackets when a closing bracket is found
- Returns `1` if the expression is balanced
- Returns `0` if the expression is not balanced


4. main() Function Overview
The `main()` function:
1. Takes a mathematical expression as input using `fgets()`
2. Calls the `isBalanced()` function
3. Displays whether the expression is balanced or not


 5. Sample Output
a. Input:Enter expression:a + (b − c) ∗ (d 
   Output:Expression is not balanced.

b. Input: Enter expression:m+ [a − b ∗ (c + d ∗ {m)]
   Output:Expression is not balanced.

c. Input:Enter expression:a + (b − c) 
   Output:Expression is balanced.
