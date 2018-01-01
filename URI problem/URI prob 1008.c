#include<stdio.h>
int main()
{

    int num,sallary;
    double hours,result;

    scanf("%d %d %lf",&num,&sallary,&hours);

    result = sallary*hours;

    printf("NUMBER = %d\nSALARY = U$ %.2lf\n",num,result);

    return 0;



}
