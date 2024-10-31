#include <stdio.h>
#include <stdlib.h>

struct employee
{
    int emp_id;
    char name[30];
    double salary;
    char designation[30];
    };
struct address{

    int ak;
    char road_nm[20];
     char area_name[20];
};

int main()
{

struct employee  abd={36,"Abdullah Khan",200000.00,"Engineer"};
struct address for_abd={35,"Motijheel","Dhaka"};
printf("ID:%d\t Name:%s\t Salary:%0.2f\t Designation:%s\t\n",abd.emp_id,abd.name,abd.salary,abd.designation);
printf("Address :  %d, %s, %s",for_abd.ak,for_abd.road_nm,for_abd.area_name);


    return 0;
}
