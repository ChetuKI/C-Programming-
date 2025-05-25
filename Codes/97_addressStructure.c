#include<stdio.h>
#include<string.h>
typedef struct address {
    int houseNo;
    int block;
    char city[50];
    char state[50];
} a ;
void main(){
    a p[5];
    for(int i = 0 ; i < 5 ;i++){
        printf("Enter address of %dth person : \n",i+1);
        printf("Enter house no : ");
        scanf("%d",&p[i].houseNo);
        printf("Enter block : ");
        scanf("%d",&p[i].block);
        printf("Enter city : ");
        scanf("%s",&p[i].city);
        printf("Enter state : ");
        scanf("%s",&p[i].state);
    }
    for(int i =0 ; i < 5; i++){
        printf("address of  %dth person : \n",i+1);
        printf("house no : %d\n",p[i].houseNo);
        printf("block : %d\n",p[i].block);
        printf("city : %s\n",p[i].city);
        printf("State : %s\n",p[i].state);
    }
}