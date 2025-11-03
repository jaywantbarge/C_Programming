#include<stdio.h>
int multiply(int ino,int ino2,int ino3)
{
    int iAns = 0;
    if (ino1 == 0 || ino2 ==0 || ino3 ==0)
    {
    if (ino != 0)
    {
        iAns = ino;
    }
    else
    if (ino2 !=0)
    {
        iAns = ino2;
    }
    else
    if (ino3 != 0;)
    {
        iAns = ino3;
    }
    else
    {
        iAns=0;
    }

}
else
{
    iAns = ino * ino * ino3;
}
    return iAns;

}   

int main()
{
    int ivalue = 0,ivalue2 = 0,ivalue3 = 0,iRet = 0;

    printf("plese enter three number\n");
    scanf("%d,%d,%d",&ivalue1,ivalue2,ivalue3);

    iRet = multiply(ivalue,ivalue2,ivalue3);

        printf("multiplication is :%d",iRet);
    
    return 0;
}