#include <stdio.h>
#include <conio.h>
#include <malloc.h>
#include <String.h>
void bai1()
{
    int a, b, c, d, e, f;
    float delta,dx,dy;
    printf("\n\tgiai he phuong trinh bac nhat hai an\n");
    printf("\t\t     ax + by = c\n");
    printf("\t\t     dx + ey = f\n");
    printf("nhap so a = "); scanf("%d",&a);
    printf("nhap so b = "); scanf("%d",&b);
    printf("nhap so c = "); scanf("%d",&c);
    printf("nhap so d = "); scanf("%d",&d);
    printf("nhap so e = "); scanf("%d",&e);
    printf("nhap so f = "); scanf("%d",&f);

    {
        delta = a*e - d*b;
        dx    = c*e - b*f;
        dy    = a*f - d*c;
    }
    if (delta !=0)
        printf("phuong trinh co nghiem duy nhat:\n x = %6.1f \n y= %6.1f",dx/delta,dy/delta);
    else if ((dx==0) && (dy==0))
        printf("phuong trin da cho vo nghiem:");
    else printf("phuong trinh vo so nghiem:");
    getch();
}
void bai2()
{
    int a,b,c;
    printf("nhap so a = "); scanf("%d",&a);
    printf("nhap so b = "); scanf("%d",&b);
    printf("nhap so c = "); scanf("%d",&c);






}
void bai3()
{
    int a[30],n,i,j;
    int max=0,min=0;
    printf("\n\tChuong trinh tim min max trong day so moi nhap:\n");
    printf("nhap n = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("nhap phan tu a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("\nday ban vua nhap la :\n");
    for(i=1;i<=n;i++)
        printf("%4d",a[i]);
    //tim max
    for (i=1;i<=n;i++)
        if(max<a[i])   max=a[i];
    printf("\ngia tri cua max = %d ",max);
        getch();
}
void bai4()
{

    int a[30],b[30],n,i,j,min;
    printf("\n\tChuong trinh tim min trong day so moi nhap:\n");
    printf("nhap n = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("nhap phan tu a[%d] = ",i);
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    printf("\nday ban vua nhap la :\n");
    for(i=1;i<=n;i++)
        printf("%4d",a[i]);
    //tim min
    min = a[1];
    for(i=1;i<=n;i++)
    {
        if(min>a[i])
        min = a[i];
    }

    printf("\ngia tri cua min trong day la %d ",min);
   for(i=1;i<=n;i++)
		if(b[i]==min)
			printf("\nphan tu thu %d ",i);
	getch();
}
void bai5()
{
   int a[30],b[30],n,i,duong=0,am=0;
   int d=0,k=0;
    printf("\n\tChuong trinh tinh tong duong am trong day so moi nhap:\n");
    printf("nhap n = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("nhap phan tu a[%d] = ",i);
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    printf("\nday ban vua nhap la :\n");
    for(i=1;i<=n;i++)
        printf("%4d",a[i]);
    //tinh tong;
    for(i=1;i<=n;i++)
    {
        if(a[i]>0)
            duong+=a[i];
            d++;
    }
    for (i=1;i<=n;i++)
    {
        if (a[i]<0)
            am+=a[i];
            k++;
    }
    printf("\ngia tri cua tong duong trong day la :%d ",duong);
    printf("\nso duong tron day la :%d",d);
    printf("\n\ngia tri cua tong am trong day la :%d ",am);
    printf("\nso duong tron day la :%d",k);
    getch();

}
void bai6()
{
    float* x;
    int n, i, j, dem ,k;
    float tbc1=0,tbc2=0,ta=0,td=0;
    printf("\n\t\tChuong trinh tinh TBC am duong\n");
    printf("\n Nhap so luong phan tu: ");
    scanf("%d", &n);
    x = (float*)malloc(n*sizeof(float));

    dem = 0;
    k = 0;
    for( i = 0; i < n; i++)
    {
        printf("\n Nhap phan tu thu %d: ", i);
        scanf("%f", &x[i]);
        if(x[i] < 0)
        {
            ta += x[i];
            dem++;
        }
        else
        {
            td += x[i];
            k++;
        }
    }
    tbc1 = ta / dem;
    tbc2 = td / k;
    printf("\n TBC cac so am la: %.2f", tbc1);
    printf("\n TBC cac so duong la: %.2f", tbc2);
    printf("\n Tong cac so am la: %.2f", ta);
    printf("\n Tong cac so duong la: %.2f", td);
    free(x);
    getch();

}
void bai7()
{

    int n,m,i,j,k=0;
    float* x;
    float* y;
    float a[30],b[30],c[60];
    printf("\n\t\tchuong trinh gop hai nhom thanh mot\n");
    printf("nhap n = ");
    scanf("%d",&n);
    x = (float *)malloc(n*sizeof(float));
    for(i=0;i<n;i++)
    {
        printf("nhap phan tu a[%d] = ",i+1);
        scanf("%f",&a[i]);
    }
    printf("nhap m = ");
    scanf("%d",&m);
    y = (float *)malloc(m*sizeof(float));
    for(j=0;j<m;j++)
    {
        printf("nhap phan tu thu b[%d] = ",j+1);
        scanf("%f",&b[j]);
    }
    //sep hai day thanh 1 day tang dan;
    i=j=k=0;
    while(k<=n+m)
    {
        if (i>=n)
        {
             c[k++]=b[j++];
             continue;
        }
        if( j>=m )
        {
             c[k++]=a[i++];
             continue;

        }
        if (a[i]<b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }
    printf("\nday a la:\n");
    for(i=0;i<n;i++)
        printf("%8.1f",a[i]);


    printf("\nday b la:\n");
    for (j=0;j<m;j++)
        printf("%8.1f",b[j]);


    printf("\nday sap xem hai day thanh mot day tang dan la:\n");
    for(k=0;k<n+m;k++)
        printf("%8.1f",c[k]);

    getch();


}
main()
 {
     char tl;
     printf("               Bui Van Cong  ");
     printf("                AT13CLC01    ");
     do
     {
         printf("\n\tMENU:\n");
         printf("\n\tphim 1: Chuong trinh gia he phuong trinh TT bac nhat hai an:");
         printf("\n\tphim 2: Chuong trinh tinh nhap mot so nguyen sau do in ra chu:");
         printf("\n\tphim 3: Chuong trinh tim gia tri max  trong day so :");
         printf("\n\tphim 4: Chuong trinh tim gia tri min trong day so :");
         printf("\n\tphim 5: Chuong trinh tong so duong am tron day so :");
         printf("\n\tphim 6: Chuong trinh tinh TBC am duong trong day ");
         printf("\n\tphim 7: Chuong trinh nhap hai day -> gop thanh 1 day cung ->");
         printf("\n\tphim 8: Ket thuc:");
         printf("\n\t=> chon phim: ");
         fflush(stdin);
         tl = getchar();
         switch(tl){
            case '1' : bai1();   break;
            case '2' : bai2();   break;
            case '3' : bai3();   break;
            case '4' : bai4();   break;
            case '5' : bai5();   break;
            case '6' : bai6();   break;
            case '7' : bai7();   break;
            case '8' : printf("\n\t\tCam on quy khach da su dung truong trinh\n"); getch(); break;
            default  : printf ("\n\t\t phim ban chon khong dung vui long thu lai \n");
                    getch();
                    break;
         }
     }while(tl != '8');
 }
