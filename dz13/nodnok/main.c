#include <stdio.h>
#include <stdlib.h>
int nod(int a,int b);
int nok(int a,int b);

int main()
{
    int a,b,fnok,fnod;
    printf("vvedite A\n");
    scanf("%d",&a);
    printf("vvedite B\n");
    scanf("%d",&b);
    fnok=nok(a,b);
    fnod=nod(a,b);
    printf("nok=%d\n",fnok);
    printf("nod=%d\n",fnod);
    return 0;
}
int nod(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
        {

            a-=b;
        }
        else
            b-=a;
    }
}
int nok(int a,int b)
{
    return a*b/nod(a,b);
}
