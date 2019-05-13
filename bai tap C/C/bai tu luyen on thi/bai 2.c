int main()
{
    int a,b,c,d,max1,max2,max;
    printf("nhap a = ");
    scanf("%d",&a);
    printf("nhap b = ");
    scanf("%d",&b);
    printf("nhap c = ");
    scanf("%d",&c);
    printf("nhap d = ");
    scanf("%d",&d);
    max1=a;
    max2=c;
    {
    if(b>a)
    max1=b;
    if(d>c)
    max2=d;
    if(max1>max2)
     {
         max=max1;
     }
     else
     {
        max= max2;
     }
    }
    printf("gia tri max =%d",max);
    getch();

}
