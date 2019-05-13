#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

void capphat()
{
    char *chuoi;
    chuoi = calloc(40,sizeof(char));
    chuoi = "chao ban! Ban dang lam cai gi o day vay";
    printf("\n*%s*",chuoi);
    getch();
}
main()
{
    char ten[30];
    char chuc_vu[30];
    printf("\nnhap ho ten = ");
    fflush(stdin);
    gets(ten);
    printf("\nchuc vu : ");
    fflush(stdin);
    gets(chuc_vu);
    printf("Ong/ba:%s\nChuc vu:%s",ten,chuc_vu);
    capphat();
    getch();

}
