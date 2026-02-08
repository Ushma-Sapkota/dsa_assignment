//Write a program to convert an infix mathematical expression to postfix and evaluate it. 
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define MAX 30

char stack[MAX];
int top=-1;//initialize the top element

//check if the stack is full
int isFull(){
    return top==MAX-1;
}

//check if the stack is empty
int isEmpty(){
    return top==-1;
}

void push(char x){
    if(isFull()){
        printf("Stack overflow. Cannot push %c to the stack.\n");
    }
    else{
    stack[++top]=x;
    }
}

int pop(){
    if(isEmpty()){
        printf("Stack underflow. No element to pop.\n");
    }
    else{
        return stack[top--];
    }
}

//for comparing ptiorities
int priority(char x){
    if(x == '('){ return 0; }
    if( x == '+' || x == '-'){ return 1;}
    if( x == '*' || x == '/'){ return 2;}
    return 0;
}

int main(){
    char exp[30];
    printf("Enter a infix expression:");
    gets(exp);
    printf("The postfix expression:");
    for(int i=0;exp[i]!='\0';i++){
        char ch = exp[i];

        if(isalnum(ch)){ 
            printf("%c", ch);}
        else if(ch=='('){
            push(ch);}
        else if(ch==')') {
            while(stack[top]!='('){//pop top elements until top element is '('
                printf("%c", pop());
            }
            pop();
            }
        else{
            while (priority(stack[top]) >= priority(ch)){
                printf("%c", pop());  // pop operators with higher or equal precedence
            }
            push(ch);
        }
    }

    while (top != -1)
        printf("%c", pop());

    return 0;
}





