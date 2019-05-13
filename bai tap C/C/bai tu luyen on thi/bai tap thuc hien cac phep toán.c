#include <stdio.h.>
#define MAXINT 65535
int a,b;
void phepcong()
{

    printf("\nneu lay %d cong voi %d thi:\n",a,b);
    printf("ket qua la:%d",a+b);
}

void pheptru()
{
    printf("\n\nneu lay %d tru cho %d thi :\n",a,b);
    printf("ket qua la:%d",a-b);
    }
void phepnhan()
{

    if (((long)a*b)> MAXINT)
        return;
    else
    {
    printf("\n\nneu lay %d x %d thi :\n",a,b);
    printf("ket qua la:%d",a*b);
    }
}
void phepchia()
{
    int sdu,d=0;
    printf("\n\nneu lay so %d chia cho so %d thi\n",a,b);
    while(b < a)
    {
        a =a-b;
        d=d + 1;
    }
    sdu =(a-(d*b));
    printf("thuong so la : %d",d);
    printf("\nso du =%d",sdu);
}
char chon()
{
    char ch;
    printf("\nTiep tuc nua khong ? (C/K)");
    ch = toupper(getch());
    return(ch - 'C');
}
main()
{
    printf("\t\t\t**************************\n");
    printf("\t\t\t**                      **\n");
    printf("\t\t\t**                      **\n");
    printf("\t\t\t**                      **\n");
    printf("\t\t\t**     Bui van cong     **\n");
    printf("\t\t\t**                      **\n");
    printf("\t\t\t**      (*  ^  *)       **\n");
    printf("\t\t\t**                      **\n");
    printf("\t\t\t**                      **\n");
    printf("\t\t\t**************************\n");

    char KetThuc;
    do
    {
    printf("\nnhap gia tri cua a = ");        scanf("%d",&a);
    printf("\nnhap gia tri cua b = ");        scanf("%d",&b);
    phepcong();
    pheptru();
    phepnhan();
    phepchia();
    KetThuc = chon();
    }
    while(!KetThuc);
}
