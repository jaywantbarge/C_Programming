#include<stdio.h>

void OddDisplay(int ino)
{

    int i = 1;
    while (i<=ino)
    {
        printf("%d",i);
        i = i+2;
    }
    
    
}

int main()
{
    int ivalue = 0;
    printf("enter number");
    scanf("%d",&ivalue);
    OddDisplay(ivalue);
    return 0;
}