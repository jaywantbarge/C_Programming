#include<stdio.h>

intmultifact(int ino)
{
    int iCnt = 0;
    int imult =1;

    if (ino <0)
    {
        ino = -ino;
    }

    for (iCnt = 1; iCnt <=(ino / 2); iCnt++)
    {
        if ((ino % iCnt)==0)
        {
            imult = imult*iCnt;
        }
        
    }
    return imult;

}
int main()
{
    int ivalue = 0;
    int iRet = 0;

    printf("enter number");
    scanf("%d",ivalue);

    iRet = multfact(ivalue);

    printf("%d",iRet);
    
    return 0;
}