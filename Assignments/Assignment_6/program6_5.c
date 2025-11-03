#include<stdio.h>
float percentage(int ino1, int ino2)
{
    float fAns = 0.0;
    if (ino1 == 0)
    {
        return 0;
    }
    fAns = ((float)ino2 / (float)ino1)*100;
    return fAns;

}
int main()
{
    int ivalue = 0, ivalue2 =0;
    float fAns= 0.0;

    printf("please enter total marks");
    scanf("%d",ivalue1);

    printf("please enter total marks");
    scanf("%d",ivalue2);

    fRet = percentage(ivalue1,ivalue2);

    printf("the persentage is : %.2f%%",fRet);

    return 0;
}