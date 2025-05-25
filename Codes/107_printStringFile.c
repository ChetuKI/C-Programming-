#include<stdio.h>
void main(){
    FILE *fptr;
    fptr = fopen("107_test.txt","r");
    if(fptr == NULL){
        printf("File doesn't exist\n");
        fclose(fptr);
    } else {
        char str[100];
        fgets(str,100,fptr);
        printf("String : %s\n",str);
    }
}