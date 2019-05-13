#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
     struct sinh_vien
{
 char hoten[30];
 int tuoi;
 float diemtb;
 char phone[15];
 char diachi[255];
}sinhvien[100];
    int i, n;
    printf("nhap so sinh vien = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("NHAP THONG TIN VE SINH VIEN\n");
        printf("Ho Ten SV:");
        fflush(stdin);
        gets(sinhvien[i].hoten);
        printf("Tuoi:");
        scanf("%d",&sinhvien[i].tuoi);
        printf("DiemTb:");
        scanf("%f",&sinhvien[i].diemtb);
        printf("Dia chi:");
        gets(sinhvien[i].diachi);
        printf("SDT:");
        scanf("%c",sinhvien[i].phone);
    }
    printf("DANH SACH SINH VIEN\n");
    printf("\tHoten \t tuoi \t DiemTb \t Diachi \t SDT\n");
    for(i=0;i<n;i++)
    {
        printf("\t %s\t %d\t %s\t %s\t %c ",sinhvien[i].hoten,sinhvien[i].tuoi,sinhvien[i].diemtb,sinhvien[i].diachi,sinhvien[i].phone);

    }
getch();

}
