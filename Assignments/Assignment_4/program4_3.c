#include<stdio.h>

void NonFact(int ino)
{
    int i =0;
    for ( i = 2; i < ino; i++)
    {
        if (ino % i !=0)
        {
            printf("%d\t",i);
        }
        
    }
    
}

int main()
{
    int ivalue = 0;
    printf("enter number";)
    scanf("%d",&ivalue)
    NonFact(ivalue);
    return 0;
}