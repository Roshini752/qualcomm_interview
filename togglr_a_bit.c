#include<stdio.h>
//togglr bit - we need to compliment the bits
int main()
{
    int var,n;
    printf("enter the variable value ");
    scanf("%d",&var);
    printf("enter the bit need to toggle ");
    scanf("%d",&n);
    var = var ^ (1<<n);  
    printf("after toggle is %d",var);


}