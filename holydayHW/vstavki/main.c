#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void getarray(int a[],int n);
void outarray(int a[],int n);
int vstavochki(int a[],int n);
int main()
{
    int a[100000],n=10000;

    srand(time(NULL));

    getarray(a,n);
    outarray(a,n);
    printf("\n");
    vstavochki(a,n);
    outarray(a,n);
    return 0;
}
void getarray(int a[],int n)
{
    for (int i=0; i<n; i++)
    {
        a[i]=rand();
    }
}
void outarray(int a[],int n)
{
    for (int i=0; i<n; i++)
    {
        printf("%d ",a[i]);

    }

}
int vstavochki (int a[],int n)
{

    int x;
    for (int i=0; i < n; i++)
    {   int j;
        x = a[i];
        for ( j=i-1; j>=0 && a[j]>x; j--)
        {
            a[j+1] = a[j];
        }
        a[j+1] = x;
    }
}



