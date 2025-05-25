#include<stdio.h>
#include<stdlib.h>
int main()
{
    float *ptr ;
    ptr = (float *) malloc(5*sizeof(float));
    //You can take user input also here
    ptr[0] = 27.5;
    ptr[1] = 44.7;
    ptr[2] = 38.9;
    ptr[3] = 333.12;
    ptr[4] = 12.12;
    for(int i=0;i<5;i++){
        printf("%f\n",ptr[i]);
    }
    free(ptr);
    return 0;
}