#inclide<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char c)
{
    if  ( c =='a'  || c == 'e'  || c == 'i')
        ( c =='A'  || c == 'E'  || c == 'I')
        {
            return TRUE;

        }
        else
        {
            return FALSE;
        }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf("%c", &cValue);

    if (bRet == TRUE)
    {
        printf("It is Vowel");

    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}