#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student {
    int roll;
    float cgpa;
    char name[100];
};
int main()
{
    struct student s1;
    s1.roll = 45 ;
    s1.cgpa = 9.77;
    strcpy(s1.name,"Chetan");
    printf("Student details : \n");
    printf("Student roll : %d\n",s1.roll);
    printf("Student cgpa : %f\n",s1.cgpa);
    printf("Student name : %s",s1.name);
    return 0;
}