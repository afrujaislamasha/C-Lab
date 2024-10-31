#include <stdio.h>

int main()
{
    int x=10;
   Hello: while (x <=20)
    {
	 if (x==17)
	 {
	      x++;
	      goto Hello;
	 }
	 printf("Value of x: %d\n", x);
	 x++;
    }
    return 0;
}
