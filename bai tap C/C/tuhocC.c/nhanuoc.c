#include <stdio.h>
#include <conio.h>
main()
{
    int i,n,s=1;
    printf(" \n\tChuong trinh liet ke tat ca va nhan \"uoc so\" cua so nguyen duong n ");
    do{
    printf("\nnhap gia tri n = ");
    scanf("%d",&n);
    }while(n <= 0 && printf(" gia tri cua n > 0.Xin nhap lai\n"));
    i=1;
    while(i<=n){
        if(n%i==0)
        {
            printf("%4d",i);
            s*=i;
        }
            i++;
    }
    printf("\n\ngia tri cua tong uoc so la: %d ",s);
    getch();

}
