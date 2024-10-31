#include<stdio.h>
int main()
{
    int total_member, total_amount, average;
    printf("TOTAL MEMBER: ");
    scanf("%d", &total_member);
    printf("TOTAL AMOUNT: ");
    scanf("%d", &total_amount);
    printf("Member ages: ");
    int i, age[total_member+1], b[total_member+1], sum1 = 0;
    for(i = 0 ; i < total_member ; i++)
    {
      scanf("%d", &age[i]);
      sum1+= age[i];
    }
    average = total_amount / sum1;

    for(i = 0; i< total_member; i++)
    {
        b[i] = average*age[i];
        total_amount -= average*age[i];
    }
    for(i = 0; i < total_member ; i++)
    {
        printf("Person1, his age is: %d, and he should get tk. %d \n", age[i], b[i]);
    }
    return 0;
}
