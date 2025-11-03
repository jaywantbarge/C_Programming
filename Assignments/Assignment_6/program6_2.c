#include<stdio.h>
#include<stdbool.h>

bool ChkGreater(int ino)
{
    if (ino > 100)
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
    int ivalue = 0;
    bool bRet = false;

    printf("plese entrr number\n");
    scanf("%d",&ivalue);

    bRet = ChkGreater(ivalue);

    if (bRet==true)
    {
        printf("greter\n");
    }
    else
    {
        printf("smaller\n");

    }
    return 0;
    
}