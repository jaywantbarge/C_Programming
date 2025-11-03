
#include<stdio.h>

void Display(int ino)
{

    int iCnt = 0;
    for (iCnt = -ino; iCnt <=ino; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    
}

int main()
{
    int ivalue = 0;
    printf("enter number");
    scanf("%d",&ivalue);
    Display(ivalue);
    return 0;
}