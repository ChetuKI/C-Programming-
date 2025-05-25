// Program to calculate the sum of all numbers between 5 & 50

#include<stdio.h>
int main(){
    int i ,sum=0;
    for(i=5;i<=50;i++){
        sum = sum + i ;
    }

    printf("Sum : %d",sum);
}