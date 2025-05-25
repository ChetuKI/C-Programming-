#include<stdio.h>
void main(){
    FILE *fptr ;
    fptr = fopen("105_oddNos.txt","w");
    int n ;
    printf("Enter n upto which you need odd nos : ");
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; i++){
        if(i%2 != 0){
            fprintf(fptr,"%d\t",i);
        }
    }
    fclose(fptr);
}