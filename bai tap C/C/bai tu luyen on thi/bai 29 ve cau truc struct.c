#include<stdio.h>
#include<conio.h>
 int n,i;
  struct{
 char hoten[30];
 float diemtb;
 char phone[15];
 char diachi[255];
 }sinhvien[100];
 void nhapSV()
 {
     printf("nhap so sinh vien = ");
     scanf("%d",&n);
     for (i=1;i<=n;i++)
     {
        printf("nhap thonng tin ve sinh ven thu %d ",i);
        printf("\nho va ten :");
        fflush(stdin);
        gets(sinhvien[i].hoten);
        printf("DiemTB:");
        scanf("%f",&sinhvien[i].diemtb);
        printf("\nSDT:");
        scanf("%s",&sinhvien[i].phone);
        printf("Diachi:\n");
        fflush(stdin);
        gets(sinhvien[i].diachi);
     }
 }
void inSV()
{
    printf("%-5s%-28s%-15s%-10s%-255s","STT","    Ho ten","So dien thoai","  Diem TB","  Dia chi");
	for(i=1;i<=n;i++){
		printf("\r\n%-9d%-28s%-15s%-10.2f%-255s",i,sinhvien[i].hoten,sinhvien[i].phone,sinhvien[i].diemtb,sinhvien[i].diachi);

}
}
main()
{
    printf("                       \tDanh SACH SINH VIEN\n");
    nhapSV();
    inSV();
    getch();
}
