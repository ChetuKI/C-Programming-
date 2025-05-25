//Program to print reverse of the table for a number n

#include<stdio.h>
int main()
{
    int n , i ;
    printf("Enter Number :");
    scanf("%d",&n);

    for(i=10;i>=1;i--){
        printf("%d \n",n*i);
    }
}