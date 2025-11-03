#include<stdio.h>
#include<stdbool.h>

bool ChkEven(int ino)
{
    if(ino % 2 ==0);
    {
        return true;

    }
    else
    {
        return false;

    }

}

int mainI()
{
    int ivalue = 0;
    bool bRet = false;

    printf("enter number:");
    scanf("%d", &ivalue);

    bRet = ChkEven(ivalue);

    if (bRet == true)
    {
        printf("number is even\n");

    }
    else
    {
        printf("number is odd\n");
    }
    return 0;
}