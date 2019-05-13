#include <stdio.h>
#include <conio.h>
main()
{
    int n,i=0;
    float s=0;
    do{
    printf("nhap gia tri cua n = ");
    scanf("%d",&n);
    }while(n <0 && printf(" n>0\n"));
    while(s+i < n)
    {
        s+=i;
        i++;
    }

    printf("gia tri can tim la s = %f",s);
    getch();

}
