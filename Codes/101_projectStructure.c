#include<stdio.h>
#include<string.h>
typedef struct student {
    char name[100];
    int roll;
    int marks[3];
} s ;
typedef struct teacher {
    char name[100];
    int tId ;
} t ;
typedef struct staff {
    char name[100];
    int stId ;
} st ;

void main(){
    s stu[2];   //max 2 student   (you can take n students but i choosed 2 because to demonstrate)
    int stuCount = 0 ;
    t tea[2];     //max 2 teacher
    int teaCount = 0 ;
    st sta[2];     // max 2 staff
    int staCount = 0 ;
    int choice ;
    do {
        printf("-----Menu -----\n");
        printf("1.Student(Input)\n2.Teacher(Input)\n3.Staff(Input)\n4.Student(Output)\n5.Teacher(Output)\n6.Staff(Output)\n7.exit\n");
        printf("Enter choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1 : if(stuCount < 2){
                        printf("Enter details of student %d\n",stuCount+1);
                        printf("Enter name : ");
                        scanf("%s",&stu[stuCount].name);
                        printf("Enter roll no : ");
                        scanf("%d",&stu[stuCount].roll);
                        printf("Enter marks : \n");
                        for(int i=0;i<3;i++){
                            printf("Enter %dth subject marks : ",i+1);
                            scanf("%d",&stu[stuCount].marks[i]);
                        }
                        stuCount++;
                    } else {
                        printf("Max students reached. Sorry\n");
                    }
                    break;
            case 2 : if(teaCount < 2){
                        printf("Enter details of teacher %d\n",teaCount+1);
                        printf("Enter name : ");
                        scanf("%s",&tea[teaCount].name);
                        printf("Enter teacher id : ");
                        scanf("%d",&tea[teaCount].tId);
                        teaCount++;
                    } else {
                        printf("Max Teachers reached. Sorry\n");
                    }
                    break;
            case 3 : if(staCount < 2){
                        printf("Enter details of staff %d\n",staCount+1);
                        printf("Enter name : ");
                        scanf("%s",&sta[staCount].name);
                        printf("Enter staff id : ");
                        scanf("%d",&sta[staCount].stId);
                        staCount++;
                    } else {
                        printf("Max staff reached. Sorry\n");
                    }
                    break;
            case 4 : printf("Enter student roll no : ");
                     int roll ;
                     char ch = 'N';
                     scanf("%d",&roll);
                     for(int i =0 ;i < 2;i++){
                        if(stu[i].roll==roll){
                            printf("name : %s\n",stu[i].name);
                            printf("roll : %d\n",stu[i].roll);
                            for(int j = 0 ; j < 3;j++){
                                printf("%d\n",stu[i].marks[j]);
                            }
                            ch = 'Y';
                            break;
                        }
                     }
                     if(ch == 'N'){
                        printf("Not found\n");
                     }

                     break;
            case 5 : printf("Enter teacher id : ");
                     int id ;
                     char ch2 = 'N';
                     scanf("%d",&id);
                     for(int i =0 ;i < 2;i++){
                        if(tea[i].tId==id){
                            printf("name : %s\n",tea[i].name);
                            printf("tid : %d\n",tea[i].tId);
                            ch2 = 'Y';
                            break;
                        }
                     }
                     if(ch2 == 'N'){
                        printf("Not found\n");
                     }

                     break;
            case 6 : printf("Enter staff id : ");
                     int id2 ;
                     char ch3 = 'N';
                     scanf("%d",&id2);
                     for(int i =0 ;i < 2;i++){
                        if(sta[i].stId==id2){
                            printf("name : %s\n",sta[i].name);
                            printf("stid : %d\n",sta[i].stId);
                            ch3 = 'Y';
                            break;
                        }
                     }
                     if(ch3 == 'N'){
                        printf("Not found\n");
                     }

                     break;

        }
    }while(choice != 7);
}