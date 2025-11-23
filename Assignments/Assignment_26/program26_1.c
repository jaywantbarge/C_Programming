#include<stdio.h>
void pattern(int iNo)
{
    int iCnt =0;
    char ch = 'A';
    for (iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("%c\t",ch);
        ch++;
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