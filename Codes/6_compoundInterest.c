#include<stdio.h>
#include<math.h>
void main(){
    float p , t , r ;
    printf("Enter p , t , r : ");
    scanf("%f%f%f",&p,&t,&r);
    float ci = p * pow(1+r/100,t) - p ;
    printf("CI : %f",ci);
}