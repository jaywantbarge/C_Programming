#include<stdio.h>

int FactDiff(int ino)
{
    int iCnt = 0;
    int iSumFactors = 0;
    int iSumNonFactors = 0;

    for ( iCnt = 1; iCnt < ino; iCnt++)
    {
        if (ino % iCnt == 0)
        {
            iSumFactors=iSumFactors+iCnt;
        }
        else
        {
            iSumNonFactors = iSumNonFactors+iCnt;
        }
        
    }
    return iSumFactors- iSumNonFactors;
    
}

int main()
{
    int ivalue = 0;
    int iRet = 0;

    printf("enter number:");
    scanf("%d",&ivalue);

    iRet = FactDiff(ivalue);

    printf("%d",iRet);

    return 0;
}