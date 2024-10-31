#include <stdio.h>
#include <stdlib.h>

int a(int num1,int num2); // define the function
int main() // input integer
{
 int p, q; // input number as p, q
 printf("Enter two numbers= "); // display the line
 scanf("%d%d",&p,&q); // scan the input
 printf("G.C.D number is= %d", a(p,q)); // print the output
 return 0;
}
int a(int num1,int num2) // function
{
 if (num2!=0) // if it is 0, return condition a
 return a(num2,num1 %num2);
 if (num1!=0) // if it is 1, return the first number
 return num1;
}
