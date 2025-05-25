// Print the Table of a number input by the user

#include<stdio.h>
int main()
{
    int n ;
    printf("Enter N :");
    scanf("%d",&n);
    
    int i;
    for(i=1;i<=10;i++){  
        printf("%d \n",n*i);  // Logic Of the Program
    }
}