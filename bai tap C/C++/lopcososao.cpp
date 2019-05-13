#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
#include <graphics.h>
#include<stdlib.h>
using namespace std;
class HINH // lớp cơ sở trừu tượng
{
    	private:
	int mau;
	public:
	HINH(int m)
	{
		mau=m;
	}
	int getmau()
	{
		return mau;
	}
virtual void  draw(int x, int y)=0; // phương thức ảo thuần túy
};
class DTHANG: public HINH // lớp cơ sở trừu tượng
{
    	private:
	int dodai;
	public:
	DTHANG(int d, int m) : HINH(m)
	{
		dodai = d;
	}
	virtual void  draw(int x, int y) // định nghĩa phương thức ảo
	{
		setcolor(getmau());
		line(x, y, x+dodai, y) ;
	}
};
class CHUNHAT: public HINH // lớp cơ sở trừu tượng
{
    	private:
	int rong, cao;
	public:
	CHUNHAT(int r, int c, int m) : HINH(m)
	{
		rong=r; cao = c;
	}
	virtual void  draw(int x, int y) // định nghĩa phương thức ảo
	{
		setcolor(getmau());
		rectangle(x, y, x+rong, y+cao);
		setfillstyle(1, getmau());
		floodfill(x+rong/2, y+cao/2, getmau());
	}
};
class VUONG: public CHUNHAT // lớp cơ sở trừu tượng
{
	public:
	VUONG(int a, int m) : CHUNHAT (a, a, m)
	{
		}
};
class HTRON: public HINH // lớp cơ sở trừu tượng
{
    	private:
	int bk; // bán kính
	public:
	HTRON (int bk1, int m) : HINH(m)
	{
		bk = bk1;
	}
	virtual void  draw(int x, int y) // định nghĩa phương thức ảo
	{
		setcolor(getmau());
		circle(x+bk, y+bk, bk);
		setfillstyle(1, getmau());
		floodfill(x+bk, y+bk, getmau());
	}
};
class PICTURE
{
    	private:
	HINH *h[4];
	public:
	PICTURE(HINH *h0, HINH *h1, HINH *h2, HINH *h3)
	{
		h[0] = h0;
		h[1] = h1;
		h[2] = h2;
		h[3] = h3;
	}
	void  paint();
};
int main()
{
HINH *h[4]; // Khai báo mảng con trỏ của lớp cơ sở
DTHANG dt(120, 14);
HTRON ht(60, RED);
CHUNHAT cn(120, 100, MAGENTA);
VUONG v(120, CYAN);
h[0] = &dt;
h[1] = &ht;
h[2] = &cn;
h[3] = &v;
int mh=0, mode=0;
initgraph(&mh, &mode, "");
setlinestyle(0,0,3);
  for (int i=0; i<4; i++)
   h[i]->draw(10+i*150, 200);
getch();
}

