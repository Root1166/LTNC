#include <stdio.h>
float max3s(a,b,c)
float a,b,c;
{
    float    max;
        max= a>b?a:b;
        return (max>c?max:c);
}
main()
{
    float a,b,c,max3s();
    printf("nhap ba so:\n");
     printf("nhap so thu nhat:");
    scanf("%f",&a);
    printf("nhap so thu hai:");
    scanf("%f",&b);
    printf("nhap so thu ba:");
    scanf("%f",&c);
    printf("so lon nhat trong ba so la:\n");
    printf("so %.0f , %.0f va %.0f la %.0f",a,b,c,max3s(a,b,c));
    getch();



}
