// Program to print prime number in given range

#include<stdio.h>
int main(){
    int i , j ,count = 0 ;
    int l , h ;     // l--lower range   h--higher range
    printf("Enter lower limit :");
    scanf("%d",&l);
    printf("Enter a higher limit :");
    scanf("%d",&h);

    for(i=l;i<=h;i++){
        for(j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
            printf("%d \n",i);
        }
        count = 0;
    }
}