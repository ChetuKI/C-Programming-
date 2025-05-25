#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student {
    int roll;
    float cgpa;
    char name[100];
};

void main (){
    struct student s1;
    s1.roll = 1 ;
    s1.cgpa = 9.77;
    strcpy(s1.name,"Chetan");
    printf("Student details : \n");
    printf("Student roll : %d\n",s1.roll);
    printf("Student cgpa : %f\n",s1.cgpa);
    printf("Student name : %s\n",s1.name);
    struct student s2;
    s2.roll = 2 ;
    s2.cgpa = 9.7;
    strcpy(s2.name,"Basavaraj");
    printf("Student details : \n");
    printf("Student roll : %d\n",s2.roll);
    printf("Student cgpa : %f\n",s2.cgpa);
    printf("Student name : %s\n",s2.name);
    struct student s3;
    s3.roll = 3 ;
    s3.cgpa = 9.9;
    strcpy(s1.name,"Siri");
    printf("Student details : \n");
    printf("Student roll : %d\n",s3.roll);
    printf("Student cgpa : %f\n",s3.cgpa);
    printf("Student name : %s\n",s3.name);
}