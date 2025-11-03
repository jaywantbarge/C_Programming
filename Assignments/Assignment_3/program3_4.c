#include<stdio.h>
void DisplayConvert(char cvalue)
{
    if(cvalue>= 'a' && cvalue<='z')
    {
        printf("output : %c\n",cvalue -32);
    }
    else if (cvalue >= 'A'&& cvalue<='z')
    {
        printf("output : %c\n",cvalue + 32);
    }
    else
    {
         printf("output : %c\n",cvalue);
    }
    int main()
    char cvalue = '\0';
    printf("enter character\n");
    scanf("%c",&cvalue);
    DisplayConvert(cvalue);

}