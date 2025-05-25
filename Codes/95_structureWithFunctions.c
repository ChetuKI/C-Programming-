#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student {
    int roll;
    float cgpa;
    char name[100];
};
void printInfo(struct student s1){
    printf("Student Details : \n");
    printf("roll: %d\n",s1.roll);
    printf("Cgpa : %f\n",s1.cgpa);
    printf("name : %s\n",s1.name);
}

void main(){
    struct student s1 = {1,9.9,"Chetan"};
    printInfo(s1);
}