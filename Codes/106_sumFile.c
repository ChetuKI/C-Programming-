#include<stdio.h>
void main(){
    FILE *fptr ;
    fptr = fopen("106_test.txt","r");
    if(fptr == NULL){
        printf("File Does not exist\n");
    } else {
        int a ,b;
        fscanf(fptr,"%d",&a);
        fscanf(fptr,"%d",&b);
        fclose(fptr);
        fptr = fopen("106_test.txt","w");
        int sum = a+b;
        printf("Sum : %d\t",sum);
        fprintf(fptr,"%d",sum);
    }
    fclose(fptr);
}