#include<stdio.h>
#include<conio.h>
#include<math.h>
#include <string.h>
// nguyên tố => true
  int n,i;
void KiemTraNguyenTo()
{
	if (n < 2)
	{
		return 0;
	}
	else if (n > 2)
	{
		if (n % 2 == 0)
		{
			return 0;
		}
		for ( i = 3; i <= (sqrt((float)n)); i += 2)
		{
			if (n % i == 0)
			{
				return 0;
			}
		}
	}
	return 1;
}

void LietKeNguyenTo()
{
	for( i = 2; i < n; i++)
	{		if(KiemTraNguyenTo() == 1)
			printf("%4d", i);
	}
}
int main()
{
	int n;
	printf("\nNhap n: ");
	scanf("%d", &n);

	LietKeNguyenTo();

	getch();
	return 0;
}
