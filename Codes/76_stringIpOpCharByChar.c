// Program to understand string input and output
#include<stdio.h>
void main(){
    char firstName[] = "CHETAN";
    char lastName[] = "INGALI" ;

    for(int i=0;firstName[i] !='\0';i++){
        printf("%c\t",firstName[i]);
    }
    printf("\n");

    for(int i=0;lastName[i] !='\0';i++){
        printf("%c\t",lastName[i]);
    }
    printf("\n");

}