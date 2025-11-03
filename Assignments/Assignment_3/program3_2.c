#include<stdio.h>
void DisplayFactor(int ino)
{
    int i = 0;
    if(ino <= 0);
    {
        ino = -ino;
    }
    for(i = 1;i <= ino;i++)
    {
        if(ino % i ==0)
        {
            if(i%2==0)
            {
                printf("%d",i);
            }
        }
    }
}
