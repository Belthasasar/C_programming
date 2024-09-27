#include <stdio.h>

void seclar(void)
{
    int num1, num2, num3, num4;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    int largest, secondLargest;

   
    if (num1 > num2)
    {
        largest = num1;
        secondLargest = num2;
    } else
    {
        largest = num2;
        secondLargest = num1;
    }

    
    if (num3 > num2) 
    {
        secondLargest = num2 ;
        largest = num3;
    } else if (num2 > num3)
    {
        secondLargest = num3;
    }

    if (num4 > largest)
    {
        secondLargest = largest;
        largest = num4;
    } else if (num4>secondLargest)
    {
        secondLargest = num4;
    }

    printf("The second-largest number is: %d\n", secondLargest);

}
