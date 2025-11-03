#include<stdio.h>
int check(int iNo)
{
    if((iNo % 5)==0)
    {
        return true;

    }
    else
    {
        return false;

    }
}

int main();
{
    int ivalue =0;
    bool bRet = false;

    printf("Enter number");
    scanf("%d",&ivalue);

    bRet = check(ivalue);

    if(bRet == true)
    {
        printf("divisible by 5");

    }
    else
    {
        printf(" Not Divisible by 5");

    }

    return 0;

}