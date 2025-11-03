#include<stdio.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;
    float PI = 3.14;
    dArea = PI * fRadius * fRadius;
    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Output : %.4f", dRet);

    return 0;
}