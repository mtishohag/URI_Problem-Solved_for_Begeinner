#include<stdio.h>
int main()
{

    int input,hour,minute,result;
    scanf("%d",&input);
    hour=input/3600;
    result=input%3600;
    minute=result/60;
    result=result%60;
    printf("%d:%d:%d\n",hour,minute,result);
    return 0;
}
