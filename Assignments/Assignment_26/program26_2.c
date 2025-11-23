#include<stdio.h>
void pattern(int iNo)
{
    int iCnt =0;
    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d # ",iCnt);
        
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