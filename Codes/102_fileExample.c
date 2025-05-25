#include<stdio.h>
void main (){
    FILE *fptr;
    fptr = fopen("102_test.txt","r");
    if(fptr == NULL){
        printf("FILE Doesnot Exist\n");
    } else {
        char ch = fgetc(fptr);
        while(ch != EOF){
            printf("%c",ch);
            ch = fgetc(fptr);
        }
        fclose(fptr);
    }
    
}