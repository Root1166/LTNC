#include<stdio.h>
#include<conio.h>
int main()
{
    float diemtb,k;
    tt:printf("nhap diem trung binh cua ban = ");
    scanf("%f",&diemtb);
    if (diemtb>=5)
    {
        if(diemtb<=6.5)
        printf("\ntrung binh");
        else if (diemtb<=8.5)
        printf("\nkha");
        else if(diemtb<=9.5)
        printf("\ngioi");
        else
        printf("\nsuat sac");
    }
    else
        printf("\nthi lai");
        printf ("\n\ntiep tuc hoac dung (1/0)");
        scanf("%f",&k);
        if (k==1)
        goto tt;
    getch();
}
