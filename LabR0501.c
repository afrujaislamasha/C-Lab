#include <stdio.h>
#include <stdlib.h>

float armstrong(int number); // As armstrong may be float value, so I used float
int main() // main function
{
 int count; // integer count number
 for(count=1;count<=500;count++) // for loop, first value then condition, then addition
{
 if(count==armstrong(count)) // if else condition
 {
 printf("Armstrong number is = %d\n",count); // display
 }
 }
 return 0;
}
float armstrong(int number)
{
 int remainder;
 float sum=0; // initial sum is 0
while(number)
{
 remainder=number%10; // finding reminder
 sum = sum +(remainder * remainder * remainder); // adding the sum
 number = number/10;
 }
 return(sum); // we are returning the sum
}
