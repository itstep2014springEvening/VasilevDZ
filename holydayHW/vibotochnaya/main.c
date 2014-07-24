#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void generate(int a[], int size);
void output(int a[], int size);
int main()
{
    int a[1024],k,p,max=0,z;

    srand(time(NULL));
    printf("vvedite usabelnuu dlinu massiva");
    scanf("%d",&k);
    z=k;
    generate(a, k);
    output(a,z);
    while (k>0)
    {
        int indexofmax=0;
        for (int i=1; i<k; ++i)
        {
            if(a[indexofmax]<a[i])
            {
                indexofmax=i;
            }

        }
        p=a[indexofmax];
        a[indexofmax]=a[k-1];
        a[k-1]=p;

        k--;

    }
    output(a,z);
}

void generate(int a[], int size)
{
    for (int i=0; i<size; i++)
    {
        a[i]=rand();
    }
}

void output(int a[], int size)
{
    for (int i=0; i<size; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
