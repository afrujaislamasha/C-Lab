#include <stdio.h>
#include <stdlib.h>

struct student{
int id;
float cgpa;
};
int main()
{
    struct student Abdullah,Protik,Sara;
printf("Enter ID and CGPA\n");
scanf("%d %f",&Abdullah.id,&Abdullah.cgpa);
printf("Enter ID and CGPA\n");
scanf("%d%f",&Protik.id,&Protik.cgpa);
printf("Enter ID and CGPA\n");
scanf("%d%f",&Sara.id,&Sara.cgpa);
if(Abdullah.cgpa>=Protik.cgpa && Protik.cgpa>=Sara.cgpa){
    printf("\n%d \n%d \n%d",Abdullah.id,Protik.id,Sara.id);

}
if(Abdullah.cgpa>=Protik.cgpa && Protik.cgpa>=Sara.cgpa){

    printf("\n%d \n%d \n%d",Abdullah.id,Protik.id,Sara.id);
}
if(Sara.cgpa>=Abdullah.cgpa && Abdullah.cgpa>=Protik.cgpa){
    printf("\n%d \n%d \n%d",Sara.id,Abdullah.id,Protik.id);
}
if(Sara.cgpa>=Protik.cgpa && Protik.cgpa>=Abdullah.cgpa){
    printf("\n%d \n%d \n%d",Sara.id,Protik.id,Abdullah.id);
}
if(Protik.cgpa>=Sara.cgpa && Sara.cgpa>=Abdullah.cgpa){
    printf("\n%d \n%d \n%d",Protik.id,Sara.id,Abdullah.id);
}
if(Protik.cgpa>=Abdullah.cgpa && Abdullah.cgpa>=Sara.cgpa){
    printf("\n%d \n%d \n%d",Sara.id,Abdullah.id,Protik.id);
}
    return 0;
}

