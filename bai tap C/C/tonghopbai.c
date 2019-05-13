#include <stdio.h>
#include<conio.h>
#include<malloc.h>
#include<string.h>
void bai1()
{
    int *p;
    int n,m,j,i;
    printf("nhap mang a = ");
    scanf("%d",&n);
    p =(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("nhap phan tu a[%d] = ",i+1);
        scanf("%d",p+i);
    }

    {
    printf("nhap mang b = ");
    scanf("%d",&m);
    p =(int *)malloc(m*sizeof(int));
    for(j=0;j<m;j++){
            printf("nhap phan tu b[%d] = ",j+1);
            scanf("%d",p+j);
        }
    }
    //in
    printf("\nday a va b vua moi nhap la :\n");
    printf("day a la: ");
    for(i=0;i<n;i++){
        printf("%4d",*(p+i));
    }
    printf("\nday b la: ");
    for(j=0;j<m;j++){
       printf("%4d",*(p+j));
    }
//tinh tong hai mang;

}
void bai2()
{
    int a[30],n,m,i,j,max,min;
    printf("\nchuong trinh tim gia tri max va gia tri min\n");
    printf("nhap n = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("nhap phan tu a[%d] = ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nday a vua moi nhap la :\n");
    printf("day a la: ");
    for(i=0;i<n;i++){
        printf("%4d",a[i]);
    }
    //tim max,min
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++){
         if(max < a[i])
                max = a[i];
         if (min > a[i])
                min=a[i];
    }
    printf("\ngia tri cua max = %d ",max);
    printf("\ngia tri cua min = %d  ",min);
    getch();
}
void bai3()
{
    int a,b,c,d,e,f,dx,dy,delta;

	printf("\t Giai he phuong trinh bac nhat 2 an. \n");
	printf("\t\t ax + by = c \n");
	printf("\t\t dx + ey = f \n\n");
    printf("nhap a = ");  scanf("%d",&a);
    printf("nhap b = ");  scanf("%d",&b);
    printf("nhap c = ");  scanf("%d",&c);
    printf("nhap d = ");  scanf("%d",&d);
    printf("nhap e = ");  scanf("%d",&e);
    printf("nhap f = ");  scanf("%d",&f);
    //tinh
    delta = a*e - b*d;
    dy = a*f - c*d;
    dx = c*e - b*f;
    if(delta!=0)
        printf("phuong trinh co nghiem duy nhat \n x= %d \n y = %d ",dx/delta,dy/delta);
        else{
    if((dx==0)&&(dy==0))
       printf("\nhe phuong trin vo nghiem");
    else printf("\nhe phuong trinh vo so nghiem");
        getch();
        }
}
void bai4()
{
    int a,b,UCLN;
    printf("nhap a = ");  scanf("%d",&a);
    printf("nhap b = ");  scanf("%d",&b);
    if(a>b)
         UCLN=a-b;
    else UCLN=b-a;
    printf("uoc chung lon nhat cu hai so = %d ",UCLN);

    getch();
}
void bai5()
{
    int a,b,c;
    float delta,x1,x2;
    printf ("\t\tCHUONG TRINH TINH PHUONG TRINH BAC HAI AN X\n");
    printf("\t\t\t     ax^2 + bx +c = 0\n");

    do{
    printf("nhap a = ");  scanf("%d",&a);
    }while(a==0);
    printf("nhap b = ");  scanf("%d",&b);
    printf("nhap c = ");  scanf("%d",&c);
    delta = b*b - 4*a*c;
    x1=(-b-sqrt(delta))/(2*a);
    x2=(-b+sqrt(delta))/(2*a);
    {
        if(delta<0)
            printf("\nphuong trinh vo nghiem\n");
        else if(delta=0)
            printf("phuong trinh co nghiem duy nhat x1=x2= %5.1f",(float)(-b)/(2*a));
        else
            printf("phuong trinh co hai nghiem phan biet \nx1=%5.1f \nx2=%5.1f ",x1,x2);
    }
}
void bai6()
{
    int n;
    printf("\n\t\tChuong trinh xem ngay thang co bao nhieu ngay\n");
    printf("nhap thang ma ban can muon xem = ");
    scanf("%d",&n);
    switch(n){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    printf("\nthang co 31 ngay "); break;
    case 2:
    printf("\nthang co 29 ngay ");break;
    case 4:
    case 6:
    case 9:
    case 11:
    printf("\nthang co 30 ngay\n");
    break;
    }
    getch();

}
void bai7()
{
  int a[20],i,n,m,sum=0,suml=0;
    printf ("nhap  n = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("nhap phan tu a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("\nday so vua moi nhap la:\n");
    for(i=1;i<=n;i++)
        printf("%6d",a[i]);
    for (i=1;i<=n;i++)
    {
        if(a[i]>0)
            sum+=a[i];
        else
            suml+=a[i];
    }

    printf ("\ngia tri cua tong cac so duong =%d ",sum);
    printf ("\n\ngia tri cua tong cac so am =%d ",suml);
    getch();


}

void bai8()
{
   int i,s=0,n;
   printf("\n\t\tChuong trinh tinh gia tri cua bieu thuc\n");
   printf("\t\tp(n) = 13 + 23 + . . . n3 \n");
   printf("nhap n = ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
    {
        s+=(i*i*i);
    }
    printf("\ngia tri cua bieu thuc = %d",s);
    getch();

}
main()
{
    char tl;

    do{
        system("cls");
        printf("\n\t\t\t   CHUONG TRINH TONG HOP KIEN THUC\n");
        printf("\n\t\tHo tem: Bui Van Cong ");
        printf("\t\t\tLop:AT13CLC01");
        printf("\n\tMENU:\n");
        printf("\n\t\tphim 1: Chuong trinh tinh tong ");
        printf("\n\t\tphim 2: Chuong trinh tim gia tri max va min ");
        printf("\n\t\tphim 3: Chuong trinh gia phuong trinh tuyen tinh  ");
        printf("\n\t\tphim 4: Chuong trinh tim uoc chung lon nhat cua hai so a va b");
        printf("\n\t\tphim 5: chuong trinh gia he phuong trinh bac 2 an x ");
        printf("\n\t\tphim 6: Chuong trinh kiem tra ngay thang nam");
        printf("\n\t\tphim 7: Chuong trinh dem tong so duong so am trong day");
        printf("\n\t\tphim 8: Chuong trinh tinh gtbt p(n) = 13 + 23 + . . . n3 ");
        printf("\n\t\tphim 9: thoat:");
        printf("\n\t\t=>chon: ");
        fflush(stdin);
        tl=getchar();
        system("cls");
        switch(tl){
        case '1'  : bai1();        break;
        case '2'  : bai2();        break;
        case '3'  : bai3();        break;
        case '4'  : bai4();        break;
        case '5'  : bai5();        break;
        case '6'  : bai6();        break;
        case '7'  : bai7();        break;
        case '8'  : bai8();        break;
        case '9' : printf("\n\t\tCam on quy khac da su dung truong trinh:");
                    printf("\n\t\t\tgoodbyte hehehehe\n\n"); getch();  break;
        default : printf("\n\t\tQuy khach chon sai. MOi Quy khach chon lai:"); break;
        }
    }while(tl != '9');

}
