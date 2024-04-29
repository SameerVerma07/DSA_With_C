#include<stdio.h>
#include<stdlib.h>
int main(){
    struct node
    {
        int data;
        struct node * next;
    };
    
    struct node *head,*temp,*Newnode;
    
    head=0;
    int a,v,i=1 ,j=1;
    while(a){
        Newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the Elemnts :- ");
        scanf("%d",& Newnode -> data);
        Newnode -> next =0;
        if(head ==0){
            head=temp=Newnode;
        }
        else{
            temp->next=Newnode;
            temp=Newnode;
        }

        printf("Do you Want to add the elemnts/n enter 1 for yes 0 for no");
        scanf("%d",&a);
        
        j++;
    }

    temp=head;
    while(temp != 0){
       printf("%d -> ",temp -> data);
       temp = temp -> next; 

    }
    printf("\nEnter the Position You Want To Insert the Element :- ");
    scanf("%d",&v);
    if(j<v){
        printf("\nYou Have Enter the Out Of the Range :- ");
    }
    else{
        temp=head;
        while(i<v){
        temp = temp->next;
        i++;
        }
        Newnode = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter the Element you want to insert at Begning :- ");
        scanf("%d",&Newnode -> data);
        Newnode -> next = temp->next;
        temp->next = Newnode;

    }
    temp=head;
    while(temp != 0){
       printf("%d -> ",temp -> data);
       temp = temp -> next; 

    }

}