#include<stdio.h>
int main()
{
    int arr[50], size,i;
    printf("Enter the size of arrray :- ");
    scanf("%d",&size);
    printf("Enter the elements of array :- \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    

    printf("\nThe array you formed is :- \n");

    for (i=0;i<size;i++)
    {
        printf("\n%d",arr[i]);
    }
    return 0;
}
