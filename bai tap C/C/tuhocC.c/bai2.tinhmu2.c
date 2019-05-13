#include <stdio.h>
#include <conio.h>
main()
{
    float n,s=0;
    float sum=0,i;
    printf("\n\t\tHo ten: Bui Van Cong");
    printf("\t\t\tLop: AT13CLC01\n");
    printf("\n\t\tChuong Trinh Tinh S = 1^2 + 2^2 +...+n^2\n");
    printf("\n\n\t\t\tnhap gia tri cua n = ");
    scanf("%f",&n);
    for(i=0;i<=n;i++)
    {
        s += i*i;
        sum+=1/i;
    }

    printf("\n\t\t\tgia tri cua tong s = %5.0f\n\n",s);
    printf("\n\nGia Tri Cua tong sum = %5.0f",sum);
    getch();
}
