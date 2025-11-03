#include<stdio.h>
int Divide(int iNo, int iNo2)
{
    int iAns = 0;

    if(iNo == 0)
    {
        return -1;
    }
    iAns = iNo / iNo2;

    return iAns;
}

int main()
{
    int ivalue1 = 15, ivalue2 =5;
    int iRet =0;

    iRet = Divide(ivalue1 , ivalue2);

    printf("division is %d" , iRet);

    return 0;
    
}