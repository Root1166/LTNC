#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<malloc.h>cong
#include<stdlib.h>
main()
{
    char *chuoi;
    int ngaysinh;
    char* chucvu;
    int n;
    chuoi    = calloc(100,sizeof(chuoi));
    ngaysinh = calloc(50,sizeof(ngaysinh));
    chucvu   = calloc(100,sizeof(chucvu));
    printf("\nnhap ho va ten: ");
    gets(chuoi);
    printf("\nnhap ngay sinh: ");
    gets(ngaysinh);
    printf("\nCapChuc:  ");
    gets(chucvu);
    printf("\nho va ten:  ");
    puts(strupr(chuoi));
    printf("\nNgay sinh:");
    puts(ngaysinh);
    printf("\nChuc Vu:");
    puts(strupr(chucvu));
    n = strlen(chuoi);
    printf("\n chuoi nay gom :%d ky tu ke ca ky tu trong ",n);
    getch();
}
