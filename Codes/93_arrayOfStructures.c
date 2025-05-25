#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student {
    int roll;
    float cgpa;
    char name[100];
};

void main (){
    int n = 3 ;
    struct student s[n];
    for(int i = 0 ;i<n;i++){
        printf("Enter details of %dth student : \n",i+1);
        printf("Enter roll : ");
        scanf("%d",&s[i].roll);
        printf("Enter cgpa : ");
        scanf("%f",&s[i].cgpa);
        printf("Enter name : ");
        scanf("%s",&s[i].name);
    }

    for(int i=0;i<n;i++){
        printf("\n\nStudent %d details : \n",i+1);
        printf("Student roll : %d \n",s[i].roll);
        printf("Student cgpa : %.2f \n",s[i].cgpa);
        printf("Student name : %s \n",s[i].name);
    }
}