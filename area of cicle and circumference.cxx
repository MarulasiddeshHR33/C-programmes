#include<stdio.h>
int main()
{
    float r,ac,cc;
    printf("Enter radius\n");
    scanf("%f",&r);
    ac=3.142*r*r;
    printf("Area of circle=%f\n",ac);
    cc=2*3.142*r;
    printf("Circumference of cicle=%f\n",cc);
}