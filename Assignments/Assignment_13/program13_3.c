#include<stdio.h>
 oidprint_odd_numbers(int limit)
{
    for (int i = 1; i <= limit; i++)
    {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }
}
 int main()

{

int limit;

printf("Enter number: ");

scanf("%d", &limit);

print_odd_numbers(limit);

return 0;

}