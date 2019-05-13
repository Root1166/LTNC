#include <stdio.h>
#include <conio.h>
float a[3][4]={
    {25,0,3,5},
    {6,4,0,2},
    {30,4,-7,3}
};
int main()
{
    int i,j,k;
    for (i=0;i<3;i++)
        for (j=0;j<4;j++)
            if (a[i][j]<0)
            goto timthay;
            printf ("ma tran khon co phan tu am");
            goto ketthuc;
    timthay:printf("phan tu am dau tien trong ma tran a[%d][%d] = %.0f",i+1,j+1,a[i][j]);
    ketthuc:
        ;
        getch();


}
