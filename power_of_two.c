#include<stdio.h>
int main()
{
    int var;
    printf("enter the variable number");
    scanf("%d",&var);
    int num = var;
    if(var == 0)
    {
    printf("the given value is 0");
    return 0;
    }
    
    while(var != 1)
    {
        
        if((var%2 != 0) && (var != 1))
        {
            printf("%d is not a power of 2",var);
            return 0;
        }
        var = var/2;
    }
    printf("%d is a power of 2",num);
    
}