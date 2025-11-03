#include<stdio.h>

voidCheckEvenOdd(int num)
{
    if (num % 2 ==0)
    {
        printf("%d is even number.\n,num")
    }
    else
    {
         printf("%d is odd number.\n,num")
    }
    
}

int main()
{
    int number;
    printf("enter number:");
    scanf("%d",&number);
    voidCheckEvenOdd(number);
    return 0;
}