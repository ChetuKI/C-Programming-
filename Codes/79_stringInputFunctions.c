//Progam on string functions ---gets , puts , fgets

#include<stdio.h>
int main(){
    char str[100];
    printf("Enter String 1 : ");
    gets(str);        // inputing a string by gets function
    puts(str);
    char str1[10];
    printf("Enter String 2 : ");
    fgets(str1,10,stdin);   // inputting a string by fgets function
    puts(str1);
}