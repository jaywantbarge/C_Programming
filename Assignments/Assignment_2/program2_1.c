void Display(int iNo )
{
    int iCnt = 0;

    while (iCnt < iNo)
    {
        printf(" * ");
        iCnt++;

    }
    
}
int main()
{
    int ivalue =0;
    printf("Enter number");
    scanf("%d",&ivalue);
    Display(ivalue);
    return 0;
}
