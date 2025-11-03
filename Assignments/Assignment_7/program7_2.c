#include<stdio.h>

void Display(int ino)
{

    int i = 0;
    for ( i = 0; i < ino; i++)
    {
        printf("%d\t",i);
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