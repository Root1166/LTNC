#include <stdio.h>
#include <conio.h>

void main(){
	int a[10][10],h1,h2,c1,c2,n,i,j,k=1;
	printf("\tNhap cap cua ma tran n= ");
	scanf("%d",&n);
	h1=c1=1;
	h2=c2=n;
	while(c1<=c2){
		for(j=c1; j<=c2; j++)
			a[h1][j] = k++;
		for(i=h1+1; i <= h2; i++ )
			a[i][c2] = k++;
		for(j = h2-1; j >= h1; j--)
			a[h2][j] = k++;
		for(i = c2-1; i >= c1+1; i-- )
			a[i][c1] = k++;
		h1++;c1++;
		h2--;c2--;
	}
	printf("Ma tran xoay cap %d \n",n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++)
			printf("%-4d",a[i][j]);
		printf("\n");
	}
	getch();
}
