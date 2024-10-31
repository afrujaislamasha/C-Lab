#include <stdio.h>

int main()
{
    int n, p=1;
	int x=0,i=1,j,d;

    printf("Input your binary number :");
	scanf("%d",&n);

	for (j=n; j>0; j=j/10)
	{
          d = j % 10;
            if(i==1)
                  p=p*1;
            else
                 p=p*2;

	   x= x+(d*p);
	   i++;
	}

    printf("\nThe Decimal Number is: %d\n", x);

    return 0;
}
