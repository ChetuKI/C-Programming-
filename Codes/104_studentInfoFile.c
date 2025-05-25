#include<stdio.h>
void main(){
    FILE *fptr ;
    fptr = fopen("104_test.txt","w");
    char name[100];
    int age;
    float cgpa;
    printf("Enter name : ");
    scanf("%s",&name);
    printf("Enter age : ");
    scanf("%d",&age);
    printf("Enter cgpa : ");
    scanf("%f",&cgpa);
    fprintf(fptr,"student name : %s\n",name);
    fprintf(fptr,"student age : %d\n",age);
    fprintf(fptr,"student cgpa : %f\n",cgpa);
    fclose(fptr);
}