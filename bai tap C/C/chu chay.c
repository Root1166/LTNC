#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<string.h>
#include <dos.h>
int main()
{
    int i;
    char *thongbao;
    char *inthongbao;
    char *dong[3];
    hop(2,2,78,8);
    Window(3,3,77,7);
    gotoxy(24,1);
    printf("\nNHAP 3 DONG NOI DUNG QUANG BAO ");
    inthongbao=calloc(71,sizeof(char));
    thongbao = calloc(255,sizeof(char));
    for(i=0;i<3;i++)
    {
        dong[i] = calloc(70,sizeof(char));
        dong[i][0]= 72;
        gotoxy(1,i+2);
        printf("Dong %d : ",i,i+1);
        strcpy(dong[i],gets(dong[i]));
        strcat(dong[i]," ");
        strcat(thongbao,dong[i]);
    }
    strcat(thongbao," . ");
    strcat(thongbao,thongbao);
    strcat(thongbao," ");
    Window(1,1,80,24);
    hop(3,10,77,12);
    Window(4,11,76,11);
    for(i=0;i<strlen(thongbao);i++)
    {
        strncpy(inthongbao,thongbao+i,71);
        gotoxy(1,1);
        printf("%s",inthongbao);
        delay(1000);
    }
}


void hop(int x1,int y1,int x2,int y2)
{
    int i;
    gotoxy(x1,y1);
    putch(201);
    for(i=x1+1;i<=x2-1;i++)
        putch(205);
        putch(187);
        gotoxy(x1,y2);
        putch(200);
        for(i=x1+1;i<=y2-1;i++)
            putch(205);
            putch(188);
        for(i=y1+1;i<=y2-1;i++)
        {
            gotoxy(x1,i);
            putch(186);
            gotoxy(x2,i);
            putch(186);

        }


}
