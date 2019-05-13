#include<stdio.h>
#include<conio.h>
main()
{
    int a[30],n,j,i;
    printf("nhap n = ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("nhap so phan tu a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("danh sach ban vua nhap:\n");
    for(i=0;i<n;i++)
        printf("%3d",a[i]);
    //kiem tra co pai so nguyen to hay khong
    for(i=0;i<n;i++)
  {
      for(j=2;j<=a[i];j++)
      {
        if (a[i]%j==0) break;
      }
      if(j==a[i]){
        printf("\nso nguyen to:\n");
      }
      else
      {
      printf("\nkhong phai so nguyen to:%d",a[i]);
  }


}
}
