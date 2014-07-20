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
    return a;
}
int nok(int a,int b)
{
    return a*b/nod(a,b);
}
