#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, sum;
    printf("Enter your number: ");
    scanf("%d", &n);

    for (i=1; i<=n; i=i++) {

        sum=sum + sum*i;

    }
    printf("The Sum of the numbers are= %d", &sum);
    return 0;
}
