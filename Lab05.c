#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,prime=1;

    printf("Please enter a value:");
    scanf("%d",&n);
    printf("The prime number list from 2 to %d are:\n",n);

    for (i=2;i<=n;i++){
        for(j=2;j<=i/2;j++){
            if (i%j==0){
                prime=0;
                break;
            }
        }
        if (prime==1){
            printf("%d\n",i);
        }
        prime=1;
    }
    return 0;
}
