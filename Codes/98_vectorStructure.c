#include<stdio.h>
#include<string.h>
typedef struct vector {
    int x;
    int y ;
}v;
v vectorsSum(v v1 , v v2){
    v v3 ;
    v3.x = v1.x + v2.x ;
    v3.y = v1.y + v2.y ;
    return v3 ;
}
void main(){
    v v1 = {10,10};
    v v2 = {14,14};
    v v3 = vectorsSum(v1,v2);
    printf("%d\t%d",v3.x,v3.y);
}