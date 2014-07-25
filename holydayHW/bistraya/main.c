#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void output (int a[],int n);
void input (int a[],int n);
void bistraya (int a[],int left,int right);
void change(int a[],int i, int j);
int main()
{
    int a[100000],n=10000,l,r;
    printf("vvedite nujniy vam massiv ");
    scanf("%d",&n);
    srand(time(NULL));
    input(a,n);
    output(a,n);
    printf("\n");
    bistraya(a,0,n-1);
    output(a,n);
    return 0;
}
void input (int a[],int n)
{
    for (int i=0; i<n; i++)
    {
        a[i]=rand();
    }
}
void output(int a[],int n)
{
    for (int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}
void bistraya(int a[],int left,int right)
{
    int x;
    int i=left;
    int j=right;
    x=a[(left+right)/2];
    while (i<=j)
    {
        while (a[i]<x) i++;
        while (a[j]>x) j--;
        if(i<=j)
        {
            change(a,i,j);
            i++;
            j--;
        }
    }
    if (j>left)
        bistraya(a,left,j);
    if (i<right)
        bistraya(a,i,right);
}
void change(int a[],int i,int j)
{
    int q;
    q = a[i];
    a[i] = a[j];
    a[j] = q;
}
