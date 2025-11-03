#include<stdio.h>

void CheckNumberType(int num)
{
    if (num>0)
    {
        printf("the number is positive.\n");
    }
    else
    if (num<0)
    {
        printf("the number is negative.\n");
    }
    else
    {
        printf("the number is zero.\n");
    }
    
}

int main()
{
    int number;
    printf("enter number:");
    scanf("%d",&number);
    CheckNumberType(number);
    return o;
}