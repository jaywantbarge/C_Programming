#include<stdio.h>
#include<stdbool.h>

bool ChkEqual(int ino,int ino2)
{
    if (ino == ino2)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    int ivalue = 0,ivalue2 = 0;
    bool bRet = false;

    printf("plese enter two number\n");
    scanf("%d,%d",&ivalue1,ivalue2);

    bRet = ChkGreater(ivalue,ivalue2);

    if (bRet==true)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }
    
    return 0;
}