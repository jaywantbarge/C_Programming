#include<stdio.h>

int EvenFactorial(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    int iFact = 1;
    for (int i = iNo; i > 0; i--)
    {
        if (i % 2 == 0)
        {
            iFact = iFact * i;
        }
    }
    return iFact;
}

int main()

{

int iValue = 0,iRet = 0;

printf("Enter number");

scanf("%d",&iValue);

iRet = EvenFactorial (iValue);

printf("Even Factorial of number is %d", iRet);

return 0;