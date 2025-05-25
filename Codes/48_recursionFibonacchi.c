// Program to print nth term of the fibonacci series by RECURSION

#include<stdio.h>
int fib(int n);
void main()
{
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Fibonacchib of(%d):%d",n,fib(n));    
}

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibN = fib(n-1)+fib(n-2);
    return fibN ;
}