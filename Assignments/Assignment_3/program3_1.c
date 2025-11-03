#include<stdio.h>
void PrintEven(int ino)
{
    if (ino <= 0)
    {
       return;
    }
    PrintEven(ino - 1);
    printf("%d\t",2* ino);
}
 int main()
 {
    int ivalue =0;
    printf("Enter number\n");
    scanf("%d", &ivalue);
    PrintEven(ivalue);
 }

    
