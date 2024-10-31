#include <stdio.h>
#include <stdlib.h>

struct college{
char code[2];
int year;
int courses[50];
char name[30];

};
struct courses{
char name[20];
float duration;
int num_stds;
};


int main()
{
    struct college prep = {"po",2000,12,"preparatory"};
    printf("%s\t%d\t%d\t%s\t",prep.code,prep.year,prep.courses,prep.name);
    struct courses ban={"circuit",1.5,35};
    printf("%s\t %0.2f hour\t %d\t",ban.name,ban.duration,ban.num_stds);
    return 0;
}
