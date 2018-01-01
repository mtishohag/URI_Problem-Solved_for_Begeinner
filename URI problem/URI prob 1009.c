#include<stdio.h>
int main()
{
    char name[50];

    double selary,bonus,total,extra;

    scanf("%s %lf %lf",&name,&selary,&bonus);

    extra = (bonus*15)/100;

    total = selary+extra;
    printf("TOTAL = R$ %.2lf\n",total);

    return 0;


}
