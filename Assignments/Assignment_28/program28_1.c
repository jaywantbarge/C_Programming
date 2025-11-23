#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char c = '\0';

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1, c = 'A'; j <= iCol; j++, c++)
        {
            printf("%c\t", c);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter number of rows and columns\n");
    scanf("%d %d",&iValue1, &iValue2);
    Pattern(iValue1, iValue2);
    return 0;
}