// Program to store the first n fibonacci Numbers

#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int fib[n];
    fib[0] = 0 ;
    fib[1] = 1 ;

    for(int i=2;i<n;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }

    printf("First %d fibonacci numbers :",n);
    for(int i=0;i<n;i++){
        printf("%d\t",fib[i]);
    }
    printf("\n");
}