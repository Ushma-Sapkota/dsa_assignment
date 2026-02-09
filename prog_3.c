//Write a program to perform reverse traversal algorithm in the linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head=NULL;

//insert node
void insert(int data){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL){// if list is empty
        head=newnode;
    }
    else{
        struct node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
}

//reverse traversal mechanism
void reverse(struct node *temp){
    if(temp==NULL)
        return;
    reverse(temp->next);
    printf("%d\n",temp->data);
}

//function to display elements of linked list
void display(){
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp = temp->next;
    }
}

int main(){
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    printf("Elements in linked list in normal order are:\n");
    display();
    printf("Elements in linked list in reverse order are:\n");
    reverse(head);
    return 0;
}