#include <stdio.h>
#include <stdlib.h>

int a(int num1,int num2); // define the function
int main()
{
 int p,q; // input number as p, q
 printf("Enter two numbers=\n"); // display the line
 scanf("%d%d",&p,&q);// scan the input
 printf("L.C.M. is =%d",a(p,q)); // print the output
 return 0;
}
int a(int num1,int num2) // function
{
 static int r=0;
 r=r+num1;
 if(r%num1==0 && r%num2==0)
 return r;
 return a(num1,num2);
}
