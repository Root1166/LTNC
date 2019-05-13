int main()
{
    int n,i,X[30],p=1;
    printf ("nhap n = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\nnhap cac so thuc X%d:",i);
        scanf("%d",&X[i]);
    }
    {
    printf("\ncac so thuc vua nhap la:\n\n");
    for(i=1;i<=n;i++)
    printf("%6d",X[i]);
    }
    //cach tinh
    for (i=1;i<=n;i++)
    {
         p=p*X[i];
    }


    printf("\n\ntich cac so thuc la:%d\n\n\n\n",p);

}
