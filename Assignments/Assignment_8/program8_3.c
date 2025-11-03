#include <stdio.h>

int Factorial(int iNo)
{
    // Logic from Step 2
    int iFact = 1;
    if (iNo < 0)
    {
        return -1; 
    }
    for (int i = 1; i <= iNo; i++)
    {
        iFact = iFact * i;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);
    
    iRet = Factorial(iValue);
    
    if (iRet == -1)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        printf("Factorial of number is %d\n", iRet);
    }
    
    return 0;
}