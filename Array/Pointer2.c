// Question link
// https://www.w3resource.com/c-programming-exercises/pointer/c-pointer-exercise-17.php
// Date 17-09-2023
// by sameer verma
//problem is  to print  flip/reverse order of the array  using the Pointer 

#include<stdio.h>
int main ()
{
    int n,*p; //intiatlizing the n, and pointer p
    printf("Enter the n. of Elements of array :- ");
    scanf("%d",&n);
    
    int a[n];
    p=a; // here we are stroing the address of a in p means array 1st elemnts address 
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d Element :- ",i+1);
        scanf("%d",p);  //storing the value in array using the pointer , means pointing to array position and storing the value
        p++;    //using to point the next slot/position in array
    }
    
    p=&a[n-1]; // here we are storing the address of  last elements of array in p
    printf("The elements in reverse order is \n");
    for(int i=0;i<n;i++)
    {
        printf("The %d Position Element  is :- %d\n",n-i,*p);    //here we are printing the array value using the derefreshing operator
        p--;    //using to point Element before address
    }
}
