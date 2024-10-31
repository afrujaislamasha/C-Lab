#include <stdio.h>

int max(int num1, int num2);

int main()
{
    int num1, num2, maximum;

    printf("Enter num1 number: ");
    scanf("%d", &num1);
    printf("Enter num2 number: ");
    scanf("%d", &num2);


    maximum = max(num1, num2);

    printf("\nMaximum Value = %d\n", maximum);

    return 0;
}

int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2 ;
}
