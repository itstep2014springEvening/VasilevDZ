int razmermassiva(int a[],int n)
{

    for(int i=0; i<10; ++i)
    {
        printf("Enter %d element of array: ", i+1);
        scanf("%d", &a[i]);
    }
}

int vivodmassiva (int a[], int n)
{

    for(int i=0; i<10; ++i)
    {
        printf("%d element = %d\n", i+1, a[i]);
    }
}

int nomervmassive (int p, int a[])
{
    int z,o=0;
    int minusadin=-1;
    for(int i=0; i<10; ++i)
    {
        if(p==a[i])
        {
            z=i;
            o++;
            break;
        }
    }
    if (o>0)
    {
        printf("vashe chiselko = %d", z+1);
    }
    else
        printf("%d",minusadin);
}
