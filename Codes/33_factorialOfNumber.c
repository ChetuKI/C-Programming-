// Program to print the factorial of n

#include<stdio.h>
int main()
{
    int i;
    int fact = 1;
    int n;
    printf("Enter Number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact = fact * i;
    }

    printf("factorial of %d : %d",n,fact);
}