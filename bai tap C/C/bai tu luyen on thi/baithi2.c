#include<stdio.h>
#include<conio.h>
void bai1()
{
    int n,i,s=0;
    printf("\n\t\tCHUONG TRINH TONG TU 1 -> N:\n");
    printf("nhap n = ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        s+=i;
    }
    printf("gia tri cua sum = %d\n",s);
    getch();

}
void bai2()
{
    float c=0.0001,x, mu=1,s=0;
    int gt=1,i=1;
    printf("\n\t\tCHUONG TRINH TINH GIA TRI CUA e^X:\n");
    printf("nhap x=");
    scanf("%f",&x);

    while(mu/gt>c)
     {
        s=s+1.0*(mu/gt);
        mu=mu*x;
        gt=gt*i;
        i++;
     }
    printf("e^x = %4.6f",s);
    getch();
}
void bai3()
{
    int a[30],n,i,j,temp;
    printf("\n\t\tCHUONG TRINH SAP XEP THEO CHIEU TANG DAN:\n");
    printf("nhap n = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("nhap phan tu a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("\nday vua moi nhap la:\n");
     for(i=1;i<=n;i++)
        printf("%5d",a[i]);
     //sap xep:
     for(i=1;i<=n-1;i++)
        for(j=i+1;j<=n;j++)
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

    printf("\nday sap xep theo chieu tang dan la :\n");
    for(i=1;i<=n;i++)
        printf("%5d",a[i]);
    getch();

}
void bai4()
{
    int n,i,gt=1;
    printf("\n\t\tCHUONG TRINH TINH N!\n");
    printf("nhap gia tri n = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        gt*=i;
    }

    printf("gia tri cua %d! = %d",n,gt);
getch();
}
void bai5()
{
    int a[30],b[30],i,n,j,s=0,dem=0,max;
    printf("\n\t\tCHUONG TRINH TINH TONG CAC SO CHIA HET CHO 3:\n");
    printf("nhap n = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("nhap phan tu a[%d] = ",i);
        scanf("%5d",&a[i]);
        b[i]=a[i];
    }
    printf("\nday vua moi nhap la:\n");
     for(i=1;i<=n;i++)
        printf("%5d",a[i]);
    //tim
    for(i=1;i<=n;i++)
        if(a[i]%3==0)
            {
                s+=a[i];
                dem++;
            }
        printf("\ntong cac so chia het cho 3 = %d\n",s);
        i=1;
        while(a[i]%3!=0)
        i++;
        max=a[i];
        printf("\nso chia het cho ba la: %d",dem);
        printf("\n vi chi so chi het cho 3: ");
        for(i=1;i<=n;i++)
            if(b[i]==max)
                printf("%d ",i);

getch();
}
main()
{
    char tl;
    printf("\t\t\t************************\n");
    printf("\t\t\t**                    **\n");
    printf("\t\t\t**                    **\n");
    printf("\t\t\t**     Bui van cong   **\n");
    printf("\t\t\t**                    **\n");
    printf("\t\t\t**      AT13CLC01     **\n");
    printf("\t\t\t**                    **\n");
    printf("\t\t\t**                    **\n");
    printf("\t\t\t************************\n");
    do{
        printf("\n\t\tphim 1: Chuong trinh tinh tong <= N:");
        printf("\n\t\tphim 2: Chuong trinh tinh e^x");
        printf("\n\t\tphim 3: Chuong trinh sap xep day theo chieu tang dan:");
        printf("\n\t\tphim 4: Chuong trinh tinh n !:");
        printf("\n\t\tphim 5: Chuong trinh tong cac so chia het cho 3 trong day");
        printf("\n\t\tphim 6: ket thuc:");
        printf("\n\t\t=>chon phim ");
        fflush(stdin);
        tl = getchar();
        switch(tl){
        case '1': bai1();  break;
        case '2': bai2();  break;
        case '3': bai3();  break;
        case '4': bai4();  break;
        case '5': bai5();  break;
        case '6':printf("\n\n\n\t\t Cam on quy khach dax su dung truong trinh.\n\t\t \tgoodbyte and see you again"); getch(); break;
        default : printf("\n\n\tQuy khach da nhap sai phim.Xin Quy khach thu lai:");
                getch();
                break;
        }

    }while(tl !='6');
}
