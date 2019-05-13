int main()
{
    float r,cv,dt;
    printf ("nhap r = ");
    scanf ("%f",&r);
    {
        cv=6.28*r;
        dt=3.14*r*r;
    }
    printf ("   Ket Qua Tinh Chu Vi Dien Tich Hinh Tron\n");
    printf("  Ban kinh7 duong tron  r = %.1f met\n",r);
    printf("  Chu vi hinh tron     cv = %.1f met\n",cv);
    printf("  Dien tich hinh tron  dt = %.1f met\n",dt);
    getch();
}
