#include<stdio.h>
int main(){
    int arr[50],i,size,pos;
    printf("Enter the Size of array:- ");
    scanf("%d",&size);

    printf("Enter the Elements of array :- \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    
    for(i=0;i<size;i++)
    {
        printf("%d  ",arr[i]);
    }

    printf("\nEnter the position of element you want to delete :- ");
    scanf("%d",&pos);

    if(pos<=0 || pos>size)
    {
        printf("You have Enter the Wrong Index\n ");
    }
    else{
        for(i=pos-1;i<size-1;i++){
            arr[i]=arr[i+1];
        }
        size--;
    }
    for(i=0;i<size;i++)
    {
        printf("%d  ",arr[i]);
    }

    

    return 0;
} 