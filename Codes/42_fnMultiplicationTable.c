#include<stdio.h>
#include<stdlib.h>
void printTable(int n );
int main()
{
    printTable(4);
    return 0;
}

void printTable(int n){
    for(int i = 1 ; i<=10;i++){
        printf("%d\n",n*i);
    }
}