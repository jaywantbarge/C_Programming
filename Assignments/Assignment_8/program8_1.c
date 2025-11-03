#include<stdio.h>
void number(int ino)
{
    if (ino < 50)
    {
        printf("small");

    }
    else
    if (ino > 50 && ino < 100)
    {
        printf("medium");
    }
    else
    if (ino > 100)
    {
        printf("large");
    }
    
    
}