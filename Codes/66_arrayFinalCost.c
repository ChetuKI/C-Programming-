// Program To enter price of 3 items &print their final costs with GST(18%)

#include<stdio.h>
void main(){
    float price[3];
    for(int i =0;i<3;i++){
        printf("Enter Price %d :",i+1);
        scanf("%f",&price[i]);
    }

    for(int i=0;i<3;i++){
        price[i] = price[i] + (0.18) * price[i];
    }

    for(int i = 0 ;i<3;i++){
        printf("Final Price %d :%f\n",i+1,price[i]);
    }
}