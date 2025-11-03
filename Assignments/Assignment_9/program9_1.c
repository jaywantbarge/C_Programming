#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    if (iNo == 0)
    {
        return;
    }
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
    if (iNo > 0)
    {
        for (iCnt = 1; iCnt <= iNo; iCnt++)
        {
            printf("#\t");
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}