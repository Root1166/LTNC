#include <stdio.h>
#include <conio.h>
#include <math.h>
//Tim trong day xem so nao k phai so ngto && so chinh phuong;
int ktNT(int n){
	int i;
	for(i=2;i<=sqrt(n);i++)
		if(n % i == 0)
			return 0;
	return 1;
}
int ktCP(int n){
	if(sqrt(n) == (int) sqrt(n))
		return 1;
	return 0;
}
int main(){
	int a[100],i,dem=0,n;
	printf("\nNhap n= ");	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&a[i]);
	}
	//In day ban dau
	printf("Day ban dau: ");
	for(i=1;i<=n;i++)
		printf("%d ",a[i]);
	//In so k phai ngto cung k phai chinh phuong
	for(i=1;i<=n;i++)
		if((ktNT(a[i])==0) && (ktCP(a[i])==0)){
			printf("\nSo thoa man: %d",a[i]);
			dem++;
		}
	if(dem==0)
		printf("\nKhong co so nao thoa man.");

}
