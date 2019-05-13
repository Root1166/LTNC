#include<stdio.h>
more()
{
    static int k=0;
    printf("\ngia tri cua k = %d",k++);
}

main()
{
    int k=0;
    for (k=50;k<100;k++)
    more();
    getch();
}
