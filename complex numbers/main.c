#include <stdio.h>
#include <stdlib.h>
#include <math.h>


typedef struct t_Complex
{
    double re;
    double im;
} Complex;

Complex vvod();
void  vivod(Complex a);
Complex sum(Complex a,Complex b);
Complex raznost(Complex a,Complex b);
Complex umnojka(Complex a,Complex b);
Complex podelit(Complex a,Complex b);

int main()
{
    Complex a,b,c;
    //double real,imagine,real2,imagnie2,c,k;
    char operation,i;
    i='i';
    a=vvod();
    b=vvod();
  //  vivod(a);
  //  vivod(b);
    /* printf("che vi delat'-to hotite?\n+\n-\n*\n/\n");
     scanf(" %c",&operation);
     printf("%c",operation);
     switch(operation)
     {
     case '+':
         c=real+real2;
         k=imagine+imagnie2;
         break;
     case '-' :
         c=real-real2;
         k=imagine-imagnie2;
         break;
     case '*':
         c=real*real2 - imagine*imagnie2;
         k=real*imagnie2+real2*imagine;
         break;
     case '/':
         c=((real*real2+imagine*imagnie2)/(real2*real2+imagnie2*imagnie2));
         k=((real2*imagine-imagnie2*real)/(real2*real2+imagnie2*imagnie2));
         break;
     default :

         break;

     }
     printf("%f+i*%f",c,k);*/
     printf("summa\n");
vivod(sum(a,b));
printf("raznost\n");
vivod(raznost(a,b));

printf("proizvedenie\n");
vivod(umnojka(a,b));
printf("delenie\n");
vivod(podelit(a,b));
     return 0;
}

Complex vvod()
{
    Complex result;
    printf("vvedite  vashe chiselko !");
    printf("vvedite realnyy chast'");
    scanf("%lf",&result.re);
    printf("vvedite mnimuu chast'");
    scanf("%lf",&result.im);
    return result;
}

void  vivod(Complex a)
{
    printf("%f+%fi\n",a.re,a.im);
}Complex raznost();
Complex umnojka();
Complex podelit();
Complex sum(Complex a,Complex b)
{
    Complex result;
    result.re=a.re+b.re;
    result.im=a.im+b.im;
    return result;
}
Complex raznost(Complex a,Complex b)
{
    Complex result;
    result.re=a.re-b.re;
    result.im=a.im-b.im;
    return result;
}
Complex umnojka(Complex a,Complex b)
{
   Complex result;
   result.re=a.re*b.re-a.im*b.im;
   result.im=a.re*b.im+b.re*a.im;
   return result;
}
Complex podelit(Complex a,Complex b)
{
    Complex result;
    result.re=((a.re*b.re+a.im*b.im)/(b.re*b.re+b.im*b.im));
    result.im=((b.re*a.im-b.im*a.re)/(b.re*b.re+b.im*b.im));
       return result;
}

