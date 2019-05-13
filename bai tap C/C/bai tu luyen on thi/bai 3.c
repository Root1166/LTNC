#include <stdio.h>
#include <conio.h>

void main(){
	int n,m,i,j,k=0;
	float a[20], b[20], c[40];

	printf("Nhap ma tran A.\n");
	printf(" Nhap so phan tu n = ");
	scanf("%d",&n);
	for(i=0; i<=n; i++){
		printf(" Nhap a[%d] = ",i+1);
		scanf("%f",&a[i]);
	}

	printf("Nhap ma tran B.\n");
	printf(" Nhap so phan tu m = ");
	scanf("%d",&m);
	for(j=0; j<=m; j++){
		printf(" Nhap b[%d] = ",j+1);
		scanf("%f",&b[j]);
	}

	i=j=k=0;
	//Ghep 2 mang
	while(k<=n+m){
		if(i>=n)
			{c[k++] = b[j++];	continue;}
		if(j>=m)
			{c[k++] = a[i++]; 	continue;}
		if(a[i]<b[j])
			c[k++] = b[i++];
		else
			c[k++] = b[j++];
	}
	//In mang A
	printf("Mang a: ");
	for(i=0;i<n;i++)
			printf("%6.2f",a[i]);
	//In mang B
	printf("\nMang b: ");
	for(j=0;j<m;j++)
			printf("%6.2f",b[j]);
	//In mang C
	printf("\nMang c: ");
	for(k=0;k<n+m;k++)
			printf("%6.2f",c[k]);

	getch();
}
