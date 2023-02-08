#include<stdio.h>
int main()
{
    int p,r,t;
    float si,ci;
    printf("enter principal,rate,time:\n");
    scanf("%d%d%d,&p,&r,&t");
    si=p*r*t/100;
    ci=p*pow((1+r/100),t)-p;
    printf("simpal interest %f compound interest %f",si,ci);
    return 0;
}
