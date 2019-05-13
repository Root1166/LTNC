#include <stdio.h>
#include <conio.h>
typedef struct {
    char ten[20];
    int msv;
    float toan;
} svien;
void nhap(svien sv[],int n)
{
int i;
for(i=0;i<n;i++)
{
        printf("----------Thong tin svien %d\n",i+1);
        printf("Ten: ");
        fflush(stdin);
        gets(sv[i].ten);
        printf("Ma sv: ");
        scanf("%d",&sv[i].msv);
        printf("Diem toan: ");
        scanf("%f",&sv[i].toan);
}
}
float dtb(svien sv)
{
return(sv.toan);
}
int tl(svien sv)
{
        if(sv.toan<5) return 1;
        else return 0;
}
void thilai(svien sv)
{
        if(sv.toan<5) printf("Toan");
        if(tl(sv)==0) printf("           ");
}
void xeploai(svien sv)
{
        char xl[4];
        if(dtb(sv)>=9)
        strcpy(xl,"  XS");
        else if(dtb(sv)>=8)
        strcpy(xl,"  G");
        else if(dtb(sv)>=6.5)
        strcpy(xl,"  Kha");
        else if(dtb(sv)>=5)
        strcpy(xl,"  TB");
        else if(dtb(sv)>=3)
        strcpy(xl,"  Y");
        else
        strcpy(xl,"Kem");
        printf("%-16s",xl);
}
void hbong(svien sv)
{
char hbong;
hbong="x";
if(dtb(sv)>7 && tl(sv)==0) hbong='X';
printf("%-100c%",hbong);
}
void hien(svien sv[],int n)
{
int i;
printf("---Ten-----Masv----Toan---XL----------Thilai------Hbong\n");
for(i=0;i<n;i++)
{
printf("%-12s%-6d%",sv[i].ten,sv[i].msv,sv[i].toan);
printf("%-6.1f%",dtb(sv[i]));
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
printf("So sinh vien: ");
scanf("%d",&n);
nhap(sv,n);
hien(sv,n);
getch();
}
