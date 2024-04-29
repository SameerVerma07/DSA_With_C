#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node{
        int data;
        struct node * next;
    };
    struct node * head,*newNode,*temp;
    head=0;
    int choice=1;
    while(choice){
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the Data :- ");
        scanf("%d",&newNode -> data);
        newNode -> next = 0;
        if(head==0){
            head=temp=newNode;
        }
        else{
            temp -> next = newNode;
            temp = newNode;
        }
        printf("Do you Want to Enter the Data ? press 1 for yes 0 for Exit :- ");
        scanf("%d",&choice);
    }
    temp=head;
    while(temp !=0 ){
        printf("| %d ||%p | -->" ,temp -> data ,temp -> next);
        temp = temp -> next;
    }
    
}