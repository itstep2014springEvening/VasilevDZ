#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void getarray(int a[],int n);
void outarray(int a[],int n);
int puziriki(int a[],int n);
int main()
{
    int a[100000],n=10000;

    srand(time(NULL));

    getarray(a,n);
    outarray(a,n);
    printf("\n");
    puziriki(a,n);
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
int puziriki (int a[],int n)
{
    for (int i=1; i<n; i++)
    {
        int x;
        for (int j=n-1; j>=i; j--)
        {
            if (a[j-1]>a[j])
            {
                x=a[j-1];
                a[j-1]=a[j];
                a[j]=x;
            }
        }
    }

}
int i, j, temp;
for (i = 1; i < size; i++)
{
    temp = array[i];
    for (j = i - 1; j >= 0; j--)
    {
        if (array[j] < temp)
            break;

        array[j + 1] = array[j];
        array[j] = temp;
    }
}
