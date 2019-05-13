#include <stdio.h>
#include <conio.h>
int main()
{
    int n,i;
    float day[20];
    printf ("nhap gia tri n = ");
    scanf ("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("nhap gia tri cau phan tu n = ");
        scanf("%d",day[i]);
    }
    printf("day so vua moi nhap vao : ");
    for (i=0;i<n;i++)
        printf ("%6.0f",day[i]);
        {

        }
}
