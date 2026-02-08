/*Write a program to check if any given mathematical expression has a balanced number of
parentheses or not?*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
#define MAX 100

char stack[MAX];
int top=-1; //initialize top element to -1 i.e empty stack

//check i stack is empty
int isEmpty(){
    return top==-1;
}

//check if stack is full
int isFull(){
    return top==MAX-1;
}

void push(char x){
    if(isFull()){
        printf("Stack overflow. Cannot push %c into stack.\n",x);
    }
    else{
        stack[++top]=x;
    }
}

char pop(){
    if(isEmpty()){
        printf("Stack underflow. No elements to pop\n");
         return '\0';
    }
    return stack[top--];//return top element 
}

//Check if brackets are matching
int isMatching(char open,char close){
    if(open=='(' && close==')') {return 1;}
    if(open=='[' && close==']') {return 1;}
    if(open=='{' && close=='}') {return 1;}
    return 0;
}

int isBalanced(char exp[]){
    for(int i=0;i<strlen(exp);i++){
        char ch=exp[i];
        if (ch=='(' || ch=='[' || ch=='{'){
        push(ch);}
        else if (ch==')' || ch==']' || ch=='}'){
        if (top == -1 || !isMatching(pop(), ch))
                return 0; //not balanced
        }
    }
    return top== -1;
}

int main(){
    char exp[100];
    printf("Enter expression:");
    fgets(exp, MAX, stdin);

     if(isBalanced(exp)){
     printf("Expression is balanced.\n");}
     else{
     printf("Expression is not balanced.\n");}
     return 0;
}


