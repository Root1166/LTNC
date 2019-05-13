int main()
{
    int n,i,j,gt=1;
    printf ("nhap gia tri n = ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        gt=gt*i;
    }
    printf ("gia tri gia thua n = %d",gt);
}
