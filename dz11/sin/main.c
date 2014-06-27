#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()

{
    double x,a;
    printf("vvedite x , dlya vishitivaniya sin(x)\n");
    scanf("%lf",&x);
    printf("x=%f\n",x);
    double sum=x,dobavka=x,eps=0.001;
    int i=1;
    int j=1;
    int k=-1;
    while(fabs(dobavka)>eps)
    {
        dobavka=dobavka*(x*x)/((i+1)*(i+2));
        sum=sum + pow(k,j)*dobavka;
        ++i;
        ++i;
        ++j;

    }
    printf("sin=%f\n",sum);
    a=sin(x);
    printf("sin funkcii =%f\n",a);
    printf("raznost' = %f\n",fabs(a-sum));

}
