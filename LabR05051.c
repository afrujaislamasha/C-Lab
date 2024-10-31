#include<stdio.h>
#include<stdlib.h>

int p(int a); // call the function
int main()
{
 int number,sum; // input integer value
 printf("Enter the number = "); // display input
 scanf("%d", &number); // process input
 sum= p(number); // calculation
 printf("Sum is %d = %d",number,sum); // display output
 return 0;
}
int p( int a) // function
{
 if (a==0) // condition
 return 0;
 return ((a%10) + p(a/10));
}
