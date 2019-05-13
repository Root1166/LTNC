#include <stdio.h>
#include <conio.h>
main()
{
    int n,i,s=0;
    printf("\n\t\tHo ten: Bui Van Cong");
    printf("\t\t\tLop: AT13CLC01");
    printf("\n\t\tChuong trinh tinh s= 1 + 2 + 3+....+ n\n");
    printf("\n\n\n\t\tnhap gia tri cua N = ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {

        s+=i;

    }
   printf("\n\n\n\t\tgia tri cua tong s = %d\n\n\n",s);
    getch();
}
