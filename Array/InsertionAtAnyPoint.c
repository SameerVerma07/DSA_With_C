#include<stdio.h>
int main()
{
    int arr[50],size,i,pos,val;
    printf("Enter the Size of array :- ");
    scanf("%d",&size);
    if(size>50){
        printf("You have enter the Larger size of array : ");
    }
    else
    {
        printf("Please Enter the Values of array :- \n");
        for(i=0;i<size;i++)
        {
            scanf("%d",&arr[i]);
        }
        //taking the inputs from user what value and where he/she want to enter
    printf("Enter the Position you want to Enter the Value:- ");
    scanf("%d",&pos);
    if(pos<=0 || pos>size+1)
    {
        printf("You Have enter the Wrong Postion :- ");
    }
    else{
        printf("Enter the value :- ");
        scanf("%d",&val);
        for(i=size-1;i>=pos-1;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[pos-1]=val;
        size++;
    }
    printf("\n Your Array is :- \n");
    //printing the array
    for(i=0;i<size;i++)
    {
        printf("\n %d",arr[i]);
    }
    }
return 0;
}