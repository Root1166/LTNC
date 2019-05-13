int main()
{
    int a,b,c;
    float x1,x2,delta;
    printf("nhap so a = ");  scanf("%d",&a);
    printf("nhap so b = ");  scanf("%d",&b);
    printf("nhap so c = ");  scanf("%d",&c);
    delta = b*b-4*a*c;
    {
        if (delta==0)
            printf("phuong trinh co nghiem kep x1=x2=%.0f",x1=x2=-b/(2*a));
        else if (delta<0)
            printf("phuong trinh vo nghiem");
        else
        {
            x1=(-b-sqrt(delta))/(2*a);
            x2=(-b+sqrt(delta))/(2*a);
            printf("phuong trinh co hai nghiem \nx1=%.0f \nx2=%.0f\n",x1,x2);
        }


    }
    getch();
}
