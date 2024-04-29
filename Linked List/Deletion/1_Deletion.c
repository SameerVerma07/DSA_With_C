#include<stdio.h>
#include<stdlib.h>

//creating a stucture
struct node{
        int data;
        struct node * next;
    };

//Creating a Function for the Creation of the Linked list
struct node * createList (struct node * newnode , struct node * head, struct node * temp){
    int a;
    while(a){
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("The data is  ==  ");
        scanf("%d",&newnode -> data);
        newnode ->next = NULL;
        printf("\n");

        if(head==0){
            head=temp=newnode;
        }
        else{
            temp ->next = newnode;
            temp = newnode;
        }
        scanf("%d",&a);
    }
    printf("You have created a list succesfully\n");
    return head;
}


// Creating a Function for displaying of the Linked List elements
void display(struct node * temp,struct node * head){
    temp = head;
    printf("\n\n");
    while(temp != NULL){
        printf("%d -> ",temp ->data);
        temp = temp ->next;
    }
    temp = head;
    printf("\n\n");
}

//Insertion at the begning

struct node * insertionAtBegning(struct node * head){
    struct node * newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nElement you want to Enter at the Begning :- ");
    scanf("%d",&newnode ->data);
    newnode ->next = head;
    head = newnode;
    return head;
}

struct node * insertionAtEnd(struct node * head, struct node * temp){
    temp = head;

    struct node * newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nElement you want to Enter at the Ending :- ");
    scanf("%d",&newnode ->data);
    while(temp != NULL){
        temp = temp ->next;
    }
    temp ->next = newnode;
    newnode -> next = NULL;
    temp = newnode;

    return head;

}


//Main Function
int main(){
    struct node *head, *temp, *ptr, *newnode;
    head = 0;
    int a;
    head = createList(newnode,head,temp);

    display(temp,head);
    head = insertionAtBegning(head);
    display(temp,head);
    
    head = insertionAtEnd(head,temp);
    display(temp,head);




    return 0;
}