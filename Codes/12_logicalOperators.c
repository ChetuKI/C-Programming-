// Proagrm to understand logical Operator in C

#include<stdio.h>
int main()
{
    printf("%d \n",(5>2) && (5>3)); // Logical And Operator  [Both  are True hence o/p --1]
    printf("%d \n",(5>2) || (2>3));  // Logical Or Operator  [any one of them is true hence o/p --1]
    printf("%d \n",!(5>2)); //Logical Not operator [true hence 0]
}