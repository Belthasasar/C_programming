#include <stdio.h>

void rev(void) 
{
    int n, revNum = 0, sum;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (0<n) 
        {
        sum = n % 10;
        revNum = revNum * 10 + sum;
        n = n/10;
        }
    printf("Reversed number is: %d", revNum);

}
