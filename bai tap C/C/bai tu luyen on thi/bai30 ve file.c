#include <stdio.h>
#include <conio.h>
void main()
{
    int i = 0,d;
    char dong_kt[256];
    FILE *f;
    f = fopen("van_ban","w");
    while(1)
    {
        i++;
        printf("dong thu %d (Bam enter dee ket thuc):",i);
        gets(dong_kt);
        if(dong_kt[0] = '\0')   break;
        if (i>1)   fputc(10,f);
        fputs(d, f);
    }

    fclose(f);
    getch();
}
