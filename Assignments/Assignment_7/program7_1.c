#include<stdio.h>

void pattern(int ino)
{
    if (ino < 0);
    {
        ino = -ino;
    }
    int i = 0;
    for ( i = 0; i < ino; i++)
    {
        printf("$ * ");
    }
    
}

int main()
{
    int ivalue = 0;
    printf("enter number");
    scanf("%d",&ivalue);
    pattern(ivalue);
    return 0;
}