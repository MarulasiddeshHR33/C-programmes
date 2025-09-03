#include<stdio.h>
int main(){
    float p,t,r,si,tamt;
    printf("Enter principle Amount\n");
    scanf("%f",&p);
    printf("Enter time\n");
    scanf("%f",&t);
    printf("Enter Rate of Interest\n");
    scanf("%f",&r);
    si=(p*t*r)/100;
    tamt=p+si;
    printf("Simple Interest=%f\n",si);
    printf("Total amount=%f\n",tamt);
}