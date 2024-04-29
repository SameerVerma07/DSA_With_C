#include <stdio.h>

int main()
{
    int a[]={10,20,30,40,50},i,*p;
    p=a;
    printf(" a = %d \n",*p);
    printf("adress of a = %p \n",&a);
    printf("address of a using &a %p \n",a);
    printf("adress of  p %p \n",&p);     //address of p
    printf("adress of a0 %p \n",p);      //address of a0
    p++;
    printf("adress of a1 %p \n",p);      //address of a1
    p++;
    printf("adress of a2 %p \n",p);      //address of a2
    p+2;
    printf("adress of a4 %d \n",*a+1);      //address of a2

    return 0;
}
