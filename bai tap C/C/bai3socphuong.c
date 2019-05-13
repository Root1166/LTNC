#include<conio.h>
#include<stdio.h>
#include<malloc.h>
int main()
{
    float* p;
    int n,i,j,dem=0;
    printf("nhap n = ");
    scanf("%d",&n);
    p = (float*)malloc(n*sizeof(float));
    for(i=1;i<n;i++)
    {
        printf("nhap phan tu a[%d] = ",i);
        scanf("%f",&p[i]);
    }
    //tim so chinh phuong:
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        if(p[i]==p[j]*p[j]){
        printf("\n so thoa man de bai la %5.1f : %5.1f ",p[i],p[j]);
        dem++;
    }
    if(dem=0)
        printf("\nkhong co so thoa man");
    getch();





}
