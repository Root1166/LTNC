#include <stdio.h>
#include <conio.h>
int main()
{
    int n,m;
    printf("\nnhap so thu nhat n = ");
    scanf("%d",&n);
    printf("\nnhap so thu hai m = ");
    scanf("%d",&m);
    printf ("so sanh %d > %d = %d\n",n,m,n>m);
    printf ("so sanh %d < %d = %d\n",n,m,n<m);
    printf ("so sanh %d >= %d = %d\n",n,m,n>=m);
    printf ("so sanh %d <= %d = %d\n",n,m,n<=m);
    printf ("so sanh %d != %d = %d\n",n,m,n!=m);
    printf ("so sanh %d == %d = %d\n",n,m,n==m);
    getch();

}
