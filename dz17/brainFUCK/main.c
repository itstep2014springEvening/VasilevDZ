#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=1024;
    char stack[n],symbol;
    int top=0;
    for (int i=0; i<n; ++i)
        stack[i]=0;
    printf("Enter code\n");
    do
    {
        symbol=getchar();
        switch (symbol)
        {
        case '+':
            ++stack[top];
            break;
        case '-':
            --stack[top];
            break;
        case '>':
            ++top;
            break;
        case '<':
            --top;
            break;
        case '.':
            putchar(stack[top]);
            break;
        }
    }
    while (symbol!=';');
    return 0;
}
