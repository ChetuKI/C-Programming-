#include<stdio.h>
void main(){
    FILE *fptr;
    fptr = fopen("103_test.txt","r");
    if(fptr == NULL){
        printf("File does not exist\n");
    } else {
        int a;
        int ret;
        ret = fscanf(fptr,"%d",&a);
        while(ret != EOF){
            printf("%d\t",a);
            ret =  fscanf(fptr,"%d",&a);
        }
        fclose(fptr);
    }
}