#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>


void hoa(char *xau)
    {
        for(int i=0;i<strlen(xau);i++)
            xau[i]=toupper(xau[i]);
    }
void thuong(char *xau)
     {
        for(int i=0;i<strlen(xau);i++)
            xau[i]=tolower(xau[i]);
     }

main(void)
    {
          char x[200];
          printf("Nhap vao 1 chuoi :");
          fflush(stdin);
          gets(x);
          hoa(x);
          printf("Chuoi viet hoa : %s",x);
          thuong(x);
    }
