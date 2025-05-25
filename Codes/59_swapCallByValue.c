// Program to swap two numbers by call by value

#include<stdio.h>
void swap(int a , int b){
    int c = a;
    a=b;
    b=c;
    printf("Value of a and b in Swap function : \n");
    printf("a is : %d & b is : %d \n",a,b);
}

void main(){
    int a = 5 ,b = 3;
    swap(a,b);
    printf("Value of a and b in Main Function after swap : \n");
    printf("a is : %d & b is : %d \n",a,b);
}