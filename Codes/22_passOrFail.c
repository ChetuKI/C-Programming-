// Program to check whether student is passed or failed

#include<stdio.h>
int main()
{
    int marks;
    printf("Enter Your marks :");
    scanf("%d",&marks);

    if (marks >30){
        printf("Passed");
    } else {
        printf("Failed");
    }
}