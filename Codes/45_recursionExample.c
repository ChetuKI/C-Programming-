#include<stdio.h>
#include<stdlib.h>
void printHello(int);
int main()
{
    printHello(5);
    return 0;
}

void printHello(int n){
    if(n==0) return;
    printf("Hello\n");
    printHello(n-1);
}