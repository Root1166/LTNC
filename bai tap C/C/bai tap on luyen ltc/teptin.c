#include<stdio.h>
#include<conio.h>
int main()
{
   char c;
   int a[30],n,i,j;
   FILE *f;
   printf("\n\tghi du .lieu vao tep tin Chuoi.TXT");
   printf("\n\tMinh hoa ham fputs():");
   f = fopen("chuoi.txt","a");
   printf("nhap gia tri cua n = ");
   scanf("%d",&n);
   for(i=0;i<n;i++);
   {
       printf("nhap a[%d] = ",i)
       scanf("%d",&a[i]);
   }
   fprintf(f,")
   fclose(f);
   printf("\n\tDa Ghi Tep Tin Chuoi.txt vao dia ");
   printf("\n\tBam Phim Bat Ky De Ket Thuc:");
   getch();

}

