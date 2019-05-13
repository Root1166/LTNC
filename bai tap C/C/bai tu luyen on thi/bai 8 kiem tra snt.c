#include <stdio.h>
#include <conio.h>
int main()
{
    int a[30],n,i,k;
    printf("nhap n = ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("nhap phan tu a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    printf("\nday vua moi nhap la:\n");
    for (i=0;i<n;i++)
        printf("%3d",a[i]);
    //kiem tra nguyen to
    for (i=0;i<n;i++)
    {
        if (a[i]<2)
            return 0;
        for(i=2;i<=n;i++)
        {
            if (a[i]%2==0)
            {
                printf("khong phai so nguyen to:\n");
                for (i=0;i<n;i++)
                    printf("%3d",a[i]);
            }
            else
            {
                 printf("la  so nguyen to:\n");
                  for (i=0;i<n;i++)
                    printf("%3d",a[i]);
            }

        }


    }
    getch();

}
