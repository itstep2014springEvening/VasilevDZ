int perevod (int x, int b)
{
    int i,y,f,k;
    y=0;
    i=1;
    k=0;
    while (x>0)
    {
        f=x%b;
        y=f+y*b;
        i=i*b;
        x=x/b;
        ++k;
    }
    while (k)
    {
        f=y%b;
        y=y/b;
        if (f>=10)
            printf("%c",f+55);
        else
            printf("%d",f);
        --k;
    }
}
