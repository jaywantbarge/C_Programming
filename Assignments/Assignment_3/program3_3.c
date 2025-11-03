#include<stdio.h>
void DisplayEvenFactor(int ino)
{
    int i = 0;
    if(ino <=0)
    {
        ino = -ino;

    }
    for (i= i; i <ino; i++)
    {
        if((ino % i == 0)&& (i % 2==0))
        {
            printf("%d\n",i);
        }
        
    }
    
}
int main()
{
    int ivalue = 0;
    printf("enter number\n");
    scanf("%d",&ivalue);
    DisplayEvenFactor(ivalue);
    return 0;

}