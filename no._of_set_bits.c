#include<stdio.h>
int main()
{
    int var,count=0;
    printf("enter the variable value");
    scanf("%d",&var);
    while(var != 0)  // looping condition if var = 0 it will come out of the loop
    {
        if((var & 1) == 1)  // and operation with 1 it will give lsb bit
            count++; // if lsb bit is 1 count will increase
        var = var >> 1;  // it will do div operation 
    }
    printf("count = %d",count);

}