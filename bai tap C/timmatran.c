#include <stdlib.h>
#include <stdio.h>
void Bai1(){
	//Kiểm tra số nguyên tố
	int n;
	printf("Nhap so N = ");
	scanf("%d",&n);
	int i=2;
	unsigned short ktNT=1;
	while(i< (int)abs(n)){
		if(n%i == 0){
			ktNT=0;
			break;
		}
		i++;
	}
	if(ktNT)
		printf("%d la so nguyen to",n);
	else
		printf("%d khong la so nguyen to",n);
}

void Bai2(){
	// Nhập ma trận và tìm MAX min
	unsigned int row=0,col=0;
	printf("\tMA TRAN\r\n");
	printf("\tNhap so hang: ");
	scanf("%d",&row);
	printf("\tNhap so cot: ");
	scanf("%d",&col);
	printf("\r\n");
	int matrix[col][row],x,y;
	for(y=0;y<row;y++)
		for(x=0;x<col;x++){
			printf("Matrix[%d][%d] = ",x,y);
			fflush(stdin);
			scanf("%d",&matrix[x][y]);
		}
	printf("\rMa tran da nhap: \n");
	int MAX=matrix[0][0],min=matrix[0][0];
	for(y=0;y<row;y++){
		for(x=0;x<col;x++){
			if(matrix[x][y] > MAX)
				MAX=matrix[x][y];
			if(matrix[x][y] < min)
				min=matrix[x][y];
			printf("%-6d",matrix[x][y]);
		}
		printf("\r\n");
	}
	printf("MAX = %d\r\n",MAX);
	printf("min = %d",min);
}

void Bai3(){
	//Kiểm tra dãy nguyên dương có hoán vị hay không
	unsigned int len;
	printf("So phan tu cua day: ");
	scanf("%d",&len);
	int arr[len],i,j,tg;
	for(i=0;i<len;i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	//Sắp xếp
	for(i=0;i<len-1;i++)
		for(j=i+1;j<len;j++)
			if(arr[i] > arr[j]){
				tg=arr[i];
				arr[i]=arr[j];
				arr[j]=tg;
			}

	tg=1;
	i=0;
	while(i < len-1)
		if(arr[i]+1 != arr[++i])
			tg=0;
	if(tg)
		printf("Day da nhap la day hoan vi");
	else
		printf("Day da nhap khong la day hoan vi");
}

int main(void){
	unsigned short opt;
	do{
		system("cls");
		printf("\r\n\tMenu Chuc Nang\r\n");
		printf("1. Kiem tra so nguyen to\r\n");
		printf("2. Nhap ma tran, tim MAX, min cac phan tu\r\n");
		printf("3. Kiem tra day nguyen duong hoan vi\r\n");
		printf("4. Thoat\r\n\t");
		printf("=> Chon: ");
		fflush(stdin);
		scanf("%d",&opt);
		system("cls");
		switch(opt){
			case 1:
				Bai1();
				break;
			case 2:
				Bai2();
				break;
			case 3:
				Bai3();
				break;
			case 4:
				exit(0);
		}
		getch();
	}while(opt!=4);
	return 0;
}