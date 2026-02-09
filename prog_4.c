//Write a program to insert a node(after given node) and delete the node in a doubly linked list.
#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head=NULL;

//Creating linked list
void insert_end(int data){
    struct node *newnode= (struct node*)malloc(sizeof(struct node));
    newnode->prev=NULL;
    newnode->data=data;
    newnode->next=NULL;

    if(head==NULL){
        head=newnode;
    }
    else{
        struct node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;
    }
}

//Inserting a node after the node with given key
int insert_middle(int data,int key){
    if(head==NULL){
        printf("The linked list is empty and the key doesn't exist.\n");
        return 0;
    }

    struct node *newnode= (struct node*)malloc(sizeof(struct node));
    newnode->prev=NULL;
    newnode->data=data;
    newnode->next=NULL;

    struct node *temp = head;
    while(temp!=NULL && temp->data!=key){//traversing the list until key is found or list ends
        temp=temp->next;
    }
    if(temp == NULL){
        printf("Key value %d is not found in the list.\n",key);
        free(newnode);
    }
    else{
        newnode->next=temp->next;
        newnode->prev=temp;
        temp->next->prev=newnode;
        temp->next=newnode;
    }
}

//deleting the node with given key
int delete(int key){
    if(head==NULL){
        printf("The linked list is empty.\n");
        return 0;
    }
    struct node *temp = head;
    while(temp!=NULL && temp->data!=key){
        temp=temp->next;
    }
    if(temp == NULL){
        printf("Key value %d is not found in the list.\n",key);
        return 0;
    }
    if(temp==head){ 
        if(temp->next==NULL){//only one node in list
        free(temp);
        temp=NULL;
        head=NULL;
        }
        else{//if first node is to be deleted
            head=temp->next;
            head->prev=NULL;
            free(temp);
            temp=NULL;
        }
    }
    else if(temp->next==NULL){ //if last node is to be deleted;
        temp->prev->next=NULL;
        free(temp);
        temp=NULL;
    }
    else{//nodeis in middle
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
        temp=NULL;
    }
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
    insert_end(20);
    insert_end(30);
    insert_end(40);
    insert_end(50);
    printf("The elements in the linked list are:\n");
    display();

    insert_middle(60,40);
    printf("The elements in the linked list after insertion are:\n");
    display();

    delete(30);
    printf("The elements in the linked list after deletion are:\n");
    display();
    return 0;
}