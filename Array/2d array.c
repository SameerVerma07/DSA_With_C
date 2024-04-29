
//Row major array
//date :- 19-09-2023
//here we are going to print the array usimg the row major and pointer 
//sameer verma



#include<stdio.h>
int main()
{
    int m,n,b;
    printf("Enter the no of rows :- ");
    scanf("%d",&n);
    
    printf("Enter the no of Columns :- ");
    scanf("%d",&m);
    int *p;
    
    int a[n][m];
    *p=&a;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("Enter the Element at array[%d][%d] :- ",i,j);
            scanf("%d",&a[i][j]);
            
        }
    }
    
    printf("\n Printing the array :-\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            // printf();
            printf("The Element at array[%d][%d] is %d and address is %p \n",i,j,a[i][j],&a[i][j]);
            
        }
    }
    
    
}