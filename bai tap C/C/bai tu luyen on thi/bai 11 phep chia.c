#include <stdio.h>
#include <conio.h>
int main()
{
    int sbchia,schia,sdu,thuong=0;
    printf("xin moi nhap so bi chia: ");
    scanf("%d",&sbchia);
    printf("xin moi nhap so chia: ");
    scanf("%d",&schia);
    printf("neu lay so %d chia cho so %d thi\n",sbchia,schia);
    while(schia < sbchia)
    {
        sbchia = sbchia-schia;
        thuong=thuong + 1;
    }
    sdu = sbchia;
    printf("thuong so la : %d",thuong);
    printf("\nso du =%d",sdu);
    getch();


}
