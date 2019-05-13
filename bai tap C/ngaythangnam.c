#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <
main()
	{
		char ten[26];
		char chuc_vu[30];
		char *trinh_do;
		clrscr();
		textcolor(LIGHTBLUE);
		cprintf("\n\r - Cho biet ho ten : ");
		ten[0]=26;
		strcpy(ten,cgets(ten));
		textcolor(LIGHTRED);
		cprintf("\n\r - Cho biet chuc vu : ");
		chuc_vu[0]=30;
		strcpy(chuc_vu,cgets(chuc_vu));
		trinh_do=calloc(26,sizeof(char));
		textcolor(YELLOW);
		cprintf("\n\r - Cho biet trinh do : ");
		trinh_do[0]=26;
		strcpy(trinh_do,cgets(trinh_do));
		clrscr();
		textcolor(YELLOW);
		cprintf("\n\r * Quy Ong (Ba) : %s",ten);
		textcolor(LIGHTCYAN);
		cprintf("\n\r * Chuc vu      : %s",chuc_vu);
		textcolor(LIGHTMAGENTA);
		cprintf("\n\r * Co trinh do  : %s",trinh_do);
		textcolor(LIGHTRED + BLINK);
		cprintf("\n\n\r%10c Bam phim bat ky de ket thuc",' ');
		getch();
	}

