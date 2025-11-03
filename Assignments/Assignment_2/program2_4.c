#include<stdio.h>
void display(int ino, int ifrequency)
{
    int i = 0;
    //write updater
    for(i = 0; i<ifrequency;i++);
    {
        printf("jay ganesh...\n");
    }
}

int main()
{
    int ivalue =0;
    int icount =0;

    printf("enter number\n");
    scanf("%d",&icount);

    printf("enter frequency\n");
    scanf("%d",&icount);

    display(ivalue,icount);
    return 0;
}