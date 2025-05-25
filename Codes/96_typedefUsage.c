#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student {
    int roll ;
    float cgpa ;
    char name[100];
} s ;

int main()
{
    s s1 = {1,9.9,"Chetan"};
    printf("%d\n%f\n%s\n",s1.roll,s1.cgpa,s1.name);
    return 0;
}