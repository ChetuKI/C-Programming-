//Program to understand Multidimensional Array -- 2-D Array

#include<stdio.h>
int main(){
    int marks[2][3];       // 2-students 3-subject_marks

    for(int i = 0;i<2;i++){
        printf("Student %d :\n",i+1);
        for(int j=0;j<3;j++){
            printf("subject %d :",j+1);
            scanf("%d",&marks[i][j]);
        }
        printf("\n");
    }


    for(int i=0;i<2;i++){
        printf("Student %d Marks : \n",i+1);
        for(int j=0;j<3;j++){
            printf("Subject %d = %d \n",j+1,marks[i][j]);
        }
        printf("\n");
    }


}