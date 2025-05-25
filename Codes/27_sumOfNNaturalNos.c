// Program to Print Sum of N natural number

#include<stdio.h>
int main()
{
    int n ;
    printf("Enter N :");
    scanf("%d",&n);

    int sum = 0 ;
    for (int i=1;i<=n;i++){
        sum +=i;
    }

    printf("Sum of %d Natural numbers is : %d ",n,sum);
}