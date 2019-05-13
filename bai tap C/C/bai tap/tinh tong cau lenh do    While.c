#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=1;
    float tong=0;
    printf("tinh tong binh phuong cac so:");
    scanf("%d",&n);
    do
    {
        tong+=(i*i);
        i++;
    }
    while(i<=n);
    printf("gia tri cua tong:%.0f",tong);
    getch();



}
