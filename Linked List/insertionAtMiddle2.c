#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node{
        int data;
        struct node * next;
    };
    struct node *head,*temp,*Newnode;
    
    int a=1,v=1,p,i=1;
    head=0;
    while(a){
        Newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter the Element at node %d ==>  ",v);
        scanf("%d",&Newnode->data);
        v++;
        Newnode->next=0;
        if(head==0){
            head=temp=Newnode;
        }
        else{
            temp->next=Newnode;
            temp=Newnode;
        }
        printf("Do you want to continue ? == > ");
        scanf("%d",&a);
        
    }
    
    temp=head;
    while(temp!=0){
        printf("%d -> ",temp -> data);
        temp=temp -> next;
    
    }
    
    printf("Enter the Position  ==> ");
    scanf("%d",&p);
    
    if(p==0){
        printf("\nYou have enter the Wrong Position");
    }
    else{
        temp=head;
        while(i<p){
            temp= temp->next;
            i++;
        }
        Newnode= (struct node*) malloc(sizeof(struct node));
        printf("\nEnter the data you want to insert at end: ");
        scanf("%d" , &Newnode ->data);
        Newnode->next=temp->next;
        temp->next= Newnode;
    }
    // temp=head;
    // while(temp->next!=0){           
    //     temp= temp->next;           
    // }
    // temp->next= Newnode; 
   
    
    temp=head;
    while(temp!=0){
        printf("%d -> ",temp -> data);
        temp=temp -> next;
    
    }
    
    
    
    
}