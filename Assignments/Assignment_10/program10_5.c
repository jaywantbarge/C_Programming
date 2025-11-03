#include<stdio.h>

double SquareMeter(int iValue)
{
    return (double)iValue * 0.0929;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;
    printf("Enter area in square feet: ");
    scanf("%d", &iValue);
    dRet = SquareMeter(iValue);
    printf("Area in square meter is: %f", dRet);
    return 0;
}