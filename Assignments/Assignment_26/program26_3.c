#include<stdio.h>
void pattern(int iNo)
{
    int iCnt =0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d *\t ",iCnt);
        
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