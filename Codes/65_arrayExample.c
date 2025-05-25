//  Program to Understand Arrays in C

#include<stdio.h>
void main(){
    int marks[3];          
    printf("Enter phy marks : ");
    scanf("%d",&marks[0]);

    printf("Enter chem marks : ");
    scanf("%d",&marks[1]);

    printf("Enter math marks : ");
    scanf("%d",&marks[2]);

    printf("Physics : %d & Chemistry : %d & Maths : %d",marks[0],marks[1],marks[2]);

}