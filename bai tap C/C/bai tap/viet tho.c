int main ()
{
    int a,b,tong,hieu,tich;
    float thuong;
    printf ("nhap so a = ");
    scanf ("%d",&a);
    printf ("nhap so b = ");
    scanf ("%d",&b);
    {
        tong=a+b;
        hieu=a-b;
        tich=a*b;
        thuong=(float)a/b;
    }
    {
    printf ("\ngia tri cua tong cua hai so a=%d va b=%d la =%d",a,b,tong);
    printf ("\ngia tri cua hieu cua hai so a=%d va b=%d la =%d",a,b,hieu);
    printf ("\ngia tri cua tich cua hai so a=%d va b=%d la =%d",a,b,tich);
    printf ("\ngia tri cua thuong cua hai so a=%d va b=%d la = %.2f",a,b,thuong);
    }
    return (0);
}
