#include <stdio.h>

void print_factors(int number)
{
    // TODO: print all positive factors of 'number' in ascending order
    for (int i = 1; i <= number; i++)
     {
        if (number % i == 0) {
            printf("%d ", i);
        }
    }
}

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    printf("Factors of %d are: ", number);
    print_factors(number);
    return 0;
}