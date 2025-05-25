// Program to print all the letters in english alphav=bet using a pointer

#include<stdio.h>
void main(){
    char *ptr;
    *ptr = 'A';     // A-65
    while(*ptr <= 'Z'){       //Z-90
        printf("%c\n",*ptr);
        (*ptr)++;
    }
}