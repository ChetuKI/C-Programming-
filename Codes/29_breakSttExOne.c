//  keep taking numbers as input from user  until user enters an ODD number

#include<stdio.h>
int main(){
    int n;
    do{
        printf("Enter num :");
        scanf("%d" ,&n);
    }while(n % 2 ==0);
}