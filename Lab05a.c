#include <stdio.h>

int main()
{
    int x=10;
    while (x <=20)
    {
	 if (x==17)
	 {
	      x++;
	      continue;
	 }
	 printf("Value of x: %d\n", x);
	 x++;
    }
    return 0;
}
