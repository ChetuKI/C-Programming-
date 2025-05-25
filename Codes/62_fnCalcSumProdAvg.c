// Write a function to caluclate the sum , product , &average of 2 numbers . Print that average in main function .
#include<stdio.h> 
void doWork(int a , int b, int *sum,int *prod,int *avg){
    *sum = a + b ;
    *prod = a * b ;
    *avg = (a+b)/2;
    
}

void main(){
    int a = 6 ,b = 4 ;
    int sum,prod,avg;
    doWork(a,b,&sum,&prod,&avg);
    printf("Sum = %d , Product = %d & Average = %d ",sum,prod,avg);
}