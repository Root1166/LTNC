#include <stdio.h>
#include <conio.h>
int main()
{
    int so,tong=0,n=0;
    float tb;
    do
    {
        printf("nhap so:");
        scanf("%d",&so);
        tong+=so;
        n+=1;
    }
    while(so!=0);
    n-=1;
    tb=tong/n;
    printf("ban da nhap vao:%dso\n",n);
    printf("\ngia tri cua tb:%f",tb);
    getch();
}
