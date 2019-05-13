#include <stdio.h>
#include <conio.h>
int main()
{
    int n,i;
    float day[150],sd,sa;
    printf("nhap day n = ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {

        printf("nhap phan tu day[%d] =",i);
        scanf("%f",&day[i]);
    }
    printf("day vua moi nhap la = ");
    for(i=0;i<n;i++)
        printf("%6.0f",day[i]);
    {
        for (i=0;i<=n;i++)
        {
            if (day[i]>0)
                sd+=day[i];
            else
                sa=sa+day[i];
        }
    printf("\ngai tri tong cua phan tu duong trong day = %6.0f",sd);
    printf("\ngai tri tong cua phan tu am trong day = %3.0f",sa);
    }
    return (0);

}
