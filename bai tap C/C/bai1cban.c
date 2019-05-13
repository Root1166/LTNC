#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<malloc.h>
main ()
{
     char* p;
     p = (char*)malloc(256);
     printf("\n Nhap xau ki tu :");
     gets (p);
     printf("chuoi sau khi dao nguoc la :\n %s ",strrev(p));
     getch();
     }
