#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{
    double x,a;
    printf("vvedite stepen' exp\n");
    scanf("%lf",&x);
    printf("x=%f\n",x);
    double sum=1.0,dobavka=1.0,eps=0.001;
    int i=1;
    while(fabs(dobavka)>eps)
    {
        dobavka*=x/i;
        sum+=dobavka;
        ++i;

    }
    printf("e=%f\n",sum);
    a=exp(x);
    printf("math E=%f\n",a);
    printf("raznost' = %f\n",a-sum);
}
