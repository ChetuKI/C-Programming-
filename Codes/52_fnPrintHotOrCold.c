// Function to print HOT or COLD depend upon the temp user enters

#include<stdio.h>
int temp_H_or_C(int temp);
int main(){
    int temp ;
    printf("Enter a temperature:");
    scanf("%d",&temp);
    int ans = temp_H_or_C(temp);
    if(ans=='H'){
        printf("HOT");
    }
    else{
        printf("COLD");
    }
}

int temp_H_or_C(int temp){
    if(temp>=25){
        return 'H';
    } else {
        return 'C';
    }
}