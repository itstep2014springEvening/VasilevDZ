#include <stdio.h>
#include <stdlib.h>
int main()
{
    char symbol;
    int n=256,a,b;
    double stack[n];
    int top =-1;
    do
    {
        scanf("%c",&symbol);
        switch (symbol)
        {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            stack[++top]=(double)(symbol-'0');
            break;
        case '-':
            b=stack[top--];
            a=stack[top--];
            stack[++top]=a-b;
            break;
        case '+':
            b=stack[top--];
            a=stack[top--];
            stack[++top]=a+b;
            break;
        case '/':
            b=stack[top--];
            a=stack[top--];
            stack[++top]=a/b;
            break;
        case '*':
            b=stack[top--];
            a=stack[top--];
            stack[++top]=a*b;
            break;
        case '=':
            break;
        }
    }
    while(symbol!= '=');
    printf("%f\n",stack[top]);
    return 0;
}
