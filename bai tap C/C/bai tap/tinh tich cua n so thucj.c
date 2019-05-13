#include <stdio.h>
#include <conio.h>
int main ()
{
    int n,i,j;
    float a[30],temp;
    puts("anh cong 9768");
    printf("nhap gia tri n = ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf ("\nnhap phan tu a[%d]= ",i);
        scanf("%f",&a[i]);
    }

    printf ("day vua moi nha la:\n");
    for(i=0;i<n;i++)
        printf ("%6.0f",a[i]);
        //======================================
    for (i=0;i<=n-1;i++)
        for(j=i+1;j<n;j++)
           if (a[i]<a[j])
            {

            }









}
