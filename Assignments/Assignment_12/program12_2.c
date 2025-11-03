#include <stdio.h>
#include <math.h>

int count_factors(int number)
 {
    int count = 0;
    for (int i = 1; i <= sqrt(number); i++)
     {
        if (number % i == 0) {
            if (i * i == number) 
            {
                count++;
            } else {
                count += 2;
            }
        }
    }
    return count;
}

int main()
 {
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    printf("%d\n", count_factors(number));
    return 0;
}