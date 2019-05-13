#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<string.h>
void bai1()
{
    int a,b,c;
    printf("nhap a = "); scanf("%d",&a);
    printf("nhap b = "); scanf("%d",&b);
    printf("nhap c = "); scanf("%d",&c);
    if ((a+b<c)||(a+c<b)||(b+c<a))
        printf("\nkhong phai ba canh cua mot tam giac \n");
    if ((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
        printf("\nTam giac do la tam giac vuong\n");
    else if(((a==b)&&(a!=c))||((a==c)&&(a!=b))||((b==c)&&(b!=a)))
        printf("\nTam giac do la tam giac can \n");
    else if (a==b==c)
        printf("\nTam giac do la tam giac dieu \n");
    else if (((a*a+b*b==c*c)&&(a==b))||((a*a+c*c==b*b)&&(a==c))||((b*b+c*c==a*a)&&(b==c)))
        printf("\nTam giac do la tam vuong can");
    else printf("\ntam giac do la tam giac thuong\n");
    getch();
}
 void bai2()
{
    float a,b,c,d,e,f,delta,dx,dy;
    printf("\n\t\t chuong trinh giai he phuong trinh\n");
    printf("\n\t\t\t ax + by = c\n");
    printf("\n\t\t\t dx + ey = f\n\n");
    printf("nhap a = "); scanf("%f",&a);
    printf("nhap b = "); scanf("%f",&b);
    printf("nhap c = "); scanf("%f",&c);
    printf("nhap d = "); scanf("%f",&d);
    printf("nhap e = "); scanf("%f",&e);
    printf("nhap f = "); scanf("%f",&f);
    delta = a*e - b*d;
    dx    = c*e - b*f;
    dy    = a*f - c*d;
    if (delta != 0)
        printf("\n phuong trinh co nghiem duy nha \n x = %6.1f \n y = %6.1f ",dx/delta,dy/delta);
    else{
     if ((dx==0)|| (dy==0))
            printf(" \nphuong trinh vo nghien \n");
     else
            printf("\n phuong trinh vo so nghiem \n");

    }

getch();
}

void bai3()
{
    int n,i,j,gt;
    float s;
    printf("\n\t\t    CHUONG TRINH TINH TONG\n");
    printf("\n\t\tS = 1 + 1/2! + 1/3! +...+ 1/n!\n");
    printf("\nnhap gia tri cua n = ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
       {
           gt=1;
           for(j=1;j<=i;j++)
           {
               gt=gt*j;
           }
           s+=(float)(1/(float)gt);
       }
    printf("\ngia tri cu tong s = %5.4f",s);
    getch();

}
void bai4()
{
    int i=1,gt=1;
    float c=0.0001,mu=1,s=0,n;
    printf("nhap gia tri cua x = ");
    scanf("%f",&n);
    while(mu/gt>c)
    {
         s=s+1.0*(mu/gt);
         i++;
        gt=gt*i;
        mu=mu*n;

    }
    printf("gia tri cua e^x = %5.1f",s);
    getch();


} printf("\n\t\tDanh sach sinh vien trung tuyen \n");
    printf("\n\t Bui van Cong");
    printf("\t\t\t AT13CLC01\n");
void bai5()
{

    int a[20],b[20],n,i,j,k,link;
    printf("nhap n = ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("nhap phan tu thu a[%d] = ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nDay so ban vua nhap la\n");
    for(i=0;i<n;i++)
        printf("%6d",a[i]);
    // sawp xep tang dan;
    for( i=0;i<=n-1;i++)
        for(j=i+1;j<=n;j++)
        {
        if(a[i]>a[j])
           {
            link= a[i];
            a[i]=a[j];
            a[j]=link;
           }
        }
    printf("\n\nDay sap xep theo chieu tang dan la :\n");
    for(i=0;i<n;i++)
        printf("%6d",a[i]);

    // chen them so

    printf("\n\nnhap so ban can chen k = ");
    scanf("%d",&k);
    for(i=0;i<n;i++)
        if (a[i]>k){
            for(j=n;j>i;j--)
                a[j] = a[j-1];
                a[i] = k;
                break;
            }
        else
            a[n]=k;
        // in ra day vua chen them k
        printf("\nday chen them la :\n");
            for(i=0;i<n+1;i++)
                printf("%5d",a[i]);
}
 void bai6()
{
     int a[30],n,i,tongc=0,tongl=0,demc=0,deml=0;
    printf("nhap so phan tu n = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n nhap phan tu thu a[%d] = ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nDay ban vua nhap la :\n");
        for(i=0;i<n;i++)
            printf("%5d",a[i]);
    // tinh tong chan le trong mang

    for (i=0;i<n;i++)
    {
        if (a[i] % 2 == 0)
        {
            demc++;
            tongc+= a[i];
        }
        else
        {
            deml++;
            tongl+=a[i];

        }
    }
    printf("\ntong so chan trong mang la = %d",tongc);
    printf("\nso chan trong mang la : %d",demc);
    printf("\ntong so le trong mang la  = %d",tongl);
    printf("\nso le trong day la :%d",deml);
    getch();
}

void bai7()
{
     int a[30],b[30],n,i,j;
     float  tbc1,tbc2,demd,dema,duong=0,am=0;
    printf("nhap so phan tu n = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n nhap phan tu thu a[%d] = ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nDay ban vua nhap la :\n");
        for(i=0;i<n;i++)
            printf("%5d",a[i]);
    //tim UCLN am duong trong mang
    // cac ban co biet khong no la nhu vay ddays
    //no luoon lam cho ban buoong nhueng hay vui len neu ban cuoi len thi toi thay ban dep nhat trong tam tri cua toi
    // congthah 9768 noi mot la mot khong co hai lan dau nha
    // tinh la tinh khong co chuyen la khong tinh dau  nha sau nay cong thanh tai ui  cac ban cua toi se khong coi thuong cong nua nha
    // cong thanh luon la nguoi tot nhat cac ban co biet khong tiom duoc nguoi ban ma hieu duoc minh la rat kho cac ban a
    // no luon lua toi thui
    //sau khi cong hoc trong lop chat luong cao thi thay rang cong van co rot lam cac ban a
    //hay giup cong tro thanh mot nguoi tai gioi nha cac ban toi oi hay luoon dong hanh cung cong tren moi con duong nha cong thanh 9768
    //code tren la do cong thanh code do cac ban co thay hay khong har cac ban
    //minh ase tim hieu them nhieu ve mang nua nha sau nay minh muon minh tro thanh mot nguoi gioi ve mang xa hoi nay
    //thoi minh di tim UCLN day cac ban chao moi nguoi !than

    for(i=0;i<n;i++)
    {
        if(a[i]>0){
        duong+=a[i];
        demd++;
        }
        else if (a[i]< 0){
        am+=a[i];
        dema++;
        }
    }
    //tbc1=duong/demd;
    //tbc2=am/dema;
   printf(" \n\nday la trung binh cong cac so am duong trong mang\n");
   printf("\ntrung binh cong so duong la :%5.1f",duong/demd);
   printf("\ntrung binh cong so am la : %5.1f",(float)am/(float)dema);
    getch();
}
void bai8()
{
    int a[30],b[30],n,i,j,max,min;
    printf("nhap so phan tu n = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n nhap phan tu thu a[%d] = ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nDay ban vua nhap la :\n");
        for(i=0;i<n;i++)
            printf("%5d",a[i]);

    //tim min va max trong  mang
    max= a[0];
    min= a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    printf("\ngia tri max = %d",max);
    printf("\ngia tri min = %d",min);
}
void bai9()
{
    int n,i;
    printf("\n\t\tchuong trinh kiem tra so nguyen to\n");
    printf("nhap so = ");
    scanf("%d",&n);
    if (n%2==0)
    {
        printf("\nkhong phai so nguyen to\n");
    }
    else
    {
        printf("\nla so nguyen to\n");
    }
    getch();

}

main()
{
    char tl;
    do
    {
        system("cls");
        printf("\n\t\t\t   CHUONG TRINH GOP TAT CAC BAI HOC \n");
        printf("\n\t\tHo ten: Bui Van Cong");
        printf("\t\t\tLop:AT13CLC01\n\n\n");
        printf("\n\t MENU: \n");
        printf("\n\t\tphim 1: nhap a,b,c xet tam giac ");
        printf("\n\t\tphim 2: giai he phuong trinh bac nhat hai an x va y");
        printf("\n\t\tphim 3: tinh tong s = 1 + 1/2! + 1/3! + 1/4! +...+ 1/n!");
        printf("\n\t\tphim 4: tinh e^x ");
        printf("\n\t\tphim 5: nhap day xap xep tang dan,khoa k tren tren so> dan ");
        printf("\n\t\tphim 6: nhap vao mot mang tinh tong chan le ");
        printf("\n\t\tphim 7: nhap mang tim UCLN duong va am");
        printf("\n\t\tphim 8: nhap mang tim gia tri max va min ");
        printf("\n\t\tphim 9: nhap  vao so xem do co phai so nguyen to hay khong ");
        printf("\n\t\tphim 0: thoat ");
        printf("\n\t\t=>chon phim: ");
        fflush(stdin);
        tl = getchar();
        system("cls");
        switch(tl){
        case '1': bai1();      break;
        case '2': bai2();      break;
        case '3': bai3();      break;
        case '4': bai4();      break;
        case '5': bai5();      break;
        case '6': bai6();      break;
        case '7': bai7();      break;
        case '8': bai8();      break;
        case '9': bai9();      break;
        case '0': printf("\n\t\t Cam on quy khach thuc hien truong trinh\n"); getch();   break;
        default : printf("\n\t\t Quy khach da chon sai phim.Moi quy khach chon lai truong trinh\n"); getch(); break;
        }
    }while(tl!= '0');
}
