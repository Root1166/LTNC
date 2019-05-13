#include <stdio.h>
#include <conio.h>
main()
{
    int i,n,s=0;
    printf(" \n\tChuong trinh liet ke tat ca va nhan \"uoc so\" cua so nguyen duong n ");
    do{
    printf("\nnhap gia tri n = ");
    scanf("%d",&n);
    if(n<=0)
      {
        printf(" gia tri cua n > 0.Xin nhap lai\n");
      }
    }while(n <= 0);
    i=1;
    while(i<=n){
        if(n%i==0)
        {

            printf("%4d\n",i);
            s++;
        }
        {
            if(i%2==1)
            printf(" %4d",i);
            }

            i++;
    }
    printf("\n\nco tat ca %d uoc so cua n \n",s);
    getch();

}

