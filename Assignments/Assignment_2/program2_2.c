#include<stdio.h>

void Display(int iNo)
{
    //write updater
    while (iNo > 0)
    {
        printf(" * ")
        iNo--;
    }
    
}
int main()
{
    int ivalue = 0;

    printf("Enter number")
    scanf("%d",&ivalue);

    Display(ivalue);
    return 0;
}