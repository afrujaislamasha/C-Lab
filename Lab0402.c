#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, sum=1;

   printf("Enter the value: ");
   scanf("%d",&n);

   for(int i=1; i<=n; i++)
   {
     sum = sum * i;
     printf("The number is: %d\n", i);
   }

   printf("\nTotal= %d",sum);

   return 0;
}
