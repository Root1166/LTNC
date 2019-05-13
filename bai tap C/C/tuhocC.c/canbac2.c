#include <stdio.h>
#include <conio.h>
#include <string.h>
main()
{
    int i,n;
    float S;
    do
    {
        printf("nhap n = ");
        scanf("%d",&n);
        if(n<1)
        {
            printf(" gia tri cua n > 1. Moi nhap lai\n");
        }
    }while(n < 1);
    S = sqrt((float)2);
    for (i = 2;i <= n;i++)
    {
        S = sqrt( 2 + S );
    }
    printf("gia tri cua tong can bac hai la S = %f",S);
    getch();
    return 0;
}
