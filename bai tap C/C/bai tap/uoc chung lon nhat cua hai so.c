int main()
{
    int a,b,UCLN;
    printf ("nhap a = ");   scanf("%d",&a);
    printf ("nhap b = ");   scanf("%d",&b);
    {
        if(a>b)
            UCLN=a-b;
        else if (a<b)
            UCLN=b-a;
        else
            UCLN=a=b;
    }
    printf("uoc chung lon nhat hai so la: %d",UCLN);
    getch();
}
