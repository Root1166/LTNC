#include<stdio.h>
#include<conio.h>
void *max(int *a,int*b)
{
    if(*a>*b)
        return a;
    else return b;
}

main()
{
    int a=10,b=8,*c;
    c=max(&a,&b);
    printf("gia tri max la : %d",*c);
    getch();

}
