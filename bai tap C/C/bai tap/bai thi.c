#include<math.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
int main(){
    int n;

    do {
        printf("\n\n\t\t\t\t_*_*_*_*____MENU____*_*_*_*____\t\t\t\n\n\n");
        printf("\t\t\t1.Chuc nang 1:kiem tra tam giac.\t\t\t\n");
        printf("\t\t\t2.Chuc nang 2:trung binh cong cac so chia het cho 3.\t\t\t\n");
        printf("\t\t\t3.Chuc nang 3:in chuoi theo chieu nguoc lai.\t\t\t\n");
        printf("\t\t\t4.____Thoat____\t\t\t\n");
        printf("\t\t\t-Moi ban chon :");
        scanf("%d",&n);
    switch(n){
case 1:{
    int a,b,c;
    printf("nhap do dai 3 canh:\n");
    printf("A="); scanf("%d",&a);
    printf("B="); scanf("%d",&b);
    printf("C="); scanf("%d",&c);
    if (a+b > c && b+c>a && a+c>b && a>0 && b>0 && c>0)
    printf("Do la 3 canh cua tam giac\n");
    else printf("Do khong phai la 3 canh cua tam giac\n");
    }   break;
case 2:{
    int n,i;
    printf("Nhap vao so luong day so nguyen: ");
    scanf("%d",&n);
    int dem=0,s=0;
    float tb;
    int a[n];
    for (i=0;i<n;i++)
    {
        printf("Nhap phan tu thu %d : ",i+1);
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        if (a[i]%3==0)
        {
            s+= a[i];
            dem++;
        }
    }
    tb=(float)s/dem;
    printf("trung binh cong la: %f",tb);
    break;
    }
case 3:{
    int j;
    char ch[255];
    fflush(stdin);
    printf("Nhap vao chuoi ky tu: \n");
    gets(ch);
    for( j=strlen(ch)-1;j>=0;j--){
    printf("%c",ch[j]);
    }
    } break;
case 4: break;
    default : printf("Moi ban nhap lai!!");
    }
    }while(n);
return 0;
}
