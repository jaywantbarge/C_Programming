#include<stdio.h>

void FactRev(int ino)
{
    int i = 0;
    if (ino<0)
    {
        ino = -ino;
    }
    
    for (i = ino/ 2; i>=1;i--)
    {
        if ((ino % i)==0)
        {
            printf("%d\t", i);
        }
        
    }
    printf("%d",ino);
    
}

int main()
{
    int ivalue = 0;
    
    printf("enter number:")
    scanf("%d",&ivalue);

    FactRev(ivalue);
    return 0;
}