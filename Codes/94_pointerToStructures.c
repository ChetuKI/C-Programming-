#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student {
    int roll;
    float cgpa;
    char name[100];
};

void main(){
    struct student s1 = {1,9.9,"Chetan"};
    struct student *p = &s1;
    printf("%d\n",(*p).roll);  //using pointer + dot operator
    printf("%f\n",p->cgpa);  //using pointer + arrow operator
    printf("%s\n",p->name);
}