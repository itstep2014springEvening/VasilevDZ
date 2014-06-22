#include <stdio.h>

int main()
{
    int i, x;
    printf("VVedite kol-vo chisel fibonachi\n");
    scanf("%d",&x);
    printf("\n nash ryad fibonachi\n");
    f(x,1);
    return 0;
    }
    int f(int n, int p)
     {
     int i; int a = 1, b = 1,c;
     if (n<0) return;
     if (p)
        printf("%d \n %d \n",a,b);
     for (i=1; i < n; i++)
        {
    c=a;
    a=a+b;
    b=c;
    if (p)
    printf("%d\n ",a);
    }
      if (!p) printf("%d ",a);

       }


