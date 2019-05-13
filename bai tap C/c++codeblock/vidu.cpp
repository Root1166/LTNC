#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <stdlib.h>
int main()
{
	srand(time_t(NULL));
	int driver = 0, mode = 0, maloi;
	int x;
	int dong;
	printf("Nhap kich thuoc man hinh: ");
	scanf("%d", &x);
	printf("\n Nhap so cot = so dong: ");
	scanf("%d", &dong);

	initwindow(x, x, "TrungDinh", 0, 0, false, true);
	int y = x;
	int k = x;

	// lan 1
	int d = 600;
	int m = 0;

	// lan 2
	int u = 600;
	int p = 0;

	// lan 3
	int h = 600;
	int g = 0;
	// lan 4
	int n = 600;
	int z = 0;

	for (int i = 1; i <= dong; i++){
		setlinestyle(0, 0, 2);
		setcolor(rand()%14+1);
		rectangle(0, 0, x, x);
		x = x - y/dong;
		delay(400);
	}
	for (int i = 1; i <= dong; i++){
		setlinestyle(0, 0, 2);
		setcolor(rand() % 14+1);
		rectangle(k, k, 600, 600);
		k = k - y / dong;
		delay(400);
	}

	for (int i = 1; i <= dong; i++){
		setlinestyle(0, 0, 2);
		setcolor(rand() % 14 + 1);
		line(0+m, 0, d, d-m);
		m += d / dong;
		delay(400);
	}

	// lan 2
	for (int i = 1; i <= dong; i++){
		setlinestyle(0, 0, 2);
		setcolor(rand() % 14 + 1);
		line(0, 0 + p , u - p, u);
		 p+= u / dong;
		delay(400);
	}

	// lan 3
	for (int i = 1; i <= dong; i++){
		setlinestyle(0, 0, 2);
		setcolor(rand() % 14 + 1);
		line(h-g,0, 0, h-g);
		g += h / dong;
		delay(400);
	}

	// lan 4
	for (int i = 1; i <= dong; i++){
		setlinestyle(0, 0, 2);
		setcolor(rand() % 14 + 1);
		line(n, 0+z, 0+z, n);
		z += n / dong;
		delay(400);
	}

	// ma tran
	getch();

	closegraph();
}
