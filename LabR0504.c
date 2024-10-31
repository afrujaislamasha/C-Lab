#include<stdio.h>
#include<stdlib.h>

long long int fibonacci(int n);
int main()
{
 long long int result;
 int number;
 printf( "Enter the integer = " );
 scanf("%d",&number);
 result=fibonacci(number);
 printf("fibonacci %d = %lld\n",number,result);
}
long long int fibonacci(int n)
{
 if (0==n|| 1==n){
 return n;
 }
 else {
 return fibonacci(n-1)+fibonacci (n-2);
}
}
