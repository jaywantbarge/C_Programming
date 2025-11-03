#include<stdio.h>
int FindLargeest(int x,iny y, int z);
{
    if (x > y && x > z)
    {
        returnx;
    }
    else
    if (y > x && y > z)
    {
        return y;
    }
    else
    {
        return z;
    }
    
}

int main()
{
int a,b,c,result;
printf("enter three numbers:");
scanf("%d %d %d",&a,&b,&c);

result = FindLargeest(a,b,c);
printf("Largest number: %d\n",result);
return 0;
}