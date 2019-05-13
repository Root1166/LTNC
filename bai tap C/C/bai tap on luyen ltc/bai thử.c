#include <stdio.h>
#include <conio.h>
typedef struct {
char ten[20];
int msv;
float toan,ltc,ta,triet;
} svien;
void nhap(svien sv[],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("----------Thong tin svien %d\n",i+1);
printf("Ten: "); fflush(stdin); gets(sv[i].ten);
printf("Ma sv: "); scanf("%d",&sv[i].msv);
printf("Diem toan: "); scanf("%f",&sv[i].toan);
printf("Diem LTC: "); scanf("%f",&sv[i].ltc);
printf("Diem T.Anh: "); scanf("%f",&sv[i].ta);
printf("Diem triet: "); scanf("%f",&sv[i].triet);
}
}
float dtb(svien sv)
{
return(sv.ltc + sv.toan + sv.ta + sv.triet)/4;
}
int tl(svien sv)
{
if(sv.toan<5 || sv.ltc <5 || sv.ta<5 || sv.triet<5) return 1;
else return 0;
}
void thilai(svien sv)
{
if(sv.toan<5) printf("Toan, ");
if(sv.ltc<5) printf("LTC, ");
if(sv.ta<5) printf("T.Anh, ");
if(sv.triet<5) printf("Triet");
if(tl(sv)==0) printf(" ");
}
void xeploai(svien sv)
{
char xl[4];
if(dtb(sv)>=9) strcpy(xl,"XS");
else if(dtb(sv)>=8) strcpy(xl,"G");
else if(dtb(sv)>=6.5) strcpy(xl,"Kha");
else if(dtb(sv)>=5) strcpy(xl,"TB");
else if(dtb(sv)>=3) strcpy(xl,"Y");
else strcpy(xl,"Kem");
printf("%-4s",xl);
}
void hbong(svien sv)
{
char hb;
hb=' ';
if(dtb(sv)>7 && tl(sv)==0) hb='x';
printf("%-30c",hb);
}
void hien(svien sv[],int n)
{
int i;
printf("---Ten-----Ma sv--Toan--LTC--T.Anh--Triet--DTB--XL---------Thilai----------Hb\n");
for(i=0;i<n;i++)
{
printf("%-12s%-6d%-6.1f%-6.1f",sv[i].ten,sv[i].msv,sv[i].toan,sv[i].ltc);
printf("%-6.1f%-6.1f%-6.1f",sv[i].ta,sv[i].triet,dtb(sv[i]));
xeploai(sv[i]);
thilai(sv[i]);
hbong(sv[i]);
printf("\n");
}
}
void main()
{
svien sv[50];
int n;
printf("So sinh vien: "); scanf("%d",&n);
nhap(sv,n);
hien(sv,n);
getch();
}
