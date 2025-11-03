#include<stdio.h>
int SumNonFact(int ino)
{
    int iCnt = 0;
    int iSum = 0;

    for ( iCnt = 1; iCnt <=ino; iCnt++)
    {
        if (ino%iCnt !=0)
        {
            iSum = iSum+ iCnt;
        }

    }
    
return iSum;
}
int main()
{
    int ivalue =0;
    int iRet =0;

    printf("enter number");
    scanf("%d",iRet);

    iRet = SumNonFact(ivalue);

    printf("%d",iRet);
    return 0 ;
    
}