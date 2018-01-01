#include<stdio.h>
int main(void)
{
    float x1,y1,x2,y2,x,y,temp,distance;
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
        x=x2-x1;
        y=y2-y1;
        temp=x*x+y*y;
        distance=sqrt(temp);
        printf("%.4f\n",distance);

    return 0;

}
