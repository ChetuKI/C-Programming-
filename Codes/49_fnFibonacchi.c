//  Program to print  fibonacci series upto n terms 

#include<stdio.h>
int main()
{
    int n ; 
    printf("Enter a number :");
    scanf("%d",&n);
    int fib0 = 0;
    int fib1 = 1;
    int fib ;
    printf("Fibonacci Series : %d %d ",fib0,fib1);

    for(int i=2;i<n;++i){
         fib = fib0 + fib1 ;
         printf("%d ",fib);
         fib0 = fib1;
         fib1 = fib ;
    }

}