#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{
    double x,a;
    printf("vvedite x , dlya vishitivaniya cos(x)\n");
    scanf("%lf",&x);
    printf("x=%f\n",x);
    double sum=1,dobavka=1,eps=0.001;
    int i=1;
    int j=1;
    int k=-1;
    while(fabs(dobavka)>eps)
    {
        dobavka=dobavka*(x*x)/((i+1)*(i));
        sum=sum + pow(k,j)*dobavka;
        ++i;
        ++i;
        ++j;

    }
    printf("cos=%f\n",sum);
    a=cos(x);
    printf("cos funkcii =%f\n",a);
    printf("raznost' = %f\n",fabs(a-sum));

}
