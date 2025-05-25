#include<stdio.h>
#include<stdlib.h>
int calcfact(int n);
int main()
{
    printf("%d",calcfact(5));
    return 0;
}

int calcfact(int n){
    if (n==1 || n==0) return 1;
    int fact = calcfact(n-1) * n ;
    return fact;
}