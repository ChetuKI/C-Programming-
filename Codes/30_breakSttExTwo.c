// Keep taking number as input from user until the user enters a number which is multiple of 7

#include<stdio.h>
int main()
{
    int n ; 
    do{
        printf("Enter num:");
        scanf("%d",&n);

        if(n%7==0){
            break;           // Program Logic
        }

    }while(1);
}