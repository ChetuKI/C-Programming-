#include<stdio.h>
#include<string.h>
typedef struct bankAccount{
    char name[30];
    int accNo ;
} b ;
void main (){
    b b1 = {"Chetan",1};
    printf("name : %s\n",b1.name);
    printf("accNo : %d\n",b1.accNo);
}