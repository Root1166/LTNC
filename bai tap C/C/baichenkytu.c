#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>
 main()
 {
     char *dich,* nguon;
     int n;
     dich = calloc(100,sizeof(dich));
     nguon = calloc(100,sizeof(nguon));
     printf("nhap day nguon : ");
     gets(nguon);
     printf("Ban muon sao chep sang toan hang nguon sang dich la : ");
     scanf("%d",&n);
     strncpy(dich,nguon,n);
     printf("\nNoi cung cua chuoi sao chep la:%s ",dich);
     printf("\n Chieu dai cua sao chep la:%d ky tu",strlen(dich));
    getch();
 }
