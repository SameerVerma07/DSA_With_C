#include<stdio.h>
#include<stdlib.h>

int main()
{
    struct node{
        int data;
        struct node *next;
    };
    
    int a,b=1,c=1;
    struct node *head,*temp,*Newnode;
    head = 0;
    while(a)
    {
        Newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the List at position %d ==== ",b);
        scanf("%d",&Newnode -> data);
        
        Newnode -> next =0;
        if(head==0){
            head = temp = Newnode;
        }
        else{
            temp -> next = Newnode;
            temp = Newnode;
        }
        b++;
        printf("Do you want to continues === ? ===== ");
        scanf("%d",&a);
        
    }
    
    temp= head;
    while(temp !=0 ){
        printf("%d -> ",temp -> data);
        temp= temp -> next;
    }
    temp = head;
    printf("\nDeleting the 1st Element\n");
    head=head -> next;
    printf("%d This element is going to remove from the linked list ",*temp);
    free(temp);
    temp= head;

    while(temp !=0 ){
        printf("%d -> ",temp -> data);
        temp= temp -> next;
    }
    printf("\nDeleting the Last lement \n");
    // while(temp !=0 ){
    //     if (temp -> next !=0) {
    //     temp= temp -> next;}
    //     else{
    //         printf("%d This element is going to remove from the linked list ",*temp->next);
    //         free(temp->next);
    //     }
    // }
    temp = head;

    while(temp !=0 ){
        printf("%d -> ",temp -> data);
        temp= temp -> next;
    }
    temp =head;
    // deteling element at end
    while(temp != 0){
    //    printf("%d -> ",temp -> data);
       if(temp -> next == 0){
        // ml=temp;
        temp = temp -> next;
       } 
       else{
        temp = temp -> next;
       }
    }
    printf("%d",*temp);
}


