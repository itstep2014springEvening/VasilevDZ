#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c;
    double d,x1,x2;
    printf("vvedite A\n");
    scanf("%d",&a);
    printf("vvedite b\n");
    scanf("%d",&b);
    printf("vvedite c\n");
    scanf("%d",&c);
    d=b*b-4*a*c;
    if(d<0){
        printf("korney net ");
    }
    if(d>=0){
        x1= ((-b) + sqrt(d))/(2*a);
        x2= ((-b) - sqrt(d))/(2*a);
        printf("x1=%g\n",x1);
        printf("x2=%g\n",x2);

    }
    return 0;
}
