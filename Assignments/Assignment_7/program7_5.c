
#include<stdio.h>

void multipleDisplay(int ino)
{

    int iCnt = 0;
    for (iCnt = 1; iCnt <=5; iCnt++)
    {
        printf("%d\t",ino * iCnt);
    }
    
}

int main()
{
    int ivalue = 0;
    printf("enter number");
    scanf("%d",&ivalue);
    multipleDisplay(ivalue);
    return 0;
}