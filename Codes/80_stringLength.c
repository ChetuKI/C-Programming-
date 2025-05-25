// Program that inputs user name & prints its length

#include<stdio.h>
int main(){
    char name[40];
    printf("Enter your name : ");
    fgets(name,40,stdin);   // it will add  ==> name\n\0  so lastly length - 1 
    // scanf("%s",&name);
    int length=0;

    for(int i=0;name[i] !='\0';i++){
        length = length + 1;
    }

    printf("String length : %d \n",length-1);  // here
}