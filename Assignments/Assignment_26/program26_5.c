#include<stdio.h>
void pattern(int iNo)
{
    for (int i = 1; i <= iNo; i++)
    {
        printf("%d\\n",i*2);
    }
    

}
int main()
{
    int ivalue = 0;
    printf("enter number of element");
    scanf("%d %d",&ivalue);

    pattern (ivalue);

    return 0;
}