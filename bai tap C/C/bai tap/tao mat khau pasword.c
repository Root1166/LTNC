#include <stdio.h>
#include <conio.h>
main()
{
    char mk;
    printf("xin moi nhap mat khau:");
    scanf("%s",&mk);
    while (mk !='m')

    {
        printf("\nxin moi nhap mat khau:");
        scanf("%s",&mk);
    }
    printf("\nban da go dung mat khau ");
    getch();
}
